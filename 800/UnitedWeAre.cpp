#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;

    vector<int>a(n),b,c;
    for(int &i:a) cin>>i;

    int maxv= *max_element(a.begin(),a.end());

    for(int &i:a){
        if(i==maxv) c.push_back(i);
        else b.push_back(i);
    }
    if(b.size()==0){
        cout<<-1<<endl;
        return;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int &i:b) cout<<i<<" ";
    cout<<endl;
    for(int &i:c) cout<<i<<" ";
    cout<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
