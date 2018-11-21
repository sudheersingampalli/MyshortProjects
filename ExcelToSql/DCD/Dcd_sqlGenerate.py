import xlrd
import IntRateC
import IntRateDetCustom
import IntRateMasterC
import IntRateDetC
import glob
import GetValues
import DcdSummary
'''This is the driving code..the start'''
def getxcelsheet(file_location):
    workbook = xlrd.open_workbook(file_location)
    sheet = workbook.sheet_by_index(0)
    return sheet


if __name__ == '__main__':
    '''Place the excel sheets at a particular location'''
    files= glob.glob("D:\Projects\Onsite\dcd_tcd\\dcd\*.xlsx")

    for filename in files:
        print (filename)
        sheet = getxcelsheet(filename) # get the sheet from each excel
        vals = GetValues.get_values(sheet) # get the values from the sheet
        with open("incForDCD.inc",'a') as incForDcd :# create a file incForDCD in append mode
            IntRateC.qry_builderINT_RATE_C(vals,incForDcd)  # call the program to build INT_RATE_C table
            print ('')
            IntRateMasterC.qry_builderINT_RATE_MAS_C(vals,incForDcd) # call the program to build INT_RATE_MASC table
            print ('')
            IntRateDetCustom.qry_builderINT_RATE_DET_CUSTOM(vals,incForDcd) # call the program to build INT_RATE_DET_CUSTOM table
            print ('')
            IntRateDetC.qry_builderINT_RATE_DET_C(vals,incForDcd) # call the program to build INT_RATE_DET_C table
            print ('')
            DcdSummary.qry_builderRecordMaster(vals,incForDcd)






