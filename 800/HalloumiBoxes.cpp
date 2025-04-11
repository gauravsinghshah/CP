#include<bits/stdc++.h>
using namespace std;

//Checking weather the array is sorted or not
bool sorted(int n, int arr[]){
    bool ans=true;
    for (int i=0 ; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            ans = false;
        }
    }return ans;
}

// Halloumi Boxes  
void Halloumi_Boxes(int n, int k, int arr[]){
    if(k>n){
        cout<<"NO"<<endl;
    }
    else{
        if(sorted(n, arr)){
            cout<<"YES"<<endl;
        }
        else if(!sorted(n, arr) && k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//Input
void inputArray(int n, int arr[]){
    for (int i=0 ; i<n; i++){
        
        cin>>arr[i];
    }
}


int main(){
    int x , n, k;
    
    cin>>x;
    
    int i=0;
    while ( i < x){
        i++;
        
        cin>>n;
        cin>>k;
        
        int arr[n];
        inputArray(n,arr);

        Halloumi_Boxes(n, k, arr);
    }
    return 0;
}