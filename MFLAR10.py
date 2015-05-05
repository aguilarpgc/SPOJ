def check_words(words):
	if words == "*":
		return False

	if len(set([x[0] for x in words.upper().split()])) > 1:
		print("N")
	else:
		print("Y")

	return True

while(check_words(input())):
	pass