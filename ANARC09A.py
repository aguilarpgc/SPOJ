braces = input().rstrip()
i = 1
while '-' not in braces:
	c = 0

	stack = []
	for token in braces:
		if len(stack):
			if token == '}':
				if stack.pop() == token:
					c += 1
			else:
				stack.append(token)
		else:
			stack.append(token)

	if len(stack):
		c += len(stack) // 2
		if stack[0] == '}':
			c += 1

	print("%d. %d" % (i, c))
	i += 1
	braces = input().rstrip()