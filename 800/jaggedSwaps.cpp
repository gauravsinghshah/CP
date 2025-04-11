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

    vector<int> a(n);
    for(int& i:a){
        cin>>i;
    }

    
    while (true){  
        bool swapped= false;
        for(int i=1; i<a.size()-1; i++){
            if(a[i-1] < a[i] && a[i] > a[i+1]){
                swap(a[i], a[i + 1]);
                swapped= true;
            }
        }
        if(!swapped) break;
    }
    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << endl;
}

int main(){
    Fast_IO;
    int t = 1; cin >> t;
    while (t--){
        solve();
    }
}
