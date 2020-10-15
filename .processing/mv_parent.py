# 各フォルダの中身がスカスカなので外に出す
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
    if subprocess.check_call("mv {} ./AtCoder/".format(file).split(' ')) != 0:
        print("\033[31mMV : {} is error!\033[0m".format(file))
        continue
    print("{} is done.".format(file))