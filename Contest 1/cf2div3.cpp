#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solution(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int a = 0, b = 0;
    for (char i : s) {
        if (i == '-') a++;
        else b++;
    }

    if (a >= 2 && b >= 1) {  
        long long mx = 0;
        for(long long i = 1; i <= a - 1; i++) {
            long long j = a - i;
            long long current = i * b * j;
            mx = max(mx, current);
        }
        cout << mx << endl;
    } else {
        cout << 0 << endl;
    }
}

int main(){
    Fast_IO;
    int t;
    cin >> t;
    while (t--){
        solution();
    }
}
