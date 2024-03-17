#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done"<<endl;
}

int main(){
    //declaring an array
    int arr[10];
    

    int number[3]={5,7,11};

    //Accessing the array
    cout<<"Element at index 0:"<<number[0]<<endl;

    int a[15]={2,7};
    int n=15;
    printArray(a,n);

    int a2[10]={0};
    int n2=10;
    printArray(a2,n2);

    int a3[10]={1};
    printArray(a3,n2);
    int a3_size=sizeof(a3)/sizeof(int);
    cout<<"Size of a3:"<<a3_size<<endl;

    char ch[5]={'a','b','c','d','e'};

    cout<<"Everything is fine"<<endl<<endl;;
    return 0;
}