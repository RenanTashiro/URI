N = int(input())
rank = []

for i in range(N):
	country, g, s, b = input().split()
	rank.append((int(g), int(s), int(b), country))
	
rank.sort(key=lambda x: (-x[0], -x[1], -x[2], x[3]))

for i in rank:
	g, s, b, country = i
	print(country, g, s, b)
	

