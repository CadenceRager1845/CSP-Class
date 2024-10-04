import datetime

time = datetime.datetime.now().hour 
print(time) 
if time <= 12:
    print("Top of the day to ya!")

elif time <= 18:
    print("Afternoon to you!")

elif time <= 16:
    printf("Good evening!")

else:
    print("What the HECK are you doing up?!")