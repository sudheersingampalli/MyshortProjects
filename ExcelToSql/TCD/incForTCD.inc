--JPY-NZD-AUD
--ICTM_TCD_INT_RATE_C
insert into ICTM_TCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy1,link_ccy2,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth,tenor_basis)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','AUD','SARALA1',to_date('2014-12-08 14:45:34','RRRR-MM-DD HH24:MI:SS'),'SARALA1',to_date('2014-12-08 14:45:34','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y','M');
-- ICTM_TCD_INT_RATE_DET_CUSTOM 
insert into ICTM_TCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy1,link_ccy2,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','AUD',0,0);
insert into ICTM_TCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy1,link_ccy2,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','AUD',24,1);
-- ICTM_TCD_INT_RATE_DET_C 
insert into ICTM_TCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy1,link_ccy2,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','AUD',0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_TCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy1,link_ccy2,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','AUD',24,0,to_date('2020-09-04','RRRR-MM-DD'),to_date('2020-09-02','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,CHAR_FLD_3,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_TCD_INT_RATE_C~2018-09-05~AUD~JPY~NZD~','ICDTCDIN','ICTMS_TCD_INT_RATE_C','400','1','1','JPY','NZD','AUD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_TCD_INT_RATE_C~EFF_DATE~LINK_CCY1~DEPOSIT_CCY~LINK_CCY1~','SYSTEM',to_date('2014-12-08 14:45:34','RRRR-MM-DD HH24:MI:SS'),'SYSTEM',to_date('2014-12-08 14:45:34','RRRR-MM-DD HH24:MI:SS'),'SYSTEM',to_date('2014-12-08 14:45:34','RRRR-MM-DD HH24:MI:SS'));
