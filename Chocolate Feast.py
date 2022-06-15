t = int(input())

while t:
    n, c, m = map(int, input().split())
    x = int(n/c)
    wrapper = x
    if wrapper < m:
        print(wrapper)
    else:
        count = 0
        while(wrapper+count)-m >= 0:
            wrapper=wrapper-m
            count+=1
        print(x+count)
    t-=1