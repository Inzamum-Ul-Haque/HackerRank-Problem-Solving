t = int(input())

while t:
    n, m, s = map(int, input().split())
    print((m+s-2) % n + 1)
    t-=1