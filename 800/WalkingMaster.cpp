#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b)cout<<-1<<endl;
    else if(a+d-b<c)cout<<-1<<endl;
    else cout<<d-b+a+d-b-c<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
