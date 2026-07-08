class Solution {
public:
    int maxArea(vector<int>& arr) {
            int i = 0 ;
            int j = arr.size()-1;
            int maxarea=0;


            while (j>i){

                    int test = (j-i)*min(arr[j],arr[i]);
                    maxarea=max(maxarea,test);
                    
                    if (arr[i]<arr[j]) {
                        i++;
                    }

                    else{
                        j--;
                    }

            }
        return maxarea;
    }
};