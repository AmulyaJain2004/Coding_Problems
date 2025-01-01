class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int max_score = 0;  
        for (int i = 1; i < n; i++) {
            int sum_0s = 0; 
            int sum_1s = 0;  
            for (int k = 0; k < i; k++) 
            {
                if (s[k] == '0') 
                {
                    sum_0s++;
                }
            }
            for (int k = i; k < n; k++) 
            {
                if (s[k] == '1') 
                {
                    sum_1s++;
                }
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