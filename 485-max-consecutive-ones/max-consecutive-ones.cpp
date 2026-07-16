class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int t_v=0;
        int a_v=0;
        int ptr=0;
        int n= nums.size();
        while (ptr<n){
            while (ptr < n && nums[ptr] != 0){
                t_v++;
                ptr++;
            }

            a_v= max(t_v , a_v);
            t_v=0;
            ptr++;
        }

        return a_v;

    }
};