class Solution:
    def sb(self, a, n, x):
        # Your code goes here 
        left=0
        current=0
        length=float("inf")
        for i in range(len(nums)):
            current+=nums[i]
            while current>s:
                length=min(length, i+1-left)
                
                current-=nums[left]
                left+=1
        if length==float("inf"):
            return 0
        return length
