class Solution {
public:
    bool isPalindrome(int x) {
        long int digit,rev_num=0,cpyx = x;

        while (cpyx>0){
            digit = cpyx % 10;
            cpyx /= 10;
            rev_num = rev_num*10 + digit;
        }
        if (rev_num == x){
            return true ;
        }
        else{
            return false;
        }
    }
};