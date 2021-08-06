class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        for i in range(len(nums)-1,-1,-1):        
            if nums[i-1]<nums[i]:
                break
        if i!=0 :
            for j in range(len(nums)-1,-1,-1):
                if nums[j]>nums[i-1]:
                    break 
            nums[i-1],nums[j]= nums[j],nums[i-1]
        nums[i:]=reversed(nums[i:])
