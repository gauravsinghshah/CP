#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;
    string a;cin>>a;
    int r=n,x;
    if(n%2==0)x=n/2;
    else x=n/2+1;
    for(int i=0;i<x;i++){
        if(a[i]!=a[n-1-i])r=r-2;
        else break;
    }cout<<r<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
