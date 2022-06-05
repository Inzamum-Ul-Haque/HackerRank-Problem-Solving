s,t = map(int, input().split())
a,b = map(int, input().split())
m,n = map(int, input().split())

apple = []
orange = []

apple = [int(element) for element in input().split()]
orange = [int(element) for element in input().split()]

app_count = 0
or_count = 0
for x in apple:
    if a+x>=s and a+x<=t:
        app_count+=1
for y in orange:
    if b+y>=s and b+y<=t:
        or_count+=1

print(app_count)
print(or_count)
