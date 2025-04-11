#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    long long n,k;cin>>n>>k;
    if(n%2==0)cout<<"YES"<<endl;
    else if(n%2==1 && k%2==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
