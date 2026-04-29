class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char> st;
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < s.length()) {
        if (st.find(s[right]) == st.end()) {
            // no duplicate → expand window
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            // duplicate → shrink window
            st.erase(s[left]);
            left++;
        }
    }

    return maxLen;
    }
};
