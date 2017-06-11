code = ''

while 1:
	try:
		code += input() + '\n' 
	except:
		break
	
n_code = ''
ident_c = 0
flag = False
	
for c in code:
	if c == ';':
		n_code += ';\n'
		flag = False
	elif c == '{':
		n_code += '\n' + '....' * ident_c + '{\n'
		ident_c += 1
		flag = False		
	elif c == '}':
		ident_c -= 1
		n_code += '....' * ident_c + '}\n'
		flag = False
	else:
		if not flag:
			n_code += '....' * ident_c
			flag = True		
		n_code += c	
		
print(n_code, end='')



