t = int(input())

def Cansort(list):
    s = sorted(list)
    for i in s[:-2]:
        if list.index(i) % 2:
            list.remove(i)
            list[0],list[1]=list[1],list[0]
        else:
            list.remove(i)

    if list[0] < list[1]:
        return True
    else:
        return False

for _ in range(t):
    n = int(input())
    A = [int(element) for element in input().split()]
    if Cansort(A):
        print("YES")
    else:
        print("NO")