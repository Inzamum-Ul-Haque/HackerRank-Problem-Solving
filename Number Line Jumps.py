x1, v1, x2, v2 = map(int, input().split())

exist = False
while True:
    if x1 == x2:
        exist = True
        break
    if (x1 > x2 and v1 > v2) or (x2 > x1 and v2 > v1) or (v1 == v2 and x1 != x2):
        break
    x1+=v1
    x2+=v2

if exist == True:
    print("YES")
else:
    print("NO")