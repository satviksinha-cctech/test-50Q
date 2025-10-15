//Compute the average of elements in an array.
#include <iostream>
using namespace std;

int main(){
    int sum=0, average=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    average=sum/sizeof(arr[5]);
    cout<<"Average is:"<<average;
    return 0;
}