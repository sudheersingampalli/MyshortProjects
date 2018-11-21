import appendQuote

def qry_builderRecordMaster(dictvals,incForTcd):
    incForTcd.write('--STTB_RECORD_MASTER ' + "\n")
    print ('/*STTB_RECORD_MASTER*/')



    qry_builder = 'insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,' \
                  'LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,CHAR_FLD_3,DATE_FLD_1,AUTH_STAT,RECORD_STAT,' \
                  'FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,' \
                  'CHECKER_ID,CHECKER_DT_STAMP) VALUES ('
    qry_summary = qry_builder +\
    appendQuote.append('~ICTMS_TCD_INT_RATE_C~' + dictvals['eff_date']+'~'+ dictvals['link_ccy2']+'~'
                       + dictvals['deposit_ccy']+'~'+ dictvals['link_ccy1']+'~') +','\
                                + appendQuote.append('ICDTCDIN') + ',' \
                                + appendQuote.append('ICTMS_TCD_INT_RATE_C') + ','\
                                + appendQuote.append('400') + ','\
                                + appendQuote.append('1')+ ','\
                                + appendQuote.append('1')+ ','\
                                +  appendQuote.append(dictvals['deposit_ccy'])+ ','\
                                + appendQuote.append(dictvals['link_ccy1']) + ','\
                                + appendQuote.append(dictvals['link_ccy2']) + ','\
                                + appendQuote.to_date(dictvals['eff_date'])+ ','\
                                + appendQuote.append('A') + ','\
                                + appendQuote.append('O') + ','\
                                + appendQuote.append('A') + ','\
                                + appendQuote.append('~ICTMS_TCD_INT_RATE_C~EFF_DATE~LINK_CCY1~DEPOSIT_CCY~LINK_CCY1~') + ','\
                                + appendQuote.append('SYSTEM') + ',' \
                                + appendQuote.to_date_time(dictvals['makerstamp']) + ',' \
                                + appendQuote.append('SYSTEM') + ',' \
                                + appendQuote.to_date_time(dictvals['checkerstamp']) + ',' \
                                + appendQuote.append('SYSTEM') + ','\
                                + appendQuote.to_date_time(dictvals['checkerstamp']) + ');'


    incForTcd.write(qry_summary+"\n")
    print (qry_summary)


