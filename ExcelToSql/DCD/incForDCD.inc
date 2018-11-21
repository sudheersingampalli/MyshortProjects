--AUD-JPY
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY','M','967594USR',to_date('2026-03-31 08:57:25','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:25','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,1,3.750,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,3,3.350,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','JPY',6,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~AUD~JPY~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','AUD','JPY',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2026-03-31 08:57:25','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:25','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:25','RRRR-MM-DD HH24:MI:SS'));
--AUD-NZD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,1,2.600,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,3,2.610,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,6,2.870,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','NZD',4,12,2.810,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~AUD~NZD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','AUD','NZD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--AUD-USD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,1,2.550,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,3,3.270,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,6,3.110,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'AUD','USD',4,12,3.150,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~AUD~USD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','AUD','USD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--EUR-JPY
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY','M','967594USR',to_date('2026-03-31 08:56:38','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:56:38','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,1,4.490,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,3,2.650,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,1,0.340,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,3,0.970,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','JPY',6,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~EUR~JPY~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','EUR','JPY',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2026-03-31 08:56:38','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:56:38','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:56:38','RRRR-MM-DD HH24:MI:SS'));
--EUR-USD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,1,5.240,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,3,3.530,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,6,2.870,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'EUR','USD',4,12,2.560,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~EUR~USD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','EUR','USD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--JPY-AUD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD','M','968465',to_date('2030-01-31 14:57:08','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2030-01-31 14:57:08','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,60,1);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,3,2.530,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,6,2.440,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',2,12,2.120,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,1,5.820,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,3,4.230,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,6,3.430,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,12,2.670,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,36,1.330,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',4,60,1.520,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,12,0.540,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',8,60,0.780,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',9,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',10,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',11,12,1.220,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',13,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','AUD',14,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~JPY~AUD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','JPY','AUD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968465',to_date('2030-01-31 14:57:08','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2030-01-31 14:57:08','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2030-01-31 14:57:08','RRRR-MM-DD HH24:MI:SS'));
--JPY-EUR
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR','M','968390J',to_date('2026-11-30 12:40:03','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:40:03','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',11,12,0.810,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,1,3.380,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,3,2.360,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,6,1.830,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',2,12,1.250,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,1,6.080,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,3,3.360,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,6,2.340,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',4,12,1.510,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','EUR',8,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~JPY~EUR~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','JPY','EUR',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2026-11-30 12:40:03','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:40:03','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:40:03','RRRR-MM-DD HH24:MI:SS'));
--JPY-NZD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD','M','968390J',to_date('2026-11-30 13:31:26','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 13:31:26','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,1,1.590,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,3,2.420,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,6,2.300,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',2,12,2.150,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,1,5.700,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,3,4.230,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,6,3.330,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,12,2.710,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,36,1.200,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',4,60,1.520,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',8,60,0.670,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',9,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,36,0,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',10,60,0,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','NZD',11,12,1.030,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~JPY~NZD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','JPY','NZD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2026-11-30 13:31:26','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 13:31:26','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 13:31:26','RRRR-MM-DD HH24:MI:SS'));
--JPY-USD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,60,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,36,1);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,60,1);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',11,12,1.040,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,3,0.880,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,6,1.560,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',2,12,1.930,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,1,2.760,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,3,2.300,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,6,2.500,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,12,2.480,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,36,1.750,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',4,60,1.930,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,36,1.050,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',8,60,1.220,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,36,1.000,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',9,60,0.860,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,36,0.800,to_date('2021-09-03','RRRR-MM-DD'),to_date('2021-09-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','USD',10,60,0.600,to_date('2023-09-05','RRRR-MM-DD'),to_date('2023-09-01','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~JPY~USD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','JPY','USD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--JPY-ZAR
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR','M','968390J',to_date('2026-11-30 12:41:12','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:41:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',2,12,1.890,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,1,9.190,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,3,8.180,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,6,8.740,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',4,12,7.290,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,3,0.880,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,6,3.440,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'JPY','ZAR',12,12,4.210,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~JPY~ZAR~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','JPY','ZAR',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2026-11-30 12:41:12','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:41:12','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2026-11-30 12:41:12','RRRR-MM-DD HH24:MI:SS'));
--NZD-AUD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,1,2.690,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,3,2.610,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,6,2.890,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','AUD',4,12,2.870,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~NZD~AUD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','NZD','AUD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--NZD-JPY
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY','M','967594USR',to_date('2026-03-31 08:57:52','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:52','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,1,3.800,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,3,3.270,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','JPY',6,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~NZD~JPY~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','NZD','JPY',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2026-03-31 08:57:52','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:52','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2026-03-31 08:57:52','RRRR-MM-DD HH24:MI:SS'));
--NZD-USD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,1,2.820,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,3,3.440,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,6,3.190,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'NZD','USD',4,12,3.110,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~NZD~USD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','NZD','USD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
--USD-AUD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD','M','966756USR',to_date('2026-09-30 14:12:16','RRRR-MM-DD HH24:MI:SS'),'966756USR',to_date('2026-09-30 14:12:16','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,1,3.410,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,3,3.540,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,6,3.260,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','AUD',4,12,3.230,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~USD~AUD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','USD','AUD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','966756USR',to_date('2026-09-30 14:12:16','RRRR-MM-DD HH24:MI:SS'),'966756USR',to_date('2026-09-30 14:12:16','RRRR-MM-DD HH24:MI:SS'),'966756USR',to_date('2026-09-30 14:12:16','RRRR-MM-DD HH24:MI:SS'));
--USD-EUR
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR','M','968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,1,5.220,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,3,3.510,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,6,2.830,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','EUR',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~USD~EUR~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','USD','EUR',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'));
--USD-JPY
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY','M','968465',to_date('2026-11-30 12:44:42','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2026-11-30 12:44:42','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,1,2.850,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','JPY',6,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~USD~JPY~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','USD','JPY',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968465',to_date('2026-11-30 12:44:42','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2026-11-30 12:44:42','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2026-11-30 12:44:42','RRRR-MM-DD HH24:MI:SS'));
--USD-NZD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD','M','968390J',to_date('2032-09-01 08:32:08','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2032-09-01 08:32:08','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,1,3.590,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,3,3.740,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,6,3.350,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','NZD',4,12,3.160,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~USD~NZD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','USD','NZD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2032-09-01 08:32:08','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2032-09-01 08:32:08','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2032-09-01 08:32:08','RRRR-MM-DD HH24:MI:SS'));
--USD-ZAR
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR','M','968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,1,11.280,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,3,8.120,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,6,7.010,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'USD','ZAR',4,12,6.470,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~USD~ZAR~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','USD','ZAR',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'),'968390J',to_date('2033-03-01 20:36:16','RRRR-MM-DD HH24:MI:SS'));
--ZAR-JPY
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY','M','968465',to_date('2028-09-02 12:16:47','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2028-09-02 12:16:47','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4);
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,12,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,1,7.050,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,3,6.470,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,1,0,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,3,0,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','JPY',15,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~ZAR~JPY~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','ZAR','JPY',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','968465',to_date('2028-09-02 12:16:47','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2028-09-02 12:16:47','RRRR-MM-DD HH24:MI:SS'),'968465',to_date('2028-09-02 12:16:47','RRRR-MM-DD HH24:MI:SS'));
--ZAR-USD
--ICTM_DCD_INT_RATE_C
insert into ICTM_DCD_INT_RATE_C (eff_date,deposit_ccy,link_ccy,tenor_basis,maker_id,maker_dt_stamp,checker_id,checker_dt_stamp,mod_no,record_stat,auth_stat,once_auth)values(to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD','M','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),1,'O','A','Y');
-- ICTM_DCD_INT_RATE_MAS_C 
insert into ICTM_DCD_INT_RATE_MAS_C (eff_date,deposit_ccy,link_ccy,spread) values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4);
--ICTM_DCD_INT_RATE_DET_CUSTOM 
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,0,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,1,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,3,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,6,0);
insert into ICTM_DCD_INT_RATE_DET_CUSTOM (eff_date,deposit_ccy,link_ccy,spread,tenor_to,flg_prod_type)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,12,0);
--ICTM_DCD_INT_RATE_DET_C 
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,0,0,to_date('','RRRR-MM-DD'),to_date('','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,1,9.240,to_date('2018-10-05','RRRR-MM-DD'),to_date('2018-10-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,3,6.690,to_date('2018-12-05','RRRR-MM-DD'),to_date('2018-12-03','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,6,0,to_date('2019-03-05','RRRR-MM-DD'),to_date('2019-03-01','RRRR-MM-DD'));
insert into ICTM_DCD_INT_RATE_DET_C (eff_date,deposit_ccy,link_ccy,spread,tenor_to,int_Rate,mat_date,fix_date)values (to_date('2018-09-05','RRRR-MM-DD'),'ZAR','USD',4,12,0,to_date('2019-09-05','RRRR-MM-DD'),to_date('2019-09-03','RRRR-MM-DD'));
--STTB_RECORD_MASTER 
insert into STTB_RECORD_MASTER(KEY_ID,FUNCTION_ID,TABLE_NAME,BRANCH_CODE,CURR_MOD_NO,LATEST_AUTH_MOD_NO,CHAR_FLD_1,CHAR_FLD_2,DATE_FLD_1,AUTH_STAT,RECORD_STAT,FIRST_AUTH_STAT,KEY_DEF,CURR_MAKER_ID,CURR_MAKER_DT_STAMP,FIRST_CHECKER_ID,FIRST_CHECKER_DT_STAMP,CHECKER_ID,CHECKER_DT_STAMP) VALUES ('~ICTMS_DCD_INT_RATE_C~2018-09-05~ZAR~USD~','ICDDCDIN','ICTMS_DCD_INT_RATE_C','400','1','1','ZAR','USD',to_date('2018-09-05','RRRR-MM-DD'),'A','O','A','~ICTMS_DCD_INT_RATE_C~EFF_DATE~DEPOSIT_CCY~LINK_CCY~','967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'),'967594USR',to_date('2029-11-30 09:13:12','RRRR-MM-DD HH24:MI:SS'));
