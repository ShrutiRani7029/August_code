#include<bits/stdc++.h>
using namespace std;

///1 2 5 7 8 4
void runningsum(vector<int>&v){
for(int i=1;i<v.size();i++){
    v[i]=v[i]+v[i-1];
}
return;

}



int main(){
int t;
cin>>t;
while(t--){


    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    runningsum(v);
    for(auto it:v)
    cout<<it<<" ";

    cout<<endl;
}


}
