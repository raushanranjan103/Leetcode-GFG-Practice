class Solution {
public:
    int minBitFlips(int a, int b) {
         int flips = 0;
 
 
  while(a > 0 || b > 0){
 
    int t1 = (a&1);
    int t2 = (b&1);
 
    if(t1!=t2){
      flips++;
    }
    
    a>>=1;
    b>>=1;
  }
 
  return flips;
        
    }
};