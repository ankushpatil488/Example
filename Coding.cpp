#include<bits/stdc++.h>
using namespace std;
int funnCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    //int row=5,col=3;
    //cout<<"Problem 1"<<funnCr(row-1,col-1);

    //Problem 2 Print nth row of pascal trianle  ====> O(n*r)
    int n=5;
    //Brute for 2nd problem
    // for(int col=1;col<=n;col++){
    //     cout<<funnCr(n-1,col-1)<<" ";
    // }

    //Optimal form 2nd problem O(N)
    // int ans = 1;
    // cout<<ans;
    // for(int i=1;i<n;i++){
    //     ans = ans * (n-i);
    //     ans = ans / i;
    //     cout<<ans<<" ";
    // }


    //3rd problem print entire triangle
    //brute O(n^2 * r)
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<funnCr(i-1,j-1)<<" ";
    //     }
    //     cout<<endl;
    // }

    //Optimal O(n^2)
    for(int i=1;i<=n;i++){
        SEE LEETCODE
    }
}

