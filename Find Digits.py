t = int(input())

while t:
    n = int(input())
    count = 0
    temp = n
    while temp!=0:
        rem = int(temp%10)
        if rem!=0 and (n%rem)==0:
            count+=1
        temp /= 10
    t-=1
    print(count)