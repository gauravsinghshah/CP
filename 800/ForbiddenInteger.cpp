#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n,k,x;cin>>n>>k>>x;

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++) cout<<1<<" ";
        cout<<endl;
    }
    else{
        if(k==1 ||(k==2 && n%2!=0)) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++) cout<<2<<" ";
                cout<<endl;
            }
            else{
                cout<<(n-3)/2+1<<endl;
                for(int i=1;i<=(n-3)/2;i++) cout<<2<<" ";
                cout<<3<<endl;
            }
        }
    }
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
