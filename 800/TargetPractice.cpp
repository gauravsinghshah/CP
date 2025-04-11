#include <bits/stdc++.h>
using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


void solution(){

    vector<vector<char>> a(10, vector<char>(10));  
    for (int i = 0; i < 10; i++) {  
        for (int j = 0; j < 10; j++) {
            cin >> a[i][j];
        }
    }

    int sum=0;
    for (int i = 0; i < 10; i++) {  
        for (int j = 0; j < 10; j++) {
            if(a[i][j]=='X') {
                if(i==0 || i==9 || j==0 || j==9) {
                    sum +=1;
                }
                else if(i==1 || i==8 || j==1 || j==8){
                    sum +=2;
                }
                else if(i==2 || i==7 || j==2 || j==7){
                    sum +=3;
                }
                else if(i==3 || i==6 || j==3 || j==6){
                    sum +=4;
                }
                else sum +=5;
            }
        }
    }
    cout<<sum<<endl;
}

int main(){
    Fast_IO;
    int t; cin >> t;
    while (t--){
        solution();
    }
}
