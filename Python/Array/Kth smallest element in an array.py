from heapq import heappush, heappop, heapify
class Solution:
    def kthSmallest(self,arr, l, r, k):
        '''
        arr : given array
        l : starting index of the array i.e 0
        r : ending index of the array i.e size-1
        k : find kth smallest element and return using this function
        '''
        q=[]
        heapify(q)
        for i in range(k):
            heappush(q,-1*arr[i])
        
        for i in range(k,len(arr)):
            x=-1*heappop(q)
            if arr[i]<x:
                heappush(q,arr[i]*-1)
            else:
                heappush(q,-1*x)
        
        return -1*heappop(q)  
