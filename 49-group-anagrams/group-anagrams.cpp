class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> temp = strs;
        map<string,vector<int>> m;
        for (int i = 0 ; i<strs.size(); i++) {
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(i);
        }
        for (auto it=m.begin(); it!=m.end(); it++) {
            vector<string> temp2;
            for (auto num : it->second) {
                temp2.push_back(temp[num]);
            }
            res.push_back(temp2);
        }
        return res;
    }
};