# date       : 16/02/2015
# name       : Sudheer
# description: This program is just a variant of the the program getFilePath.py where it finds the file
#              and prints its absolute path on the console and beeps once as soon as the file is found.
#              If the file is not found then the system beeps twice.

import winsound
import sys
import os


# absolutePath(dir,searchstr)
# This function take the directory name and the filename as input
# and returns the absolute path of the file by searching it inside the subfolders
# inputs  : dir       : directory in which the file should be searched
#           searchstr : name of the file which should be searched.
# returns : the absolute path on the console.

def absolutePath(dir,searchstr):
    rootDir=dir
    flag=0
    freq=2500
    dur=1000
    for subdir,subfolders,files in os.walk(rootDir):
        for filename in files:
            if filename.lower() == searchstr.lower() :
                flag=1
                path=os.path.join(subdir,filename)
                abspath=os.path.abspath(path)
                print abspath
                winsound.Beep(freq,dur)
                exit(1)
    if flag == 0:
         print 'FILE NOT FOUND'
         winsound.Beep(freq,dur)
         winsound.Beep(freq,dur)
         
def main():
    absolutePath(sys.argv[1],sys.argv[2])
    
if __name__=='__main__':
    main()
