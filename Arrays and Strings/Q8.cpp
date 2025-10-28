//Find the frequency of each element in an array.
#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,2,3,4,5,3};
    int count=0;
    int freq[7];

    for (int i = 0; i < 7; i++) {
        freq[i] = -1;
    }

    for(int i=0;i<7;i++){
        count=1;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
            if (freq[i] != 0) {
            freq[i] = count;
        }
        }
    }
    cout << "Frequency of each element:\n";
    for (int i = 0; i < 7; i++) {
        if (freq[i] != 0) {
            cout << arr[i] << " occurs " << freq[i] << " time(s)" << endl;
        }
    }
    
    return 0;
}