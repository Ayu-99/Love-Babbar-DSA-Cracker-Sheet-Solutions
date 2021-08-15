#include<bits/stdc++.h>
string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        map[a1[i]] = 1;
    }
    
    for(int j = 0; j < m; j++){
        if(map[a2[j]] != 1){
            return "No";
        }
    }
    
    return "Yes";
}
