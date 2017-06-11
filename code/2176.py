def main():
	bits = input()
	if sum(bit == '1' for bit in bits) & 1:
		bits += '1'
	else:
		bits += '0'
	print(bits)
	
main()
