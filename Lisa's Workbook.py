n, k = map(int, input().split())
chapters = [int(element) for element in input().split()]

page = 0
count = 0
for i in chapters:
    page+=1
    for j in range(1,i+1):
        if j == page:
            count+=1
        if j != 0 and j%k == 0 and j < i:
            page+=1

print(count)