Input format : python getFilepath.py C:\Users\Public sampletable
where argv[1] = root directory path
      argv[2] = table name where the filename and paths should be saved.

Table script : 

-- Create table
create table sampletable
(
  filename VARCHAR2(100),
  filepath CLOB
);
