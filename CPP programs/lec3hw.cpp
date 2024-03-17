#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"This is lowercase alphabet"<<endl;
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"This is uppercase alphabet"<<endl;
    }
    else
    cout<<"This  is a number"<<endl;
    return 0;
}