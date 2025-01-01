class Solution {
public:
    int maxScore(string s) {
        // O(N^2) approach
        // int n = s.length();
        // int max_score = 0;  
        // for (int i = 1; i < n; i++) {
        //     int sum_0s = 0; 
        //     int sum_1s = 0;  
        //     for (int k = 0; k < i; k++) 
        //     {
        //         if (s[k] == '0') 
        //         {
        //             sum_0s++;
        //         }
        //     }
        //     for (int k = i; k < n; k++) 
        //     {
        //         if (s[k] == '1') 
        //         {
        //             sum_1s++;
        //         }
        //     }
        //     int current_score = sum_0s + sum_1s;
        //     if (current_score > max_score) 
        //     {
        //         max_score = current_score;
        //     }
        // }
        // return max_score;

        // Optimised Approach using O(n) using Prefix Sum
        int n = s.length();
        int max_score = 0;
        // first we will count total number of 1s
        int total_1s = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                total_1s ++;
            }
        }
        // we will iterate through the loop and check if the character is 
        // 0 then we will count it and if it is 1 then we will decrement the total_1s
        // this way we will have the current score and in same loop
        // we can compare it with max score assign higher value to max score.
        int sum_0s = 0;
        int sum_1s = total_1s;
        for (int i = 0; i < n - 1; i++) 
        {
            if (s[i] == '0') 
            {
                sum_0s++; 
            } 
            else if (s[i] == '1') 
            {
                sum_1s--; 
            }
            int current_score = sum_0s + sum_1s;
            if (current_score > max_score) 
            {
                max_score = current_score;
            }
        }
        return max_score;
    }
};