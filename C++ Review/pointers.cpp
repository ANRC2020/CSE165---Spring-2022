#include <iostream>
#include <vector>
using namespace std;

void populate(int arr[], int length){
    for(int i = 0; i < length; i++){
        arr[i] = i;
    }
}

void modify(int* ptr, int length, int increment){
    for(int i = 0; i < length; i++){
        ptr[i] += increment;
    }
}

int main() {
    // int arr[10];
    // populate(arr, 10);

    // for(int i = 0; i < 10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    // int* ptr = &arr[0];
    // int increment = 97;
    // modify(ptr, 10, increment);

    // for(int i = 0; i < 10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int** matrix;
    // int *temp;
    // int arr[3] = {1,2,3};

    // temp = &arr[0];
    // matrix = &temp;

    // cout << matrix << endl;
    // cout << *matrix << endl;
    // cout << *(*matrix + 1) << endl;
    // cout << temp << endl;
    // cout << *(temp + 1) << endl;

    // for(int i = 0; i < 3; i++){
    //     int x[3] = {1+i,2+i,3+i};
    //     int* temp = &x[0];
    //     *matrix = temp;
    //     cout << matrix << endl;
    // }

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[i] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // int* ptr;
    // int arr[3] = {1,2,3}; 

    // ptr = &arr[0];

    // for(int i = 0; i < 3; i++){
    //     cout << ptr[i] << endl;
    // }

    int** matrix[3];
    int *temp;
    int arr[3] = {1,2,3};

    temp = &arr[0];
    matrix[0] = &temp;

    cout << matrix << endl;
    cout << *(matrix[0]) << endl;
    cout << *(*(matrix[0]) + 1) << endl;
    
}
