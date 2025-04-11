#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n,m;
    cin>>n>>m;

    string str,sub;
    cin>>str>>sub;

    if(str.find(sub) != string::npos) {
        cout << 0 << endl;
        return;
    } else {
        int count=1;
        while(str.size()<m+n){
            str+=str;
            if(str.find(sub) != string::npos) {
                cout << count << endl;
                return;
            }count++;
        }
        cout << -1 << endl;
    }
    
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
