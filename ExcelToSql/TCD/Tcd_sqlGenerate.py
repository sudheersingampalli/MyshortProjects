'''This is the main file.
Change the source path from where the excel should be read'''

import xlrd
from xlrd import XLRDError
import IntRateC
import IntRateDetCustom
import IntRateDetC
import glob
import GetValues
import TCDSummary

def getxcelsheet(file_location):
    workbook = xlrd.open_workbook(file_location)
    sheet = workbook.sheet_by_index(0)
    return sheet


if __name__ == '__main__':

    #files= glob.glob("D:\Projects\Onsite\dcd_tcd\\tcd\*.xlsx")
    files = glob.glob("D:\Projects\Onsite\dcd_tcd\\tcd\*.xlsx")
    for filename in files:
        print (filename)
        sheet = getxcelsheet(filename)
        vals = GetValues.get_values(sheet)
        with open("incForTCD.inc",'a') as incForTcd:
            IntRateC.qry_builderINT_RATE_C(vals,incForTcd)
            incForTcd.close()
            print ('')
            incForTcd = open("incForTCD.inc",'a')
            IntRateDetCustom.qry_builderINT_RATE_DET_CUSTOM(vals,incForTcd)
            print ('')
            IntRateDetC.qry_builderINT_RATE_DET_C(vals,incForTcd)
            print ('')
            TCDSummary.qry_builderRecordMaster(vals,incForTcd)







