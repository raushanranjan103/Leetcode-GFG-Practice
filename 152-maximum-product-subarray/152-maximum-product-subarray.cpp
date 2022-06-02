class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int result = arr[0];
        int n=arr.size();
 
//     for (int i = 0; i < n; i++)
//     {
//         int mul = arr[i];
       
//         for (int j = i + 1; j < n; j++)
//         { result = max(result, mul);
//              mul *= arr[j];
         
          
//         }
//         result = max(result, mul);
        
       
       
//     }
//     return result;
//     }
         // ending at the current position
    int max_ending_here = arr[0];
    int min_ending_here = arr[0];
    int max_so_far = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        max_ending_here = temp;
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
    }
};