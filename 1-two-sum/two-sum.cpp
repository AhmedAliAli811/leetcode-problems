class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,set<int>>mp;
        vector<int>ans;
        for (int i = 0; i < n; ++i) {
            mp[nums[i]].insert(i);
        }
        for (int i = 0; i < n; ++i) {
            if(mp[target-nums[i]].size()>0) {
                if (target - nums[i] == nums[i]) {
                    if(mp[nums[i]].size()==1)continue;
                    ans.push_back(i);
                    mp[nums[i]].erase(*mp[nums[i]].begin());
                    ans.push_back(*mp[target - nums[i]].begin());
                    
                } else {
                    ans.push_back(i);
                    ans.push_back(*mp[target - nums[i]].begin());
                }
                break;
            }
        }
        return ans;
    }
};