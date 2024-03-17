#include<iostream>
using namespace std;
int nth_term(int n){
    int ans=(3*n)+7;
    return ans;
}
int main(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;
cout<<"Nth term="<<nth_term(n);
return 0;
}