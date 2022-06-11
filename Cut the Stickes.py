n = int(input())
lenths = [int(element) for element in input().split()]

while len(lenths)!=0:
    print(len(lenths))
    num = min(lenths)
    lenths = [(i-num) for i in lenths if i-num > 0]