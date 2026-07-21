class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        const char* hexDigits = "0123456789abcdef";
        string result;
        // Treat num as unsigned 32-bit to handle negatives via two's complement
        unsigned int n = static_cast<unsigned int>(num);
        
        while (n != 0) {
            result += hexDigits[n & 0xF];
            n >>= 4;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};