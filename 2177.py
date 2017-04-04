import math

def distance(a, b, c, d):
	return math.sqrt((a-c)**2+(b-d)**2)

x, y, n = (int(i) for i in input().split())
yes = []

for i in range(n):
	xi, yi, ti = (int(i) for i in input().split())
	if distance(x, y, xi, yi) < ti:
		yes.append(str(i+1))

if yes:		
	print(' '.join(sorted(yes)))
else:
	print('-1')
