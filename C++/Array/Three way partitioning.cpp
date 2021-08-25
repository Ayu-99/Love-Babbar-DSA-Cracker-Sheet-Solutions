
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int start = 0, end = arr.size()-1, i = 0;

    	while(i<=end)
    	{
    		if (arr[i] < a){
    			swap(arr[i], arr[start]);
                i++;
                start++;
            }    
    
    		else if (arr[i] > b){
    			swap(arr[i], arr[end]);
                end--;
            }
    		else{
    			i++;
            }    
    	}
        
    }
};
