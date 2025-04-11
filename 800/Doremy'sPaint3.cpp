#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;
    cin>>n;

    map<int,int> a;
    for(int i=0; i<n;i++){
        int x;cin>>x;
        a[x]++;
    }
    if(a.size()>2){
        cout<<"NO"<<endl;
    }
    else if(abs(a.begin()->second - a.rbegin()->second) <=1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    Fast_IO;
    int t=1; cin >> t;
    while (t--){
        solution();
    }
}
