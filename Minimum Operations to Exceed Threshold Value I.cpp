class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i=0;
        while(nums[i]<k){
            count++;
            i++;
        }
        return count;
    }
};
