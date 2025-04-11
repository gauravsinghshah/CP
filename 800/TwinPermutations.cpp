#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        b[i]=n+1-a[i];
    }
    for(int &i:b){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
