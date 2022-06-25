q = int(input())

def MatchString(s1,s2):
    for i in range(len(s1)):
        if s1[i] in s2:
            return True

    return False

for _ in range(q):
    s1 = input()
    s2 = input()
    if MatchString(s1,s2):
        print("YES")
    else:
        print("NO")