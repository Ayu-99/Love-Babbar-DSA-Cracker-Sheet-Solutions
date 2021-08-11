
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int i = -1, j = n;

	while (i < j)
	{
		while(i <= n - 1 and arr[i] > 0)
			i += 1;
		while (j >= 0 and arr[j] < 0)
			j -= 1;
		if (i < j)
			swap(arr[i], arr[j]);
	}

	if (i == 0 || i == n)
		return;

	
	int k = 0;
	while (k < n && i < n)
	{
		swap(arr[k], arr[i]);
		i = i + 1;
		k = k + 2;
	}
}

// Utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = {2, 3, -4, -1, 6, -9};

	int n = 6;

	cout << "Given array is \n";
	printArray(arr, n);

	rearrange(arr, n);
	return 0;
}
