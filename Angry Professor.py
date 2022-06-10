t = int(input())

while t:
    students = 0
    n, k = map(int, input().split())
    time = [int(elements) for elements in input().split()]
    for i in time:
        if i <= 0:
            students+=1
    if students < k:
        print("YES")
    else:
        print("NO")
    t-=1