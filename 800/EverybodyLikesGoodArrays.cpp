#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){
    int n; cin >> n;
    vector <int> a(n);

    for(int & i : a) cin >> i;

    int count=0;
    for(int i = 0; i < n-1; i++){
         if(a[i] % 2 == a[i+1] % 2) count++;
    }

    cout<< count << endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
