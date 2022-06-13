// ADITYA DEOGAONKAR //

BRUTE FORCES TO ITERATE OVER ALL MATRIX TC= O(NLOG(N)) [FOR SORTING] + O(N^2) [FOR TRAVESING THE VECTOR MATRIX ]   
OPTIMAL / TO ITERATE OVER PAIRS         TC= O(NLOG(N)) [FOR SORTING] + O(N) [FOR TRAVESING LINEAR ]
  
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
         vector<vector<int>>mergedinterval;
        if(intervals.size()==0) {
            return mergedinterval;  // if empty
        }
        sort(intervals.begin(),intervals.end());
        vector<int>tempinterval = intervals[0];  // storing 1st pair
        
        for(auto it : intervals) {
            if(it[0]<=tempinterval[1]) {
                tempinterval[1] = max(it[1],tempinterval[1]);  //iterating over all pairs 
            }
            else {
                mergedinterval.push_back(tempinterval);
                tempinterval = it;  // reassigining the value to tempint
            }
        }
        
        mergedinterval.push_back(tempinterval);  // to push in mergedint
        return mergedinterval;  
        
        
        
    }
};
