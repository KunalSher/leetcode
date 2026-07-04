class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> nums1;
        int count=0;
        for (int i = 0 ; i<nums.size();i++){
            if (nums[i]==0){
                count++;
            }
            else {
                nums1.push_back(nums[i]);
            }

        }
        for (int i=0;i<count;i++){
            nums1.push_back(0);
        }
        nums.clear();
        nums=nums1;
        nums1.clear();
        }
  
};