class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
            if(s.size() < words.size()*words[0].size()) return {};

        unordered_map <string, int> dict;
        for(auto str: words) dict[str]++;
        int m = words[0].size(), n = s.size();
        vector <int> res;
        int i = 0;
        while(i <= n - words.size()*m) {
            unordered_map <string, int> seen;
            int j = i;
            while(j < n) {
                string w = s.substr(j, m);
               // cout << w;
                if(dict.find(w) == dict.end())
                    break;
                seen[w]++;
                if(seen[w] > dict[w])
                    break;
               // cout << ": " << i << "," << j << "| ";
                if(j-i+m == m * words.size())
                    res.push_back(i);
                j += m;
            }
           // cout << endl;
            i++;
        }
        return res;
        
    }
};