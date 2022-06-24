class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
         string t="";
        for(int i=0;i<s.size();i++)
        {
            t+=to_string(((s[i]-'a')+1));
        }
        cout<<t<<endl;
   stringstream ss; 
   

   ss <<t;
        int x=0;
   
  
   ss >>x;
   
  
        int ans=0;
        while(k--){
            for(int i=0;i<t.length();i++){
                sum += int(t[i]-'0');
                ans = sum;
            }
            t.erase();
            t= t+ to_string(sum);
            sum=0;
        }
        return ans;
    }
};