# date       : 09/02/2015
# name       : Rejun/Sudheer
# description: This program generates a insert script file which contains the filename and the absolute path which is built
#              for a given directory.

import sys
import os
# getFilePath(direc,tablename)
# This function takes directory and the tablename to build the insert script
# input: 'direct' is the root directory.
# input: 'tablename' is the table in which the filename and path should be stored.
# output: a file named insertscript.txt which has the insert query for the given tablename.

def getFilePath(direc,tablename):
    rootDir=direc
    f=open('insertscript.txt','w')
    for subdir,subfolders,files in os.walk(rootDir):
        for filename in files:
            path=os.path.join(subdir,filename)
            abspath=os.path.abspath(path)
            f.write('insert into %s values (\'%s\',\'%s\');\n'%(tablename,filename,abspath) )
    f.write('commit;')
    f.close()

   
def main():
    getFilePath(sys.argv[1],sys.argv[2])
    

if __name__=='__main__':
    main()
