#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing Array's Elements :>>"<<endl;
    for(int i=0;i<size;i++){
        cout<< i <<"th index element is : "<< arr[i] <<endl;
    }
}
void takeInput(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<< i <<"th element value : ";
        cin>> arr[i];
    }
}

void search(int arr[],int size,int ele){
    for(int i=0; i<size; i++){
        if(arr[i] == ele){
            cout<<"Element found at "<< i <<"th index"<<endl;
            break;
        }
    }

    cout<<"Given element is not in the array"<<endl;
}

int main(){
    int arr[50];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    takeInput(arr,size);
    printArray(arr,size);

    int ele;
    cout<<"Enter element to search : ";
    cin>>ele;

    search(arr, size, ele);
}