#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int a=0;
	    for(int i=0;i<n;i++){
	       int count=0;
	       for(int j=i+1;j<n;j++){
	           if(arr[i]==arr[j]){
	               count++;
	           }
	       }
	       if(count>a){
	           a=count;
	       }
	    }
	    cout<<n-a-1<<endl;
	}
	return 0;
}
