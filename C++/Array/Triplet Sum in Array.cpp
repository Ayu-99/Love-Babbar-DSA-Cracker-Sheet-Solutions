class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i = 0; i < n; i++){
            int y = X - A[i];
            int low = i+1, high = n-1;
            while (low < high){
                if(A[low] + A[high] == y){
                    return 1;
                }
                else if(A[low] + A[high] > y){
                    high--;
                }
                
                else if(A[low] + A[high] < y){
                    low++;
                }
                
            }
        
        }
        return 0;
    }

};
