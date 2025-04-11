#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
#define ln "\n";
#define all(v) v.begin(),v.end()
#define YES "YES\n";
#define NO "NO\n";
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int gcd(int a,int b){if(a==0) return b; return gcd(b%a,a);}
int lcm(int a,int b){ return (a*b)/gcd(a,b);}


void solve(){
    int n;
    cin>>n;

    vector<char> a(n);
    for (char& i : a){
        cin>>i;
    }

    int count=0;
    bool ans = false;
    for (int i=0; i<a.size(); i++){
        if(i+2<n && a[i]=='.' && a[i+1]=='.' && a[i+2]=='.'){
            cout<<2<<endl;
            return;
        }
        if(a[i]=='.'){
            count++;
        }   
    }

    cout<<count<<endl;
}

int main(){
    Fast_IO;
    int t = 1; cin >> t;
    while (t--){
        solve();
    }
}
