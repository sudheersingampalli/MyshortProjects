import sys
import os


# This function takes directory of your choice and prints all the files within that directory
# can also be used to delete the file if os.remove is uncommented
# input: folder from where  the files should be deleted
# output: the absolute paths of all the files present in all the subfolders


def getFilePath(direc):
    rootDir = direc

    for subdir, subfolders, files in os.walk(rootDir):
        for filename in files:
            path = os.path.join(subdir, filename)
            abspath = os.path.abspath(path)
            print(abspath)
            # print('remvoing -->',filename, abspath)
            # os.remove(abspath)


def main():
    path = input('Give the path')
    getFilePath(path)


if __name__ == '__main__':
    main()
