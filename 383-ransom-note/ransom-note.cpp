class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> magazineMap;
        map<char, int> ransomNoteMap;
        for (char c : magazine) {
            magazineMap[c]++;
        }
        for (char c : ransomNote) {
            ransomNoteMap[c]++;
        }
        for (char c : ransomNote) {
            if (ransomNoteMap[c] > magazineMap[c]) {
                return false;
            }
        }
        return true;
    }
};