def main():
	T = int(input())
	for i in range(T):
		N = int(input())
		sets = [set(input().split()[1:]) for c in range(N)]
		Q = int(input())
		for j in range(Q):
			op, X, Y = (int(k)-1 for k in input().split())
			print(len(sets[X] | sets[Y]) if op else len(sets[X] & sets[Y]))

main()
