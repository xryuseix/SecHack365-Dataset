import glob
import os
import subprocess

# ファイル一覧を取得する
def get_file_names(path):
    allfile = glob.glob(path + "/*")
    return allfile


dirs = get_file_names("./AtCoder")

files = []

for dir in dirs:
    file_in_dir = get_file_names(dir + "/")
    files.extend(file_in_dir)

for file in files:
    if subprocess.check_call("mv {} {}.cpp".format(file, file[:-4]).split(' ')) != 0:
        print("\033[31mMV : {} is error!\033[0m".format(file))
        continue
    if subprocess.call("./.processing/clang-format -style=file -i {}".format(file[:-4] + '.cpp').split(' ')) != 0:
        print("\033[31mCLANG : {} is error!\033[0m".format(file))
        continue
    print("{} is done.".format(file))