#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing array "<<endl;
    for(int i =0; i<size; i++){
        cout<< arr[i] <<endl;
    }
}

void takeInput(int arr[],int size){
    cout<<"Enter elements of array "<<endl;
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
}

void swap(int a, int b){

}

void bubbleSort(int arr[], int size){
    int e,f,g,m;
    m = size-2;

    while(m>=0){
        e = 0;
        f = 1;
        while(e<=m){
        if(arr[e]>arr[f]) {
            g=arr[e];
            arr[e]=arr[f];
            arr[f] = g;
        }
            e++;
            f++;
        }
        m--;
    }
}

int main(){
    int arr[50];
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    takeInput(arr, size);
    printArray(arr, size);

    bubbleSort(arr, size);

    printArray(arr, size);
}