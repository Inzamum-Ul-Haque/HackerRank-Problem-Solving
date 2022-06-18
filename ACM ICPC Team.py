n, m = map(int, input().split())
people = [input() for i in range(n)]

skills = []
max_skills = 0

for i in range(len(people)):
    j = i
    while j < n:
        first = people[i]
        second = people[j]
        skill = bin(int(first, 2) | int(second, 2))[2:].count('1')
        if skill > max_skills:
            max_skills = skill
        skills.append(str(skill))
        j+=1

print(max_skills)
print(skills.count(str(max_skills)))