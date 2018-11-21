import appendQuote

def qry_builderINT_RATE_DET_CUSTOM(dictvals,incForTcd):
    incForTcd.write('-- ICTM_TCD_INT_RATE_DET_CUSTOM ' + "\n")
    print ('/*ICTM_TCD_INT_RATE_DET_CUSTOM*/')
    cnt = 0
    while cnt < len(dictvals['flg_prod_typ']):

        qry_builder = 'insert into ICTM_TCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy1,link_ccy2,tenor_to,flg_prod_type)' \
                        'values ('
        qry_det_custom = qry_builder + appendQuote.to_date(dictvals['eff_date'])+ ','\
                                    + appendQuote.append(dictvals['deposit_ccy'])+ ',' \
                                    + appendQuote.append(dictvals['link_ccy1']) + ',' \
                                    + appendQuote.append(dictvals['link_ccy2']) + ',' \
                                    + dictvals['tenor_1'][cnt] + ',' \
                                    + dictvals['flg_prod_typ'][cnt] + ');'
        incForTcd.write(qry_det_custom+"\n")
        print (qry_det_custom)
        cnt = cnt +1
