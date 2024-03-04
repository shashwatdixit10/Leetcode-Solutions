class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;
        if(nums[0]>=k)
            return count;
        priority_queue<long long, vector<long long>, greater<long long>> num(nums.begin(),nums.end());
        
        while(num.top()<k){
            long long a = num.top();
            num.pop();
            long long b = num.top();
            num.pop();
            long long c = min(a,b)*2 + max(a,b);
            num.push(c);
            count++;
        }
        return count;
    }
};
