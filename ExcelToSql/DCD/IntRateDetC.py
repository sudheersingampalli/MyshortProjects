import appendQuote

def qry_builderINT_RATE_DET_C(dictvals,incForDcd):
    incForDcd.write('--ICTM_DCD_INT_RATE_DET_C ' + "\n")
    print ('/*ICTM_DCD_INT_RATE_DET_C*/')
    cnt = 0
    while cnt < len(dictvals['spread_rate_det1']):

        qry_builder = 'insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)' \
                        'values ('
        qry_det_custom = qry_builder + appendQuote.to_date(dictvals['eff_date'])+ ','\
                                    + appendQuote.append(dictvals['deposit_ccy'])+ ',' \
                                    + appendQuote.append(dictvals['link_ccy']) + ',' \
                                    + dictvals['spread_rate_det1'][cnt] + ',' \
                                    + dictvals['list_tenor2_det'][cnt] + ',' \
                                    + dictvals['int_rate'][cnt]+ ',' \
                                    + appendQuote.to_date(dictvals['mat_date'][cnt])+','\
                                    + appendQuote.to_date(dictvals['fix_date'][cnt]) + ');'
        incForDcd.write(qry_det_custom+"\n")
        print (qry_det_custom)
        cnt = cnt +1
