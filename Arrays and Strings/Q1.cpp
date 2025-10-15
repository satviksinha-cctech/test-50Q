//Find the largest element in an array.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int largest_arr=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>arr[0]){
            largest_arr=arr[i];
        }
    }
    cout<<"Largest element in the array is: "<<largest_arr;
    return 0;
}