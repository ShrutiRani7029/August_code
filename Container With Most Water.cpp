class Solution {
public:
    int maxArea(vector<int>& h) {
     int n=h.size();//9
    int m=0;
    int j=h.size()-1;//8
    int i=0;
    
    while(i<j)
    {
        int s=j-i;///s=8//s=7
        int num=min(h[i],h[j]);//min(1,7)=1//num=min(8,7)=7
        m=max(m,num*s);//m=max(0,1*8)=8//m=max(8,49)=49

        if(h[i]<h[j])i++;///if(1<7)i=1
        else j--;///j=7
    }

    return m;///49 returned...
    }
};
