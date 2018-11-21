import appendQuote

def qry_builderINT_RATE_MAS_C(dictvals,incForDcd):
    '''Build the query for inserting into ICTM_DCD_INT_RATE_MAS_C'''
    incForDcd.write('-- ICTM_DCD_INT_RATE_MAS_C ' + "\n")
    print ('/*ICTM_DCD_INT_RATE_MAS_C*/')
    cnt =0
    while cnt < len(dictvals['spread_rate_mas']):

        qry_builder = 'insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values ('
        qry_int_Rate_mas_c = qry_builder + appendQuote.to_date(dictvals['eff_date']) + ','\
                                + appendQuote.append(dictvals['deposit_ccy'])+ ','\
                                + appendQuote.append(dictvals['link_ccy'])+ ','\
                                + dictvals['spread_rate_mas'][cnt] +');'
        incForDcd.write(qry_int_Rate_mas_c+"\n")

        cnt +=1