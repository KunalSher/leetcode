class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string revstr;
        for (int i = str.length()-1; i >=0 ; i--) {
            revstr.push_back(str[i]);
        }
        if (str==revstr){
            return 1;
        }
        else {
            return 0 ; 
        }
    }
};