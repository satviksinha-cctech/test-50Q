//Sort an array using the bubble sort algorithm.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,5,3,1,2};
    
    for(int i=0;i<5;i++){
        for(int j=0; j<4;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;


    }
    return 0;
}