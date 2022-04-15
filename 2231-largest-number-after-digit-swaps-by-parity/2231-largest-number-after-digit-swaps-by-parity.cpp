class Solution {
public:
    int largestInteger(int num) {
        vector<int> vec,even,odd;
        
  while(num>0){
            int last=num%10;
            vec.push_back(last);
            if(last%2==0)even.push_back(last);
            else odd.push_back(last); 
      
            num/=10;
        }
            reverse(vec.begin(),vec.end());
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
        
        int ans=0;

        for(int i=0;i<vec.size();i++){
           int x=vec[i];
            if(x%2==0){
                ans=ans*10+even.back();
                even.pop_back();
            }
            else{
                ans=ans*10+odd.back();
                odd.pop_back();
            }
        }
        
        return ans;
        
    }
};