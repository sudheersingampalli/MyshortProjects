def append(str):
    return "'"+str+"'"

def to_date(str):
    return "to_date('"+str+"','RRRR-MM-DD')"

def to_date_time(str):
    return "to_date('" + str + "','RRRR-MM-DD HH24:MI:SS')"