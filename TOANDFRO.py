def decrypt_message(message, number):
	m = ""
	i = 0
	while len(message) >= number:
		if i % 2 == 0:
			m += message[0:number]
		else:
			m += message[0:number][::-1]
		i += 1
		message = message[number:]

	new_m = ""
	for i in range(number):
		new_m += m[i::number]
	return new_m

number = int(input())

while number > 0 :
	print(decrypt_message(input(), number))
	number = int(input())