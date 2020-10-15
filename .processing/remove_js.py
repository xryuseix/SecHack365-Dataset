import glob
import os
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
        print(path)
        s = f.read()
        s = re.sub(r" \/ \$\(function.*;[\r\n]+Time Limit", "\nTime Limit", s)
        s = re.sub(r"^(問題文の引用元[\s\S]*?)#include", r"/*\n\1*/\n#include", s)
    with open(path,'w') as f:
        f.write(s)