#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;

    vector<int> a(n);
    for (int& i : a) cin>>i;

    int count=0;
    for (int& i : a){
        if(i % 2 != 0) count++;
    }
    if(count > 0 && count % 2 != 0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
