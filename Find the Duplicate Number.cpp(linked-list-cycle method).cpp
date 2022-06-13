// ADITYA DEOGAONKAR //

TC = O(N)
SC = O(1)
  
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Find the intersection point of the two runners.
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        // Find the "entrance" to the cycle.
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
