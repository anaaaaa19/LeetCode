class Solution {
public:
    int mySqrt(int x) {
        int i =0;
        while((long)i*i<=x){
            i++;
        }
        return i-1;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna