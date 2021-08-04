class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        x=[]
        if len(intervals)==0:
            return x
        intervals.sort()
        
        temp=intervals[0]
        for i in intervals:
            
            if temp[1]>=i[0]:
                temp[1]=max(temp[1],i[1])
            
            else:
                x.append(temp)
                temp=i
                
        x.append(temp)     
         
        return x
