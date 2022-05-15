/*
*
* insert element in a array 
*
*/
#include <iostream>
using namespace std;
void printArray(int arr[], int size);

// postion can be atFirst, atLast, inBetween
//  constraints POS: (0 <= pos <= size of array)

void insertElementAtPos(int arr[], int pos, int ele, int size){
    
    //shifting element of array to insert element at given pos
    for(int i=size-1; i>=pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = ele;
    size++;
    printArray(arr, size);

}

 void insertElementAtLast(int arr[],int pos,int ele,int size){
    arr[size] = ele;
    size++;
    printArray(arr, size);
 }

 // insert at 0th index (which is 1st position) and insert at position are same
 insertAt0thIndex(int arr[],int pos,int ele,int size){
     for(int i=size-1; i>=0; i--){
         arr[i+1] = arr[i];    
    }
    arr[0] = ele;
    size++;
 }

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void takeInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter size of array " << endl;
    cin >> size;
    if (size < 0 || size > 50)
    {
        cout << " Invalid given size for array " << endl;
        return 0;
    }
    int arr[50];
    cout << " Enter Elements of array : " << endl;
    takeInput(arr, size);
    cout << "Printing element of array : " << endl;
    printArray(arr, size);

    int ele, pos;
    cout << " Enter postion where you want to insert element in given array :" << endl;
    cin >> pos;
    if (pos <= 0 || pos > size + 1)
    {
        cout << " Invalid postion";
        return 0;
    }

    cout << "Enter element for inserting into array " << endl;
    cin >> ele;
    if(pos == 0){
        insertAt0thIndex(arr, pos, ele, size);
    }
    if(pos == size){
        insertElementAtLast(arr,pos,ele,size);
    }else{
        insertElementAtPos(arr, pos, ele, size);
    }
    // printArray(arr, size);
}