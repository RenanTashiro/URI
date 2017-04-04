def actR(x,y): return x,y+1
def actL(x,y): return x,y-1
def actU(x,y): return x-1,y
def actD(x,y): return x+1,y

def ate(x, y, pac, cmd):
	control = {'R': actR(x,y), 'L': actL(x,y), 
	           'U': actU(x,y), 'D': actD(x,y),
	           '<': actR(x,y), '^': actU(x,y),
	           '>': actL(x,y), 'v': actD(x,y)}
	nx, ny = control[cmd] if cmd.isalpha() else control[pac[x][y]]
	row, col = len(pac), len(pac[-1])
	if (nx < row or nx >= 0 or ny < col or ny >= 0) and pac[nx][ny] != '#':		
		pac[x][y], pac[nx][ny]  = ' ', '<'		
		return newx, newy, pac[nx][ny] == '*'
	return x, y, False

def main():
	L, C, I = (int(i) for i in input().split())
	pac = []
	for row, i in enumerate(range(L)):
		pac.append(input())
		if '<' in pac[-1]:
			x, y = row, pac[-1].index('<')
	count = 0
	for cmd in input():
		x, y, ans = ate(x, y, pac, cmd)
		if ans: cont += 1
	print(count)
	
# run
main()

