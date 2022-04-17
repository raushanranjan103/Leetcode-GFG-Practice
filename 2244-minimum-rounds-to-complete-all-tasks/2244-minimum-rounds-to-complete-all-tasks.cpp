class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         unordered_map<int,int> mp;
    for(int i =0 ;i<tasks.size();i++)
        mp[tasks[i]]++;   
    
    int mini = 0;
    for(auto it : mp) {
        if(it.second > 2) {  
            if(it.second % 3 == 0)  
                mini += it.second / 3; 
            else
                mini += it.second / 3 + 1; 
        }
        else if(it.second == 2)  
            mini += 1;
        else   
            return -1;   
    }
    return mini;
    }
};