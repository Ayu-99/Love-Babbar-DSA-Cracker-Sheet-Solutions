#include<iostream>
using namespace std;

void threeWayPartition(int arr[], int n,
				int lowVal, int highVal)
{
	int start = 0, end = n-1, i = 0;

	while(i<=end)
	{
		if (arr[i] < lowVal){
			swap(arr[i], arr[start]);
            i++;
            start++;
        }    

		else if (arr[i] > highVal){
			swap(arr[i], arr[end]);
            end--;
        }
		else{
			i++;
        }    
	}
}

int main()
{
	int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
				98, 3, 1, 32};
	int n = sizeof(arr)/sizeof(arr[0]);

	threeWayPartition(arr, n, 10, 20);

	cout << "Modified array \n";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}
