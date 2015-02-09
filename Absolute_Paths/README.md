#### Input format : 

###### python getFilepath.py C:\Users\Public sampletable
###### where argv[1] = root directory path
######       argv[2] = table name where the filename and paths should be saved.

####      Table script : 

######-- Create table
######create table sampletable
######(
######  filename VARCHAR2(100),
######  filepath CLOB
######);

#### Output : 

######File.txt will be saved in the with the following sample information :

######insert into sampletable values ('Adobe Reader XI.lnk','C:\Users\Public\Desktop\Adobe Reader XI.lnk');
######commit;
