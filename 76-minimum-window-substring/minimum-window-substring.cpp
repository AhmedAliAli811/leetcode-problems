class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> LetterCount;
        unordered_map<char, int> LetterFreq;
        for (auto c : t) {
            LetterCount[c]++;
        }
        int l = 0 , r = 0 ;
        int ans = 1e9;
        int ansLeft = 0 , ansRight = 0 ;
        int count = 0;
        while (r < s.size()) {
            LetterFreq[s[r]]++;
            if (LetterCount.count(s[r]) && LetterFreq[s[r]] == LetterCount[s[r]]) {
                count++;
            }
            while (count == LetterCount.size()) {
                if (r - l + 1 < ans) {
                    ans = r-l+1;
                    ansLeft = l;
                }
                LetterFreq[s[l]]--;
                if (LetterCount.count(s[l]) && LetterCount[s[l]] > LetterFreq[s[l]]) {
                    count--;
                }
                l++;
            }
            r++;
        }
        return (ans == 1e9) ? "" :s.substr(ansLeft , ans);
    }
};