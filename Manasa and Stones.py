t = int(input())

while t:
    n = int(input())
    a = int(input())
    b = int(input())
    print(*sorted(set(x*a + (n-1-x) * b for x in range(n))))
    t-=1