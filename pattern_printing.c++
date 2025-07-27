#include<iostream>
using namespace std;
void pattern1(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cout << "Enter the number: ";
        cin>>n;
        pattern4(n);
    
}
