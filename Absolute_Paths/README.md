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

Output : File.txt will be saved in the with the following sample information :

insert into sampletable values ('Adobe Reader XI.lnk','C:\Users\Public\Desktop\Adobe Reader XI.lnk');
insert into sampletable values ('Beehive Workspaces - Explorer Extension.lnk','C:\Users\Public\Desktop\Beehive Workspaces - Explorer Extension.lnk');
insert into sampletable values ('Desktop Tools.lnk','C:\Users\Public\Desktop\Desktop Tools.lnk');
insert into sampletable values ('desktop.ini','C:\Users\Public\Desktop\desktop.ini');
insert into sampletable values ('Google Chrome.lnk','C:\Users\Public\Desktop\Google Chrome.lnk');
insert into sampletable values ('Mozilla Firefox.lnk','C:\Users\Public\Desktop\Mozilla Firefox.lnk');
insert into sampletable values ('Mozilla Thunderbird.lnk','C:\Users\Public\Desktop\Mozilla Thunderbird.lnk');
commit;
