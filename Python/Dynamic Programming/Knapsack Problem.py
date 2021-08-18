val = [60, 100, 120 ]
wt = [10, 20, 30 ]
W = 50
n = len(val)

# We initialize the matrix with -1 at first.
t = [[-1 for i in range(W + 1)] for j in range(n + 1)]


def knapsack(wt, val, W, n, curr):

	# base conditions
	if n == curr or W == 0:
		return 0
	if t[curr][W] != -1:
		return t[n][W]

	# choice diagram code
	if wt[curr] <= W:
		t[curr][W] = max(
			val[curr] + knapsack(
				wt, val, W-wt[curr], n, curr+1),
			knapsack(wt, val, W, n, curr+1))
		return t[curr][W]
	elif wt[curr] > W:
		t[curr][W] = knapsack(wt, val, W, n, curr+1)
		return t[curr][W]


print(knapsack(wt, val, W, n, 0))
