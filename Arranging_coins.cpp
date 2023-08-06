class Solution {
public:
    int arrangeCoins(int n) {
       int c=n;
       ///c=8
        long long i=1;
        if(n==0) return 0;
        else if(n==1) return 1;
        while(c>0){
            i++;//i=1,//i=2//i=3//i=4
            c-=i;//c=7,//c=5//c=2//c=-2

        }
    return i-1;///return (4-1)=3
    } 
    
};
