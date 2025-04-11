#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int &i : nums) cin >> i;
    int find = 0;

    for (int i = 0; i < n; i++) {  
        for (int j = i + 1; j < n; j++) {
            if (__gcd(nums[i], nums[j]) <= 2) {
                find = 1;
                break;
            }
        }
        if (find) break;
    }
    if (find == 0) 
        cout << "NO\n";
    else 
        cout << "YES\n";
}

int main() {
    Fast_IO;
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
