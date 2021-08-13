def maxProduct(self,arr, n):
        maxp=float("-inf")
        prod=1
        for i in range(n):
            prod*=arr[i]
            maxp=max(prod, maxp)
            if prod==0:
                prod=1
        prod=1            
        for i in range(n-1,-1,-1):
            prod*=arr[i]
            maxp=max(prod, maxp)
            if prod==0:
                prod=1
        return maxp 
