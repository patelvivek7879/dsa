#include<iostream>
using namespace std;

void takeInput(int arr[], int size){
    cout<<"Printing Array " <<endl;
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<" taking input"<<endl;
    for(int i=0;i<size; i++){
        cout<< arr[i] << endl;
    }
}

void insertionSort(int arr[], int size){
    int temp, y,z;
    y=1;
    while(y<size){
        temp = arr[y];
        z = y-1;
        while(z>=0 && arr[z]>temp){
            arr[z+1] = arr[z];
            z--;    
        }
        arr[z+1] = temp;
        y++;
    }   
}

int main(){
    int arr[50];
    int size;

    cout<<"Enter size of array : ";
    cin>> size;

    takeInput(arr, size);
    printArray(arr, size);

    insertionSort(arr, size);
    printArray(arr, size);

}