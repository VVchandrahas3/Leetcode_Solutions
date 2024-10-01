class Solution {
public:
    string countAndSay(int n) {
        // Base case: If n is 1, return "1"
        if (n == 1) return "1";
        
        // Start with the initial string
        string current = "1";
        
        // Generate each sequence from 2 to n
        for (int i = 2; i <= n; ++i) {
            string next = "";
            int count = 1;  // Variable to count consecutive characters

            // Traverse the current sequence
            for (int j = 1; j < current.size(); ++j) {
                if (current[j] == current[j - 1]) {
                    // If the current character is the same as the previous, increase the count
                    count++;
                } else {
                    // Otherwise, append the count and the character to 'next'
                    next += to_string(count) + current[j - 1];
                    count = 1;  // Reset the count for the new character
                }
            }
            
            // Append the count and last character of the sequence
            next += to_string(count) + current.back();
            
            // Update current to the new sequence
            current = next;
        }
        
        return current;
    }
};
