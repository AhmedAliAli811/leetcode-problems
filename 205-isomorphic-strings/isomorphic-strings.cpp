class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m1 , m2;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++) {
            if (m1.count(s[i])) {
                if(m1[s[i]]!=t[i]) {
                    return false;
                }
            }
            else {
                m1[s[i]]=t[i];
            }

            if (m2.count(t[i])) {
                if(m2[t[i]]!=s[i]) {
                    return false;
                }
            }
            else {
                m2[t[i]]=s[i];
            }
        }
        return true;
    }

};