#include <iostream>
using namespace std;
 void insertsort( int arr[],int n){
 	for( int i=1;i<n;i++){
 		int curr= arr[i];
 		int prev=i-1;
 		cout<<"NOW COMPARING "<<curr<<" and "<<arr[prev]<<endl; 
 	  while( curr<arr[prev] && prev>=0){
 	  	arr[prev+1]=arr[prev];
 	  	prev--;
	   }
	   cout<<" NOW SHIFTING "<<arr[prev+1]<<" and "<<curr<<endl;
	   arr[prev+1]=curr;
	 }
	 
 }
   void printarray( int arr[],int n){
   	  for( int i=0;i<n;i++){
   	  	  cout<<arr[i]<<" ";
		 }
   }
     int main (){
        int n;
        int arr[n];
        cout<<"ENTER THE SIZE OF AN ARRAY : ";
        cin>>n;
        cout<<" ENTER THE "<<n<<" ELEMENTS IN THE ARRAY : "<<endl;
            for( int i=0;i<n;i++){
            	cin>>arr[i];
			}
		cout<<" THE UNSORTED ARRAY IS : ";
		    for( int j=0;j<n;j++){
		    	cout<<arr[j]<<" ";
			}
			cout<<endl;
		   cout<< " THE SORTED ARRAY IS : ";	
        insertsort( arr,n);
        printarray( arr,n);
        
        return 0;
        
	 }
 
 
