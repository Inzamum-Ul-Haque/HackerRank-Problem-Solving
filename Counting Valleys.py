n = int(input())
paths = input()

valley = 0
cur_val = 0

for steps in paths:
    if steps == 'U':
        cur_val += 1
        if cur_val == 0:
            valley += 1
    elif steps == 'D':
        cur_val -= 1

print(valley)