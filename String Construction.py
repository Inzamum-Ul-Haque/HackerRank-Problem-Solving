n = int(input())

while n:
    s = input()
    p = ""
    cost = 0
    flag = [0] * 26
    for i in range(len(s)):
        if flag[ord(s[i]) - 97] == 0:
            p += s[i]
            flag[ord(s[i]) - 97] = 1
            cost += 1

    print(cost)
    n-=1