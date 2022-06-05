n = int(input())
s = [int(s) for s in input().split()]
d,m = map(int, input().split())

count = 0
for i in range(m, n+1):
    if sum(s[i-m:i]) == d:
        count+=1

print(count)