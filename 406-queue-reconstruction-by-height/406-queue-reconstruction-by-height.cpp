class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    
    if(people.size() < 2) return people;
    vector<vector<int>> ans;
    map<int, vector<int>> heights;
    for(int i = 0; i < people.size(); i++)
        heights[people[i][0]].push_back(people[i][1]);
        
    for(auto rit = heights.rbegin(); rit != heights.rend(); ++rit){
        sort(rit->second.begin(), rit->second.end());
        for(int i = 0; i < rit->second.size(); i++)
            ans.insert(ans.begin() + rit->second[i], {rit->first, rit->second[i]});
    }
    return ans;
        
        
    }
};