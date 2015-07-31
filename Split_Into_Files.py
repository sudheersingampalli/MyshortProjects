# date       : 31/07/2015
# name       : Sudheer
# description: This program takes a file as input which has many lines. Then it takes every 100 lines 
#              and it creates multiple files. 
# This program is useful when you have a big script file and you want to run the commands in server. 
# Since, a big script file is divided into multiple files, now we can run the scripts parallelly. 

# Running the program
"""Get the file which you want to split through the command line args. 
eg : C:\Python27\progs>python split_into_files.py dropSpc.sql
Here split_into_files.py is the program name and dropSpc.sql is the file name which has 12000 lines that is to be 
splitted. The below program throws a StopIteration exception"""

import sys
def main(filename):
	N=100  # Number of lines in each file
	i=0
	f=open(filename,'rU')  # Open the file passed through command Line args
	for j in range(1,125): # here 12000 / 100 = 120 files. So I have hardcoded the number of files to 125 
		f1 = open('file'+str(j)+'.txt','w');  # creating new file name each time eg: file1,file2,file3 etc
		for i in range(N):
			line=f.next()   # iterator next has the current line in it.
			f1.write(line)  # write the current line into file pointed by f1.
		f1.close()          # close the current file.
	f.close()
	
if __name__=='__main__':
    main(sys.argv[1])
