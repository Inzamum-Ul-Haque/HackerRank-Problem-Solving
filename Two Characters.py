n = int(input())
s = input()

r = 0
alp = 'abcdefghijklmnopqrstuvwxyz'

def Valid(s):
    if len(s) <= 1:
        return False
    if s[0] == s[1]:
        return False
    if len(set(s)) > 2:
        return False
    for i in range(2, len(s)):
        if i%2 == 0:
            if s[i] != s[0]:
                return False
        else:
            if s[i] != s[1]:
                return False
    return True

for k in alp:
    for l in alp:
        if k >= l:
            continue
        f = list(filter(lambda x:x == k or x == l, s))
        if Valid(f):
            r = max(r, len(f))

print(r)