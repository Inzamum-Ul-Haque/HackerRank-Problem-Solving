n = int(input())
rock = []
while n:
    rock.append(input())
    n-=1

def Gemstones(arr):
    superset = set(arr[0])

    for i in arr[1:]:
        superset &= set(i)

    return len(superset)

print(Gemstones(rock))