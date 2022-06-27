class Solution {
public:
    int minPartitions(string n) {
        int maxx=INT_MIN;
        for(int i=-0;i<n.size();i++)
        {
            int k=n[i]-'0';
            maxx=max(k,maxx);
        }
        cout<<maxx;
        return maxx;
    }
};