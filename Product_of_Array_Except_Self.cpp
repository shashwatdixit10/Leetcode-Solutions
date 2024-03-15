class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int postcode = 1;
        int precode = 1;
                for(int j=0;j<n;j++){
                    ans[j] = ans[j]*precode;
                    precode = precode*nums[j];
                }
                for(int j=n-1;j>=0;j--){
                    ans[j] = postcode*ans[j];
                    postcode = postcode*nums[j];
                }
                return ans;
            }
};
