#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n,k,p;cin>>n>>k>>p;
    
    if(k<=n*p && k>=n*(-p)){
        if(abs(k)>p && k%p!=0) cout<<(abs(k)/p+1)<<endl;
        else if(abs(k)>p && k%p==0) cout<<(abs(k)/p)<<endl;
        else if(k==0)cout<<0<<endl;
        else cout<<1<<endl;
    }else cout<<-1<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
