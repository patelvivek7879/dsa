#include<iostream>
using namespace std;

void takeInput(int arr[],int size){
    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int arr[], int size) {
    cout<<"Printing elements of array " <<endl;
    int i=0;
    while(i<size){
        cout<<arr[i]<<endl;
        i++;
    }
}

int partitionPoint(int arr[], int lb, int ub){
    int left,right,temp;
    left=lb;
    right=ub;

    while(left<right){
        while(left<ub && arr[left]<=arr[lb]) left++;
        while(arr[right] > arr[lb]) right--;

        if(left<right){
            temp= arr[left];
            arr[left]=arr[right];
            arr[right]= temp;
        }else{
            temp = arr[lb];
            arr[lb] = arr[right];
            arr[right]= temp;
        }
    }
return right;
}

void quickSort(int arr[],int size){
    //pp :- parition point
    int top, lowerBound, upperBound, lb, ub, stack[size][2], pp,g,e,f;
    top = size;
    lowerBound = 0;
    upperBound = size-1;

    top--;

    stack[top][0] = lowerBound;
    stack[top][1] = upperBound;

    while(top!=size){
        lb = stack[top][0];
        ub = stack[top][1];

        top++;
        pp = partitionPoint(arr, lb, ub);
        if(pp+1<ub){
            top--;
            stack[top][0] = pp+1;
            stack[top][1] = ub;
        }
        if(pp-1>lb){
            top--;
            stack[top][0] = lb;
            stack[top][1] = pp-1;
        }
    }
}
int main(){
    int arr[50];
    int size;
    cout<<"Enter size of array :";
    cin>>size;

    takeInput(arr, size);
    printArray(arr, size);

    quickSort(arr, size);
    printArray(arr, size);
}