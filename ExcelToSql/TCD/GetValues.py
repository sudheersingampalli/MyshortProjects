def get_values(sheet):
    '''Build the query for inserting into ICTM_DCD_INT_RATE_C'''
    dictvals = {}

    list_tenor_1 =[]
    int_rate =[]
    fix_Date =[]
    eff_date_det=[]
    mat_Date =[]
    flg_prod_typ =[]
    ind = 4


    dictvals['eff_date'] = str(sheet.cell_value(5,4))
    dictvals['deposit_ccy'] = str(sheet.cell_value(6,4))
    dictvals['link_ccy1'] = str(sheet.cell_value(7,4))
    dictvals['link_ccy2'] = str(sheet.cell_value(8,4))
    dictvals['tenor_basis'] = str(sheet.cell_value(9,4))
    dictvals['maker'] = str(sheet.cell_value(10,4))
    dictvals['makerstamp'] = str(sheet.cell_value(11,4))
    dictvals['checker'] = str(sheet.cell_value(12,4))
    dictvals['checkerstamp'] = str(sheet.cell_value(13,4))
    dictvals['modno'] = str(sheet.cell_value(14,4))
    dictvals['recstat'] = str(sheet.cell_value(15,4))
    dictvals['authstat'] = str(sheet.cell_value(16,4))
    dictvals['onceauth'] = str(sheet.cell_value(17,4))

    # fetching tenor in det
    try:
        while sheet.cell_value(28,ind) != '':
            list_tenor_1.append(str(sheet.cell_value(28,ind)))
            ind = ind +1
    except IndexError:
        pass
    dictvals['tenor_1'] = list_tenor_1
    ind = 4

    #fetching interest rate in det
    try:
        while sheet.cell_value(29, ind) != '':
            int_rate.append(str(sheet.cell_value(29, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['int_rate'] = int_rate
    ind = 4

    # fetching fixing_Date
    try:
        while sheet.cell_value(30, ind) != '' or sheet.cell_value(30, ind+1) != '':
            fix_Date.append(str(sheet.cell_value(30, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['fix_date'] = fix_Date
    ind = 4

    # fetching mat_Date in det
    try:
        while sheet.cell_value(32, ind) != '' or sheet.cell_value(32, ind+1) != '':
            mat_Date.append(str(sheet.cell_value(32, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['mat_date'] = mat_Date
    ind = 4

    # fetching flag_prod_type in det
    try:
        while sheet.cell_value(37, ind) != '':
            flg_prod_typ.append(str(sheet.cell_value(37, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['flg_prod_typ'] = flg_prod_typ
    
    return dictvals
