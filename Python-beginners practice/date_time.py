#to get date & time we need to use date time library
from datetime import datetime
curr_date=datetime.now()
 #the now function will return datetime object
print('Today is : ' + str(curr_date))
print(curr_date)