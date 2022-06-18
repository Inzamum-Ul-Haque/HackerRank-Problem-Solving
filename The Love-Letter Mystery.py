n = int(input())

while n:
    res = 0
    s = input()
    for i in range((int)(len(s)/2)):
        res+=abs(ord(s[i]) - ord(s[-i-1]))
    n-=1
    print(res)