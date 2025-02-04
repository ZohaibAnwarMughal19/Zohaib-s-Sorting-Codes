#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cout<<"ENTER THE SIZE OF NA ARRAY : ";
	cin>>n;
	cout<<"ENETR THE "<<n<<" ELEMENTS IN THE ARRAY :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	  for(int i=0;i<n-1;i++){
	  	for( int j=i+1;j<n;j++){
	  		if(arr[j]<arr[i]){
	  			swap(arr[j],arr[i]);
			  }
		  }
	  }
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
