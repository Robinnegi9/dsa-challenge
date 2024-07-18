class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k;
        int n=nums.size();
       
        for (int i=0;i<nums.size();i++) {
             int count = 0;
        for (int j = 0;j<nums.size();j++) {
            if (nums[i] == nums[j])
                count++;
        }
        if(count>n/2){
             k=nums[i];
            }
        }
       return k;
    }
};