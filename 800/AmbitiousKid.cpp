#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main() {
    int n;
    cin >> n;

    int mini=INT_MAX;
    bool zero=false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) zero=true; 
        mini=min(mini,abs(x));
    }
     if(zero) {
        cout << 0 << endl;
     }else{
        cout << mini << endl;
     }
}
