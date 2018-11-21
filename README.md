# MyshortProjects
Small Python snippets 

## Temp_delete.py
This script will delete the temporary directories and files present at C:\Users\username\ folder in your windows machine.
Thereby saving space on our system and helps in fast startup of the machine.

### Steps to follow
* Place the file in the directory  C:\Users\<your_username>\
* open the file and change the third line to temp = 'C:\\\Users\\\\<your_username>\\\AppData\\\Local\\\Temp' and save it.
* open command prompt(by default it will point to C:\Users\<your_username>\)
* run the script as "py temp_delete.py"

## Excel To Sql Conversion (ExcelToSql)
This script is used to fetch data from excel sheet and prepare a .INC files.
These .INC files can be compiled in the Oracle DB.

### Background
Japanese banks use a feature called Double Curreny Deposits(DCD) and Triple Curreny Deposits(TCD).
Kindly google to know how DCD and TCD work. The exchange rates are provided in excel sheets with respect to the curreny pairs. This python program will fetch the exchange rates from excel sheet and builds a .INC file.
This program has two different subprograms DCD and TCD.

### Instructions
* For DCD the driving program is **Dcd_sqlGenerate.py**
* Change the below line to the path where the excel sheets are placed.
```
files= glob.glob("D:\Projects\Onsite\dcd_tcd\\dcd\*.xlsx")
```
* Run **Dcd_sqlGenerate.py**
* it will generate a text file **incForDCD.inc**
* Similary for TCD the driving progra is **Tcd_sqlGenerate.py**
