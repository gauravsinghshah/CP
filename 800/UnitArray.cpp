#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;
    
    vector<int> x(n);
    for(int &i:x) cin>>i;

    int pos=0,neg=0;
    for(int &i:x){
        if(i==1) pos++;
        else neg++;
    }
    int op=0;
    while(neg>pos || neg%2!=0){
        pos++;
        neg--;
        op++;
    }
    cout<<op<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
