#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
    cin>>size;
    cout<<"Enter the elements of the array:"<<endl;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}
