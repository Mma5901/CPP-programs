#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[] = new int [n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp;
	int sum=0;
	for(int j=0;j<n;j++){
		for(int k=j+1;k<n;k++){
			if(a[k]>a[j]){
				temp=a[k];
				a[k]=a[j];
				a[j]=temp;
			}
		}
		}
	}
	for(int s=0;s<n-2;s++){
		sum+=s;
	}
	cout<<sum<<endl;
	return 0;
}