class Solution {
public:
    int maxDepth(string s) {
        const size_t n = s.length();
        int open = 0;
        int maximum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open++;
            }
            if (s[i] == ')') {
                open--;
            }
            maximum = max(maximum, open);
        }
        return maximum;
    }
};