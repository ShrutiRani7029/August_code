class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        int count=0;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                count=1;
                break;
            }
            else count=0;
        }
        if(count==1)return true;
        else return false;
    }
};
