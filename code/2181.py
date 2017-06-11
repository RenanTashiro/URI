N, D = (int(i) for i in input().split())
ages = [int(i) for i in input().split()]
rent = [float(i) for i in input().split()]

for age in ages:
	lower = age - D
	greater = age + D
	print([age for age in ages if age >= lower and age <= greater])
			
