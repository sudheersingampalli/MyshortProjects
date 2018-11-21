import appendQuote

def qry_builderINT_RATE_DET_CUSTOM(dictvals,incForDcd):
    incForDcd.write('--ICTM_DCD_INT_RATE_DET_CUSTOM ' + "\n")
    print ("/*ICTM_DCD_INT_RATE_DET_CUSTOM*/")
    cnt =0
    while cnt < len(dictvals['flg_prod_typ']):

        qry_builder = 'insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)' \
                        'values ('
        qry_det_custom = qry_builder + appendQuote.to_date(dictvals['eff_date'])+ ','\
                                    + appendQuote.append(dictvals['deposit_ccy'])+ ',' \
                                    + appendQuote.append(dictvals['link_ccy']) + ',' \
                                    + dictvals['spread_rate_det2'][cnt] + ',' \
                                    + dictvals['list_tenor2_det'][cnt] + ',' \
                                    + dictvals['flg_prod_typ'][cnt]+');'
        incForDcd.write(qry_det_custom+"\n")
        cnt = cnt +1
