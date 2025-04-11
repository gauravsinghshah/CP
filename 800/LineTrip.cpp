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
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int& i:a){
        cin>>i;
    }
    vector<int> ans(n+1);
    for(int i=0; i<a.size(); i++){
        if(i==0){
            ans[i]=a[i]-0;
        }
        else{
            ans[i]=a[i]-a[i-1];
        }
    }
    ans[n]=2*(x-a[n-1]);
    sort(ans.begin(),ans.end());

    cout<<ans[n]<<endl;
}

int main(){
    Fast_IO;
    int t = 1; cin >> t;
    while (t--){
        solve();
    }
}
