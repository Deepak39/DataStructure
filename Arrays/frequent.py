l = [int(x) for x in input().split(" ")]
d = {}
max_n, m = -1, 0
for n in l:
	if n in d:
		d[n] += 1
		if d[n] > m:
			max_n = n
			m = d[n]
	else:
		d[n] = 1

print(max_n, "came maximum times and it\'s frequency is ", m)
