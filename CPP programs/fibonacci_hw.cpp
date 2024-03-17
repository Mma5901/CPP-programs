#include<iostream>
using namespace std;
int fibonacci(int n){
    int n1=0;
    int n2=1;
    int sum=0;
    if(n==1){
        return n1;
    }
    else if(n==2){
        return n2;
    }
    else{
    for(int i=1;i<=(n-2);i++){
      sum=n1+n2;
      n1=n2;
      n2=sum;
    }
    return sum;
}
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term of fibonacci series="<<fibonacci(n);
    return 0;
}