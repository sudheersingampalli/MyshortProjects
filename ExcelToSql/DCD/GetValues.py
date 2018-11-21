def get_values(sheet):
    '''Build the query for inserting into ICTM_DCD_INT_RATE_C'''
    dictvals = {}
    list_spread1_det =[]
    list_spread2_det=[]
    list_spread_rate_mas=[]
    list_tenor1_det =[]
    list_tenor2_det =[]
    int_rate =[]
    fix_Date =[]
    mat_Date =[]
    flg_prod_typ =[]

    dictvals['eff_date'] = str(sheet.cell_value(5,4))
    dictvals['deposit_ccy'] = str(sheet.cell_value(6,4))
    dictvals['link_ccy'] = str(sheet.cell_value(7,4))
    dictvals['tenor_basis'] = str(sheet.cell_value(8,4))
    dictvals['maker'] = str(sheet.cell_value(9,4))
    dictvals['makerstamp'] = str(sheet.cell_value(10,4))
    dictvals['checker'] = str(sheet.cell_value(11,4))
    dictvals['checkerstamp'] = str(sheet.cell_value(12,4))
    dictvals['modno'] = str(sheet.cell_value(13,4))
    dictvals['recstat'] = str(sheet.cell_value(14,4))
    dictvals['authstat'] = str(sheet.cell_value(15,4))
    dictvals['onceauth'] = str(sheet.cell_value(16,4))

    ind = 4

    # fetching spread1 for ictm_dcd_int_rate_det_c
    try:
        while sheet.cell_value(37,ind) != '':
            list_spread1_det.append(str(sheet.cell_value(37,ind)))
            ind = ind + 1
    except IndexError:
        pass
    dictvals['spread_rate_det1'] = list_spread1_det
    ind =4

    # fetching spread2 for ictm_dcd_int_rate_det_c
    try:
        while sheet.cell_value(43, ind) != '':
            list_spread2_det.append(str(sheet.cell_value(43, ind)))
            ind = ind + 1
    except IndexError:
        pass
    dictvals['spread_rate_det2'] = list_spread2_det
    ind = 4

    # fetching spread in master
    try:
        while sheet.cell_value(26, ind) != '':
            list_spread_rate_mas.append(str(sheet.cell_value(26, ind)))
            ind = ind + 1
    except IndexError:
        pass
    dictvals['spread_rate_mas'] = list_spread_rate_mas
    ind = 4

    # fetching tenor1 for ictm_dcd_int_rate_det_c
    try:
        while sheet.cell_value(38, ind) != '':
            list_tenor1_det.append(str(sheet.cell_value(38, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['list_tenor1_det'] = list_tenor1_det
    ind = 4

    # fetching tenor2 for ictm_dcd_int_rate_det_c
    try:
        while sheet.cell_value(44, ind) != '':
            list_tenor2_det.append(str(sheet.cell_value(44, ind)))
            ind = ind + 1

    except IndexError:
        # print 'cell not present'
        pass
    dictvals['list_tenor2_det'] = list_tenor2_det
    ind = 4

    # fetching interest rate in det
    try:
        while sheet.cell_value(39, ind) != '':
            int_rate.append(str(sheet.cell_value(39, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['int_rate'] = int_rate
    ind = 4

    # fetching fixing_Date in det while sheet.cell_value(42, ind) <> '' or sheet.cell_value(42, ind+1) <> '':
    try:
        while sheet.cell_value(40, ind) != '' or sheet.cell_value(40, ind+1) != '':
            fix_Date.append(str(sheet.cell_value(40, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['fix_date'] = fix_Date
    ind = 4


    # fetching mat_Date in det
    try:
        while sheet.cell_value(42, ind) != '' or sheet.cell_value(42, ind+1) != '':
            mat_Date.append(str(sheet.cell_value(42, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['mat_date'] = mat_Date
    ind = 4

    # fetching flag_prod_type in det
    try:
        while sheet.cell_value(47, ind) != '':
            flg_prod_typ.append(str(sheet.cell_value(47, ind)))
            ind = ind + 1

    except IndexError:
        #print 'cell not present'
        pass
    dictvals['flg_prod_typ'] = flg_prod_typ
    ind = 4
    return dictvals
