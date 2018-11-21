import appendQuote

def qry_builderINT_RATE_C(dictvals,incForDcd):
    incForDcd.write('--'+ dictvals['deposit_ccy'] + '-' + dictvals['link_ccy'] + "\n")
    incForDcd.write('--ICTM_DCD_INT_RATE_C'+ "\n")
    print (dictvals['deposit_ccy'], dictvals['link_ccy'])
    print ('/*ICTM_DCD_INT_RATE_C*/')
    print (dictvals)
    qry_builder = 'insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,' \
                  'checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values('

    final_qry = qry_builder + appendQuote.to_date(dictvals['eff_date']) + ','\
                            + appendQuote.append(dictvals['deposit_ccy'])+ ','\
                            + appendQuote.append(dictvals['link_ccy'])+ ','\
                            + appendQuote.append(dictvals['tenor_basis']) + ','\
                            + appendQuote.append(dictvals['maker']) + ','\
                            + appendQuote.to_date_time(dictvals['makerstamp']) + ','\
                            + appendQuote.append(dictvals['checker']) + ','\
                            + appendQuote.to_date_time(dictvals['checkerstamp']) + ','\
                            + dictvals['modno'] + ','\
                            + appendQuote.append(dictvals['recstat'])+ ','\
                            + appendQuote.append(dictvals['authstat'])+ ','\
                            + appendQuote.append(dictvals['onceauth']) + ');'
    incForDcd.write(final_qry+"\n")

