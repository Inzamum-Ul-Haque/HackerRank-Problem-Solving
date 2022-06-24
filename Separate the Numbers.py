n = int(input())

for _ in range(n):
    s = input()
    found = False
    for i in range(len(s)//2):
        a = s[:i+1]
        f = n = int(s[:i+1])
        while len(a) < len(s):
            n+=1
            a+=str(n)
            if a == s:
                found = True
                print('YES',f)
                break
    if not found:
        print('NO')