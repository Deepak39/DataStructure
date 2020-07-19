l1 = input()
l = [int(x) for x in l1.split(" ")]
d,r = {}, []
flag=0
for num in l:
	if 20%num == 0 and 20//num in d:
		if not flag: flag = 1
		t1 = (20//num,num)
		r.append(t1)

	else:
		d[num] = 1
if len(r) == 0:
	print('No match possible')
else:
	for t in r:
		print(t, end = " ")
