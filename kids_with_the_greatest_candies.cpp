class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
       int mx =0;
       int n=c.size();
        vector<bool> ans;
        for(int i=0;i<n;i++){
            if(c[i]>mx)mx=c[i];
        }
        ///mx=5
        for(int i=0;i<n;i++){
            if((c[i]+e)>=mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
