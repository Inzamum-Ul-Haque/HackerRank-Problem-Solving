n,k = map(int, input().split())
bills = [int(bill) for bill in input().split()]
b = int(input())

total = 0
for i in range(n):
    if i!=k:
        total+=bills[i]
if((total/2) < b):
    print(int(b-(total/2)))
else:
    print("Bon Appetit")