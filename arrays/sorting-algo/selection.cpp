#include<iostream>
using namespace std;

void takeInput(int arr[], int size){
    cout<<"Enter element of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
     cout<<"Printing element of array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

void selectionSort(int arr[], int size){
    
    int e,f,g,si;
    e = 0;

    while( e < size-1){
        si = e;
        f = e+1;
        while(f<size){
            if(arr[f]< arr[si]){
                si = f;
            }
            f++;
        }
        g = arr[si];
        arr[si] = arr[e];
        arr[e] = g;
        e++;
    }
}

int main(){
    int arr[50];
    int size;

    cout<<"Enter size of array"<<endl;
    cin>>size;

    takeInput(arr, size);
    printArray(arr,size);

    selectionSort(arr, size);
    printArray(arr,size);
}