def RPN(alge):
	rpn_string = ""
	operators = []

	for token in alge:
		if token in ['+','-','*','/','^']:
			operators.append(token)
		elif token == ')':
			rpn_string += operators.pop()
		elif token != '(':
			rpn_string += token

	return rpn_string

for i in range(int(input())):
	# alge = input()
	print(RPN(input()))

