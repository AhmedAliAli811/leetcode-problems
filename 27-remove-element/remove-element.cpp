class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int cnt = 0 , lst = nums.size()  ;
    for (int i = 0; i < lst; ++i) {
        if(nums[i] != val){
            nums[cnt] = nums[i];
            cnt++;
        }
    }
    return cnt ;
}
};