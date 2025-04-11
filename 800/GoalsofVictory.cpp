#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;
    cin>>n;

    vector<int> a(n-1);
    for(int & i: a){
        cin>>i;
    }
    int ans=0;
    for(int & i: a){
        ans+=i;
    }
    cout<<-ans<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
