n_testcase = int(input())
cnt = 0

for i in range(n_testcase):
	a, b, c = int(input()), int(input()), int(input())
	cnt += (a + b + c >= 2)
print(cnt)
