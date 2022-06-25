q = int(input())

def Anagram(s):
    s1 = s[:len(s)//2]
    s2 = s[len(s)//2:]
    if len(s1) != len(s2):
        return -1
    elif s1 == s2[::-1]:
        return 0
    else:
        count = 0
        char_count = [0]*26

        for i in range(len(s1)):
            char_count[ord(s1[i])-97]+=1

        for i in range(len(s2)):
            char_count[ord(s2[i])-97]-=1

        for i in range(26):
            if char_count[i] != 0:
                count+=abs(char_count[i])

        return int(count / 2)


for _ in range(q):
    s = input()
    print(Anagram(s))