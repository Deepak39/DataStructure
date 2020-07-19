arr1 = [int(x) for x in input().split(" ")]
arr2 = [int(x) for x in input().split(" ")]
arr = []
i, j= 0, 0

while i<len(arr1) and j<len(arr2):
	if arr1[i] > arr2[j]:
		j+=1
	elif arr1[i] < arr2[j]:
		i+=1
	else:
		arr.append(arr1[i])
		i+=1
		j+=1

print("Common elements are:", end=" ")
for element in arr:
	print(element, end=' ')
print(" ")
