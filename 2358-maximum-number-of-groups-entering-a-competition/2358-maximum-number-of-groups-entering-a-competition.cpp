class Solution {
public:
    int maximumGroups(vector<int>& grades) {
       int i=0;
     for( i=0;grades.size()>=i*(i+1)/2; i++);
     return i-1;
 }
        
    
};