s = input()

def Palindrome(s):
    count = [0]*256
    odd = 0
    for i in range(len(s)):
        count[ord(s[i])] = count[ord(s[i])]+1

    for i in range(256):
        if count[i] & 1:
            odd+=1
        if odd > 1:
            return False

    return True

if Palindrome(s):
    print("YES")
else:
    print("NO")