#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n;cin>>n;

    vector<int> a(n),s;
    for(int &i:a) cin>>i;

    if(!is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
        return;
    }
    else {
        for(int i=0 ; i<n-1 ; i++) s.push_back(abs(a[i+1]-a[i]));
    }
    int mine = *min_element(s.begin(), s.end());
    cout<<(mine/2)+1<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
