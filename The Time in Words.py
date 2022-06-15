h = int(input())
m = input()

hour_words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"]
minute_words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one",
                "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight",
                "twenty nine", "half"]

if int(m) == 0:
    print(hour_words[h]+" o' clock")
elif int(m)>=1 and int(m)<=30:
    if int(m) == 1:
        print(minute_words[int(m)]+" minute past "+hour_words[h])
    elif (int(m)>=2 and int(m)<=14) or (int(m)>=16 and int(m)<=29):
        print(minute_words[int(m)]+" minutes past "+hour_words[h])
    elif int(m) == 15:
        print(minute_words[int(15)]+" past "+hour_words[h])
    else:
        print(minute_words[int(30)]+" past " +hour_words[h])
else:
    if 60-int(m) == 1:
        print(minute_words[60 - int(m)] + " minute to " + hour_words[h + 1])
    elif (60-int(m)>=2 and 60-int(m)<=14) or (60-int(m)>=16 and 60-int(m)<=29):
        print(minute_words[60-int(m)]+" minutes to "+hour_words[h+1])
    elif 60-int(m) == 15:
        print(minute_words[15] + " to " + hour_words[h + 1])