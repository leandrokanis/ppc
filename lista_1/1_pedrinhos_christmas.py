from datetime import datetime, timedelta

m,d = raw_input().split()
days_left = datetime(2016,12,25,0,0,0) - datetime(2016,int(m),int(d),0,0,0)
days = int(days_left.days)
if(days == 0): print("E natal!")
elif(days == 1): print("E vespera de natal!")
elif(days < 0): print("Ja passou!")
elif(days > 1): print("Faltam " + str(days) + " dias para o natal!")
