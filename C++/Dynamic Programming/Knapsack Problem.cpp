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

//Bottom up approach

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	vector<vector<int>> K(n + 1, vector<int>(W + 1));

	for(i = 0; i <= n; i++)
	{
		for(w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0){
				K[i][w] = 0;
            }   
            else if (wt[i - 1] <= w){
				K[i][w] = max(val[i - 1] +
					K[i - 1][w - wt[i - 1]],
					K[i - 1][w]);
            }
			else{
				K[i][w] = K[i - 1][w];
            } 
		}
	}
	return K[n][W];
}

int main()
{
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(val) / sizeof(val[0]);
	
	cout << knapSack(W, wt, val, n);
	
	return 0;
}

