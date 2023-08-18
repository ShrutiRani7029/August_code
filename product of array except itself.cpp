#include<bits/stdc++.h>
using namespace std;

vector<int>fun(vector<int>&nums){

int n=nums.size();
vector<int>v;
int product=1;
for(int i=0;i<n;i++)
{

    product*=nums[i];
    v.push_back(product);
}
///vector----v[0]=1,v[1]=2,v[2]=6,v[3]=24.
//for(int i=0;i<n;i++)cout<<v[i]<<" ";
//cout<<endl;
product=1;
for(int i=n-2;i>=0;i--){
    cout<<"o-"<<v[i]<<" ";
    v[i+1]=v[i]*product;
    product=product*nums[i+1];
    cout<<"pro-"<<product<<" ";
}
cout<<endl;

v[0]=product;
return v;

}


int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
cin>>n;
vector<int>nums(n);

for(int i=0;i<n;i++)cin>>nums[i];
vector<int>ans=fun(nums);
for(auto element: ans)cout<<element<<" ";

}




}
