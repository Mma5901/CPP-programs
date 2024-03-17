#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Hello World"; 
    reverse(str.begin(6), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}