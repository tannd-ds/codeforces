def isFirstNumEven(n):
	while (n > 10):
		n //= 10
	return n % 2 == 0

def hasEvenDigits(n):
	while (n > 0):
		if n % 2 == 0:
			return True
		n //= 10
	return False

n_testcase = int(input())

for i in range(n_testcase):
	n = int(input())
	if (n % 2 == 0):
		print(0)
	elif (isFirstNumEven(n)):
		print(1)
	elif (hasEvenDigits(n)):
		print(2)
	else:
		print(-1)
