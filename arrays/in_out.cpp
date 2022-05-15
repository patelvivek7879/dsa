#include<iostream>
using namespace std;

// there is no any property or method to get length/size of array in c++

// int main(){
// 	int a[]={1,2,3,4,5,6,7,8,9,10};
// 	int i=0;
// 	int size = sizeof(a)/sizeof(a[0]);
// 	while(i<size){
// 		cout<< a[i] <<endl;
// 		i++;
// 	}
// }

int main(){
	int size;
	cout<<" Eneter size of array "<<endl;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>> arr[i];
	}

	cout<<" Print element of array" << endl;
	for(int i=0; i<size; i++){
		cout<< arr[i] <<endl;
	}
}
