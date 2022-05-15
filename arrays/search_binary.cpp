#include<iostream>
using namespace std;

bool binarySaerch(int arr[],int ele, int size){

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == ele){
            return 1;
        }
        if(arr[mid] > ele){
            end= mid-1;
        }else{
            // arr[mid] < ele
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size= 10;
    int elem;
    cin>> elem;
    bool result = binarySaerch(arr, elem, size);
    cout<<result;
    if(result){
        cout<<"Element is present in the array";
    }else{
        cout<<"Element is not present in the array";
    }
}