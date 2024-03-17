#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //printing the first triangle
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        //printing the second triangle
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k=k+1;
        }
        int l=1;
        //printing the third triangle
        while(l<=i-1){
            cout<<"*";
            l=l+1;
        }
        //printing the last triangle
        int m=1;
        while(m<=n-i+1){
            cout<<j-m;
            m=m+1;
        }
        cout<<endl;
        i=i+1;
    }
}