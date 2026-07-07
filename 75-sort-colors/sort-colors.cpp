class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cntred=0;
        int cntwhite=0;
        int cntblue=0;
        int limit=nums.size();
        nums.clear();

        for (int i =0; i < limit; i ++){
            if (nums[i]==0){
                cntred++;

            }

            else if (nums[i]==1){
                cntwhite++;
            }

            else {
                cntblue++;
            }
        }
            
                for (int i =0; i < limit; i ++){
                    if (cntred!=0){
                        nums.push_back(0);
                        cntred--;
                    }
                    else if (cntwhite!=0){
                        nums.push_back(1);
                        cntwhite--;

                    }
                    else {
                        nums.push_back(2);
                    }
                }
    }


};