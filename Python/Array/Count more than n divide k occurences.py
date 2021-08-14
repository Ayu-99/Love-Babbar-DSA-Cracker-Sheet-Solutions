from collections import defaultdict
class Solution:
    
    #Function to find all elements in array that appear more than n/k times.
    def countOccurence(self,arr,n,k):
        #Your code here
        m = defaultdict(int)
        x = n//k
        count = 0
        for i in range(n):
            m[arr[i]] += 1
            if m[arr[i]] > x:
                count += 1
                m[arr[i]] = -1000
                
        return count
