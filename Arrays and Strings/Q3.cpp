//Reverse an array in place.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
     int start=0;
     int end=n-1;
     while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

     }
     cout<<"Reversed Array is: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
     }
     return 0;

}