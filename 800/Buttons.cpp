#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
   int a,b,c;
   cin>>a>>b>>c;
   
   if(a==b && c%2!=0) cout<<"First"<<endl;
   else if(c%2!=0 && a>b) cout<<"First"<<endl;
   else if(c%2==0 && a>b) cout<<"First"<<endl;
   else cout<<"Second"<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
