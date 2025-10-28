//Count the number of even and odd elements in an array.
#include<iostream>
using namespace std;
 int main(){
    int count_e=0, count_o=0;
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            count_e++;
            
        }
        else{
            count_o++;
        }

    }
    cout<<"The number of odd elements are: "<<count_o<<endl;
    cout<<"The number of even elements are: "<<count_e;
    return 0;
 }