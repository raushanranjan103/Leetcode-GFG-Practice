class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int max_len = 0, l = 0, r = 0, size = s.length();
        deque<char> seen;
        while (r < size)
        {
            if (find(seen.begin(), seen.end(), s[r]) == seen.end()) {
                seen.push_back(s[r]);
                max_len = max(max_len, r - l + 1);
                r++;
            }
            else {
                seen.pop_front();
                l++;
            }
        }
        return max_len;
        
    }
};