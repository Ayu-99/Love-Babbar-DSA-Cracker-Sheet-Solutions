class Solution
{
    public:    
       vector <int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
        {
            int i = 0, j = 0, k = 0;
            vector<int> ans;
            int prev1, prev2, prev3;
         
            prev1 = prev2 = prev3 = INT_MIN;
         
            while (i < n1 && j < n2 && k < n3) {
               
                while (ar1[i] == prev1 && i < n1)
                    i++;
         
                while (ar2[j] == prev2 && j < n2)
                    j++;
         
                while (ar3[k] == prev3 && k < n3)
                    k++;
         
                if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
                    ans.push_back(ar1[i]);
                    prev1 = ar1[i];
                    prev2 = ar2[j];
                    prev3 = ar3[k];
                    i++;
                    j++;
                    k++;
                }
         
                else if (ar1[i] < ar2[j]) {
                    prev1 = ar1[i];
                    i++;
                }
         
                else if (ar2[j] < ar3[k]) {
                    prev2 = ar2[j];
                    j++;
                }
         
                else {
                    prev3 = ar3[k];
                    k++;
                }
            }
            
            return ans;
        }

};
