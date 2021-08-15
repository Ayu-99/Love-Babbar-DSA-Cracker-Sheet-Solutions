from collections import defaultdict
def isSubset( a1, a2, n, m):
    map = defaultdict(int)
    for i in range(n):
        map[a1[i]] = 1
    
    for j in range(m):
        if map[a2[j]] != 1:
            return "No"
            
    return "Yes"  
