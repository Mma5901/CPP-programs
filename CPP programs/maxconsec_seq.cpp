#include<iostream>
using namespace std;
int main()
{
int arr[1000];
int n,cnt=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}
for(int i=0;i<n;i++){
    //if((abs(arr[i])-abs(arr[i+1]))==1){
        //cnt=cnt+1;
   // }
    //else{
    //cnt=0;
    cout<<arr[i];
    }
}
//cout<<"Max consecutive subsequence:"<<(cnt+1);
//return (cnt+1);
