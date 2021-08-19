
class Solution{
public:
    int nCr(int n, int r){
        if(n<r){
            return 0;
        }
        if((n-r) < r){
            r=n-r;
        }
        int dp[r+1];
        memset(dp,0, sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++){
            
            for(int j=min(r,i);j>0;j--){
                dp[j]=(dp[j]+dp[j-1])%1000000007;
            }
            
        }
        
        return dp[r];
        
    
    }
};
