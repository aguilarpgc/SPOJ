def amusing_number(n):
	""" (int) -> str
	nth number consisting only of digits 5 and 6.
	"""
	c = ""
	while n > 1:
		token = '5' if n % 2 == 0 else '6'
		c = token + c
		n //= 2
	return c

for i in range(int(input())):
	print(amusing_number(int(input()) + 1))