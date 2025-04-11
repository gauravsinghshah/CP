#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;
    cin>>n;
    
    vector<int> a(n),x;
    for(int &i : a) cin>>i;
    x.push_back (a[0]);

    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]) x.push_back (a[i]);
        else {
            x.push_back (a[i]);
            x.push_back (a[i]);
        }
    }cout<<x.size()<<endl;
    for(int &i : x) cout<<i<<' ';
    cout<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
