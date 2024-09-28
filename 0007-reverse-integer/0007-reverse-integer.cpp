class Solution {
public:
    int reverse(int x) {
        int sum = 0;

        while (x != 0) {
            int lastdigit = x % 10;
            
            // Check for overflow before multiplying by 10
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && lastdigit > 7)) {
                return 0; // Overflow condition
            }
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && lastdigit < -8)) {
                return 0; // Underflow condition
            }
            
            sum = sum * 10 + lastdigit;
            x = x / 10;
        }
        
        return sum;
    }
};
