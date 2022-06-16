p, d, m, s = map(int, input().split())

count = 0
cost = p
while cost <= s:
    if p-d <= m:
        p = m
    else:
        p = p - d
    cost+=p
    count+=1

print(count)