def is_rotation(arr1, arr2):
	i, j, flag = 0, 0, 0
	while arr1[i]!=arr2[j]:
		print (arr1[i], "not found.")
		i+=1

	print (f"i = {i}, j = {j}")

	while j<len(arr2):
		if arr1[i] == arr2[j]:
			print("Equal")
			i = (i+1) if i==len(arr1)+1 else 0
			j=j+1
		else:
			print(f"Break at i={i} and j={j}")
			flag = 1
			break

	return flag == 0

l1 = [int(x) for x in input().split(" ")]
l2 = [int(x) for x in input().split(" ")]

print(is_rotation(l1, l2))
