from os import walk
import os

f = []
for (dirpath, dirnames, filenames) in walk("."):
    for x in filenames:
        if not "change64" in x:
            f.append(dirpath + "/" + x)

for i in range(0, len(f)):
    f[i] = f[i].replace("./", "")

print(f)

for filename in f:
    text = ""
    with open(filename, "rb") as my_file:
        text = my_file.read()

    text = text.replace("-m32".encode('utf-8'), "-m64".encode('utf-8'))

    with open(filename, "wb") as my_file:
        my_file.write(text)
