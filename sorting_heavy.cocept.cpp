#include<iostream>
using namespace std;
void  bubblesort(int arr[],int n){
	for( int i=0;i<n-1;i++){
		for( int j=0;j<n-i-1;j++){
			cout<<" NOW COMPARING "<<arr[j]<<" and "<<arr[j+1]<<endl;
			if( arr[j]>arr[j+1]){
			cout<<"NOW SWAPPING OF "<<arr[j]<<" and "<<arr[j+1]<<endl;
				swap( arr[j],arr[j+1]);
				cout<<"SWAPPED ARRAY =>> ";
				for( int j=0;j<n;j++){
					cout<<arr[j]<<" ";
				}
			}
		}
	}
} 
     void printarray(int arr[],int n){
     	for( int i=0;i<n;i++){
     		cout<<arr[i]<<" ";
		 }
           cout<<endl;
	 }
 
  int main(){
  	int n;
  	int arr[n];
 	cout<<"ENTER THE SIZE OF AN ARRAY:";
	cin>>n;
	cout<<" ENTER THE "<<n<<" ELEMENTS IN AN ARRAY"<<endl;
	
	for( int i=0;i<n;i++){
		cin>>arr[i];
	}
	   cout<<" THE UNSORTED ARRAY IS : ";
	   for(int i=0;i<n;i++){
	   	cout<<arr[i]<<" ";
	   }
	       cout<<endl;
	     cout<<" THE SORTED ARRAY IS : ";  
	    bubblesort( arr,n);
	    printarray( arr,n);
	return 0;
  }
