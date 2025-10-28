//Merge two arrays into a single sorted array.
#include<iostream>
using namespace std;

int main(){
    int arr1[5]={1,2,3,4,5};
    int size1 = sizeof(arr1);
    int arr2[6]={6,7,8,9,10,11};
    int size2 = sizeof(arr2);
    int arr3[size1+size2];
    
    int i=0, j=0, k=0;
    while (i < 4 && j < 3) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    
    while (i < 4) {
        arr3[k++] = arr1[i++];
    }

    while (j < 3) {
        arr3[k++] = arr2[j++];
    }

    cout << "Merged Sorted Array: ";
    for (int x = 0; x < 7; x++) {
        cout << arr3[x] << " ";
    }
    cout << endl;

    return 0;
}
