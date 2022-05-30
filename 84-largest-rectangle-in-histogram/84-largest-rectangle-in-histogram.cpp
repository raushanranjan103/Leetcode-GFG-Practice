class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size();
        stack<int> s;
        int leftsmall[n] , rightsmall[n];
        for(int i = 0;i<n;i++){
            while(!s.empty() && heights[s.top()] >= heights[i] ){
                s.pop();
            }
            
            leftsmall[i] = s.empty() ? 0 : s.top() + 1;
            
            s.push(i);
        }
        
        while(!s.empty()){
            s.pop();
        }
        
        for(int i = n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()] >= heights[i] ){
                s.pop();
            }
            
            rightsmall[i] = s.empty() ? n - 1 : s.top() - 1;
            s.push(i);
        }
        
        
       int ans = INT_MIN;
        for(int i = 0;i<n;i++){
            ans = max(ans , (rightsmall[i] - leftsmall[i] + 1)*heights[i]);
        }
        
        return ans ;
    
    
    }
};