n = int(input())
B = [int(element) for element in input().split()]

def Count_Fair(B):
    if sum(B)%2 == 1:
        return "NO"
    total = 0
    for i in range(len(B)-1):
        if B[i]%2 == 1:
            B[i] = B[i]+1
            B[i+1] = B[i+1]+1
            total = total+2
    return total
print(Count_Fair(B))