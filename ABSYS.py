for i in range(int(input())):
	input()
	a, op, b, equal, result = input().split()
	# Check either a, b or result is a string
	index = 0
	try:
		int(b)
	except Exception:
		index = 1
	else:
		try:
			int(result)
		except Exception:
			index = 2

	if index == 0:
		a = int(result) - int(b)
	elif index == 1:
		b = int(result) - int(a)
	else:
		result = int(a) + int(b)

	print("%d + %d = %d" %  (int(a), int(b), int(result)))

