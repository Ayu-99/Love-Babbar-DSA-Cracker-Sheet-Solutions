# Python3 program to rearrange array
# in alternating positive & negative
# items with O(1) extra space

# Function to rearrange positive and
# negative integers in alternate fashion.
# The below solution does not maintain
# original order of elements
def rearrange(arr, n):
	i = 0
	j = n - 1

	# shift all negative values
	# to the end
	while (i < j):
	
		while (i <= n - 1 and arr[i] > 0):
			i += 1
		while (j >= 0 and arr[j] < 0):
			j -= 1
			
		if (i < j):
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp
			
	# i has index of leftmost
	# negative element
	if (i == 0 or i == n):
		return 0

	# start with first positive element
	# at index 0

	# Rearrange array in alternating
	# positive & negative items
	k = 0
	while (k < n and i < n):
		
		# swap next positive element at even
		# position from next negative element.
		temp = arr[k]
		arr[k] = arr[i]
		arr[i] = temp
		i = i + 1
		k = k + 2

# Utility function to print an array
def printArray(arr, n):
	for i in range(n):
		print(arr[i], end = " ")
	print("\n")

# Driver code
arr = [2, 3]

n = len(arr)

print( "Given array is")
printArray(arr, n)

rearrange(arr, n)

print( "Rearranged array is")
printArray(arr, n)

# This code is contributed
# Princi Singh
