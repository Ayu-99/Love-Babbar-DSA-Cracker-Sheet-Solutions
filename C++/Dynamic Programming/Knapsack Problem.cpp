//Memoization - Top Down Approach
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
int dp[10000][10000];
int knapSack(int W, int wt[], int val[], int n, int curr)
{

	// Base Case
	if (n == curr || W == 0)
		return 0;

    if (dp[W][curr] != -1){
        return dp[W][curr];
    }    

	if (wt[curr] > W)
		return dp[W][curr] = knapSack(W, wt, val, n , curr + 1);

	else
		return dp[W][curr] = max(
			val[curr]
				+ knapSack(W - wt[curr],
						wt, val, n, curr + 1),
			knapSack(W, wt, val, n, curr + 1));
}

int main()
{
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int W = 50;
    memset(dp, -1, 10000*10000*sizeof(int));
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n, 0);
	return 0;
}

