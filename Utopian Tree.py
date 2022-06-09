t = int(input())

while t:
    H = 1
    n = int(input())
    if n == 0:
        print("1")
    else:
        for i in range(1,n+1):
            if (i%2) == 0:
                H+=1
            else:
                H*=2
        print(H)
    t-=1