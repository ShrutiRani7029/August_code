#include<bits/stdc++.h>
using namespace std;

///example
//Input: s = "abc", t = "ahbgdc"

bool fun(string s1,string s2){

int n=s1.size();
int m=s2.size();

if(n>m)return false;
else{
    int i=0,j=0,count=0;
    while(i<n && j<m){

        if(s1[i]==s2[j]){
            i++;
            j++;
            count++;
        }
        else j++;
    }
    if(count==n)return true;
    return false;
}


}

int main(){
string s1,s2;
cin>>s1>>s2;
bool ans=fun(s1,s2);
if(ans==1)cout<<"true"<<endl;
else cout<<"false"<<endl;


}
