class Solution {
public:
 
    static bool comp1(vector<int>& v1,vector<int>& v2){
    return v1[1]<v2[1];
}    

    int scheduleCourse(vector<vector<int>>& courses) {
        
        sort(courses.begin(), courses.end(), comp1);
        
        priority_queue<int> pq;
        
        int cur = 0;
        
        for(auto course : courses) {
            cur += course[0];
            pq.push(course[0]);
            if(cur > course[1]) {
                cur -= pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};
