n = map(int,input().split())
scores = []
scores = [int(score) for score in input().split()]

max = min = scores[0]
max_cnt = min_cnt = 0
for i in scores:
    if i > max:
        max = i
        max_cnt+=1
    if i < min:
        min = i
        min_cnt+=1

print(max_cnt, end=" ")
print(min_cnt)
