class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,a,size):
        ans=0
        sum=0
        for i in range(len(a)):
            sum+=a[i]
            ans=max(ans,sum)
            if sum<0:
                sum=0
    
        return ans 
