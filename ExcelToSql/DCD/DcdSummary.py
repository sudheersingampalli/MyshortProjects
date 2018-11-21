import appendQuote

def qry_builderRecordMaster(dictvals,incForDcd):
    incForDcd.write('--STTB_RECORD_MASTER ' + "\n")
    print ('/*STTB_RECORD_MASTER*/')


    print (appendQuote.append(dictvals['checker']))
    qry_builder = 'insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,' \
                  'LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,' \
                  'FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,' \
                  'CHECKER_ID,CHECKER_DT_STAMP) VALUES ('
    qry_summary = qry_builder +\
    appendQuote.append('~ICTMS_DCD_INT_RATE_C~' + dictvals['eff_date']+'~'+ dictvals['deposit_ccy']+'~'+ dictvals['link_ccy']+'~') +','\
                                + appendQuote.append('ICDDCDIN') + ',' \
                                + appendQuote.append('ICTMS_DCD_INT_RATE_C') + ','\
                                + appendQuote.append('400') + ','\
                                + appendQuote.append('1')+ ','\
                                + appendQuote.append('1')+ ','\
                                +  appendQuote.append(dictvals['deposit_ccy'])+ ','\
                                + appendQuote.append(dictvals['link_ccy']) + ','\
                                + appendQuote.to_date(dictvals['eff_date'])+ ','\
                                + appendQuote.append('A') + ','\
                                + appendQuote.append('O') + ','\
                                + appendQuote.append('A') + ','\
                                + appendQuote.append('~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~') + ','\
                                + appendQuote.append(dictvals['maker']) + ',' \
                                + appendQuote.to_date_time(dictvals['makerstamp']) + ',' \
                                + appendQuote.append(dictvals['checker']) + ',' \
                                + appendQuote.to_date_time(dictvals['checkerstamp']) + ',' \
                                + appendQuote.append(dictvals['checker']) + ','\
                                + appendQuote.to_date_time(dictvals['checkerstamp']) + ');'


    incForDcd.write(qry_summary+"\n")
    print (qry_summary)


