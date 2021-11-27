from datetime import datetime, timedelta
today=datetime.now()
print('Today is : '+str(today))

#timedelta is used to define a period of time
one_day=timedelta(days=1)
yesterday=today-one_day
tom=today+one_day
print('yesterday was : '+str(yesterday))
print('tomorrow is : '+str(tom))

three_day=timedelta(days=3)
threedays_before=today-three_day
print(threedays_before)
print('three days before was : '+str(threedays_before))

one_week=timedelta(weeks=1)
last_week=today-one_week
print('last week was : ',str(last_week))