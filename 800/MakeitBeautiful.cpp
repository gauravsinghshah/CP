#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int &i:a)cin>>i;
    if(a[n-1]==a[0]){
        cout<<"NO\n";
        return;
    }
    int temp = a[n - 1];
    a[n - 1] = a[0];
    a[0] = temp;
    sort(a.begin()+1,a.end());
    cout<<"YES\n";
    for(int &i:a)cout<<i<<" ";
    cout<<"\n";
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
