s = input()
t = input()
k = int(input())

def find_Similar(str1,str2):
    i = 0
    while i<len(str1) and i<len(str2) and str1[i] == str2[i]:
        i+=1
    return i

difference = find_Similar(s,t)
s1 = len(s[difference: ])
t1 = len(t[difference: ])
if s1+t1 > k:
    print("No")
elif s1+t1 == k:
    print("Yes")
elif (len(s)+len(t) - k) <= 0:
    print("Yes")
elif abs(len(s)+len(t) - k) % 2 == 0:
    print("Yes")
else:
    print("No")