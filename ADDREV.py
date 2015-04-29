def reverse_sum(a,b):
	return int(str(int(a[::-1]) + int(b[::-1]))[::-1])

for i in range(int(input())):
	a, b = input().split()
	print(reverse_sum(a,b))

