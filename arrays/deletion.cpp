#include<iostream>
using namespace std;

void deleteAtPos(int arr[],int pos,int size){

    for(int i=pos-1; i<size; i++){
        arr[i] = arr[i+1];
    }
}

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

int main(){

    int arr[50];
    int size;
    cout<<" Enter size of array  : ";
    cin>> size;

    takeInput(arr, size);
    printArray(arr, size);

    int pos;
    cout<<" Enter postion from where you want to remove element : ";
    cin>> pos;
    if(pos<=0 || pos >size){
        cout<<" Invalid Position"<<endl;
        return 0;
    }else
        deleteAtPos(arr, pos, size);
    }
    size--;
    printArray(arr, size);


    return 0;
}