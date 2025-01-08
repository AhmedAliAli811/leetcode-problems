class Solution {
public:
    bool check (unordered_map<string,int> wordcount , string s , int wordlen) {
        for(int i=0; i<s.size(); i+=wordlen) {
            string w = s.substr(i, wordlen);
            if(wordcount.find(w) != wordcount.end()) {
                if(--wordcount[w] == -1) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        unordered_map<string, int> m;
        for (string word : words) {
            m[word]++;
        }
        int wordlen = words[0].size();
        int sliding_window = words.size() * wordlen;
        int i = 0;
        while (i + sliding_window <= s.size()) {
            if (check(m, s.substr(i , sliding_window), wordlen)) {
                res.push_back(i);
            }
            i++;
        }
        return res;
    }
};