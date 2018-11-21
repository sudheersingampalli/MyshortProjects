import appendQuote

def qry_builderINT_RATE_C(dictvals,incForTcd):
    incForTcd.write('--'+ dictvals['deposit_ccy'] + '-' + dictvals['link_ccy1']+ '-' + dictvals['link_ccy2']+  "\n")
    incForTcd.write('--ICTM_TCD_INT_RATE_C'+ "\n")
    print (dictvals['deposit_ccy'], dictvals['link_ccy1'],dictvals['link_ccy2'])
    print ('/*ICTM_TCD_INT_RATE_C*/')

    qry_builder = 'insert into ICTM_TCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy1,link_ccy2,maker_id,maker_dt_stamp,checker_id,' \
                  'checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth,tenor_basis)values('

    final_qry = qry_builder + appendQuote.to_date(dictvals['eff_date']) + ','\
                            + appendQuote.append(dictvals['deposit_ccy'])+ ','\
                            + appendQuote.append(dictvals['link_ccy1'])+ ','\
                            + appendQuote.append(dictvals['link_ccy2'])+ ','\
                            + appendQuote.append(dictvals['maker']) + ','\
                            + appendQuote.to_date_time(dictvals['makerstamp']) + ','\
                            + appendQuote.append(dictvals['checker']) + ','\
                            + appendQuote.to_date_time(dictvals['checkerstamp']) + ','\
                            + dictvals['modno'] + ','\
                            + appendQuote.append(dictvals['recstat'])+ ','\
                            + appendQuote.append(dictvals['authstat'])+ ','\
                            + appendQuote.append(dictvals['onceauth']) + ','\
                            + appendQuote.append(dictvals['tenor_basis']) + ');'
    incForTcd.write(final_qry+"\n")
    print (final_qry)

