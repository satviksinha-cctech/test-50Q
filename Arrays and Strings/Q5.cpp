//Search for an element in an array using linear search.
#include<iostream>
using namespace std;

int main(){
    bool found=true;
    int arr[7]={1,2,3,4,5,6,7};
    int j=9;
    for(int i=0;i<7;i++){
        if(arr[i]==j){
            found=true;
        }
        else{
            found=false;;
        }
    }
    if(found){
    cout<<j<<" is the element we were searching for";
    
    }
    else{
        cout<<"Sorry, couldn't find it";
    }
    return 0;
}