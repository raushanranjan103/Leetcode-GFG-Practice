class Solution {
public:
    int maximumUniqueSubarray(vector<int>&s) {
        int n = s.size();
        int si = 0, ei = 0;
        int ans = 0;
        unordered_set<int>st;
        int sum = 0;
        while(si < n && ei < n){
            if(st.find(s[ei]) == st.end()){
                st.insert(s[ei]);
                sum += s[ei++];
                ans = max(ans, sum);
            }else{
                st.erase(s[si]);
                sum -= s[si++];
            }
        }
        return ans;
    }
};