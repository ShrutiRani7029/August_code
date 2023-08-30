class Solution {
public:
    ///kadane's algorithm :  If it is negative then discard the current subarray and start the new sum ..o(n)
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            m=max(m,sum);
            if(sum<0)sum=0;///kahani me twist,
        }
        return m;
       
    }
};
