class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # stack approach - Next greater element to the right
        # O(n)
        if len(prices)==0:
            return 0
            
        l=[-1]*len(prices)
        max_val=prices[len(prices)-1]
        for i in range(len(prices)-2, -1,-1):
            if max_val>prices[i]:
                l[i]=max_val
            else:
                max_val=max(max_val,prices[i])
        max_profit=float("-inf")        
        for i in range(len(prices)):
            if l[i]!=-1:
                max_profit=max(max_profit,l[i]-prices[i])
        if max_profit==float("-inf"):
            return 0
        return max_profit
