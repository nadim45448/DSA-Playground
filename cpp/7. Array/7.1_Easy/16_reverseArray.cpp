#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){

}
int main(){
    int arr[] = {4,7,9,2,1,10,63,70};
    int size =sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    // reverse using while loop
    // while (start<=end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    // reverse using for loop
    for(int i =0;i<size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}