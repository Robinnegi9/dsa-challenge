class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      // Use a set to store unique elements
        set<int> uniqueNums(nums.begin(), nums.end());
        // Copy the unique elements back into the original vector
        nums.assign(uniqueNums.begin(), uniqueNums.end());
        // Return the new length of the vector
        return nums.size();
      

    }   
};
