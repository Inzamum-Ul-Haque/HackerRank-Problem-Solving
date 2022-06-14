q = int(input())
while q:
    a, b = map(int, input().split())
    if (a ** (0.5) != int(a ** (0.5))):
        a1 = int(a ** (0.5))+1
    else:
        a1 = int(a ** (0.5))
    b1 = int(b ** (0.5))
    count = b1-a1+1
    print(count)
    q-=1
