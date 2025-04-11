#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;
    vector<int> a(n);
    for (int &i:a) cin>>i;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==2) count++;
    }
    if(count==0) cout<<1<<endl;
    else if(count%2==0){
        int x=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==2) x++;
            if(x==count/2) {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else cout<<-1<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
