class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_tank = 0, start_index = 0, n = gas.size(), s = 0;
        for (int i=0; i<n; i++) {
           s += gas[i] - cost[i];
            gas_tank += gas[i] - cost[i];
            
            if (gas_tank < 0) {
                start_index = i+1;
                gas_tank = 0;
            }
            
        }
        return s < 0 ? -1 : start_index;
    }
    /*for (int i=0; i<n; i++) {
            
            int gas_tank=0,end=i;
            while(true)
            {gas_tank+=gas[end]-cost[end];
            
            if (gas_tank < 0) {
                break;
            }
            end=(end+1)%n;
             if(end==i)
                 return (i);
            }
    */
};