class Solution {
public:
    vector<string> wordSplit(string s) {
        vector<string> res;
        istringstream iss(s);
        for (string word; getline(iss, word, ' '); ) {
            res.push_back(word);
        }
        return res;
    }
    bool wordPattern(string pattern, string s) {
        vector<string> words = wordSplit(s);
        map<string,set<char>> mp1;
        map<char , set<string>> mp2;
        if (pattern.length() != words.size()) {
            return false;
        }
        for (int i = 0; i < pattern.length(); i++) {
            mp1[words[i]].insert(pattern[i]);
            mp2[pattern[i]].insert(words[i]);
            if (mp1[words[i]].size() > 1) {
                return false;
            }
            if (mp2[pattern[i]].size() > 1) {
                return false;
            }
        }
        return true;
        
    }
};