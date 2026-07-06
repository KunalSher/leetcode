class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
                sort(nums.begin(), nums.end());

        set<vector<int>> st;
        for (int i = 0 ; i<nums.size()-2; i++){
            int j=i+1;
            int k=nums.size()-1;
            while (j<k){
                if (nums[i]+nums[j]+nums[k]==0){
                    vector<int> arr={nums[i],nums[j],nums[k]};
                    st.insert(arr);
                    j++;
                    k--;
                }
                else if (nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else {
                    j++;
                }

            }
        }
        
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};