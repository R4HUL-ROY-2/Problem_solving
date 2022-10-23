// this code can be used to find the minimum and maximum sum when we have to choose any 4 array inputs out of 5

#include<iostream>
using  namespace std;

int main(){
	long int arr[5];
	
	int n=5;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//sorting of array
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	int minsum=0;
	int maxsum=0;
	
	for(int i=0;i<n-1;i++){
		minsum+=arr[i];
	}
	
	for(int i=1;i<n;i++){
		maxsum+=arr[i];
	}
	
	cout<<minsum<<" "<<maxsum<<endl;
	
	return 0;
}
