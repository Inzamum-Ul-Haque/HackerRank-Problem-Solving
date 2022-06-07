n = int(input())

for i in range(n):
    catA,catB,mouseC =map(int, input().split())
    if(abs(catA-mouseC) < abs(catB-mouseC)):
        print("Cat A")
    elif(abs(catA-mouseC) > abs(catB-mouseC)):
        print("Cat B")
    elif(abs(catA-mouseC) == abs(catB-mouseC)):
        print("Mouse C")