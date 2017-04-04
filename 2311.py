N = int(input())

while N:
	name = input()
	GD = float(input())
	score = [float(i) for i in input().split()]
	print(name, '%.2f' % ((sum(score) - max(score) - min(score)) * GD))
	N -= 1
