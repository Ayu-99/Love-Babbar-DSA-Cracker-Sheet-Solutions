
def rearrange(arr, n):
	i = 0
	j = n - 1

	while (i < j):
	
		while (i <= n - 1 and arr[i] > 0):
			i += 1
		while (j >= 0 and arr[j] < 0):
			j -= 1
			
		if (i < j):
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp
			
	if (i == 0 or i == n):
		return 0

	k = 0
	while (k < n and i < n):
		
		temp = arr[k]
		arr[k] = arr[i]
		arr[i] = temp
		i = i + 1
		k = k + 2

def printArray(arr, n):
	for i in range(n):
		print(arr[i], end = " ")
	print("\n")

arr = [2, 3]

n = len(arr)

print( "Given array is")
printArray(arr, n)

rearrange(arr, n)

print( "Rearranged array is")
printArray(arr, n)
