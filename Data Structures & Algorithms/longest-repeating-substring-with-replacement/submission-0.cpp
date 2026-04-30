class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int> freq(26, 0);

        int left = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            // current character ka count badhao
            freq[s[right] - 'A']++;

            // window me sabse frequent character track karo
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int windowSize = right - left + 1;

            // agar required changes k se zyada ho gaye → shrink window
            if (windowSize - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            // har valid window pe answer update karo
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;  
    }
};
