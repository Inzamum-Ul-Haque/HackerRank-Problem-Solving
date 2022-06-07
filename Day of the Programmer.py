y = int(input())

if((y <= 1917) & (y % 4 == 0)) or ((y % 400 == 0) or ((y % 4 == 0) & (y % 100 != 0))):
    days = "12.09."+str(y)
elif y == 1918:
    days = "26.09.1918"
else:
    days = "13.09."+str(y)

print(days)