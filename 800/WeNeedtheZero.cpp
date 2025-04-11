#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    int r=0;
    for(int &i:a) r^=i;
    if(n%2==0 && r==0) cout<<a[n-1]<<endl;
    else if(n%2!=0) cout<<r<<endl;
    else cout<<-1<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
