# 簡単すぎる問題を削除する
import glob
import os
import subprocess
import re

# ファイル一覧を取得する
def get_file_names(path):
    allfile = glob.glob(path + "/*")
    return allfile


dirs = get_file_names("./AtCoder")
files = []

for dir in dirs:
    file_in_dir = get_file_names(dir + "/")
    files.extend(file_in_dir)

for path in files:
    with open(path, 'r') as f:
        s = f.read()
        try:
            # include以降
            all = re.search(r"#include[\s\S]*$", s)
            allcount = all.end()-all.start()
            # main以降
            main = re.search(r"int main\([\s\S]*$", s)
            maincount = main.end()-main.start()
        except:
            print("\033[31mCOUNT : {} is error!\033[0m".format(path))
            continue
        #簡単そうな問題削除
        if allcount > 1500 and maincount > 500:
            continue
        if subprocess.check_call("rm {}".format(path).split(" ")) != 0:
            print("\033[31mMV : {} is error!\033[0m".format(path))
            continue
        print("{} is deleted.".format(path))