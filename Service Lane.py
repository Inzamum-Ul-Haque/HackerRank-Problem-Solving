n, t = map(int, input().split())
width = [int(element) for element in input().split()]

while t:
    i, j = map(int, input().split())
    print(min(width[i:j+1]))
    t-=1