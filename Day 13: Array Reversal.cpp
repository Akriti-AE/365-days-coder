#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,6,7,8,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int r = n/2;
    int temp;
    for(int i = 0; i < r; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int j = 0; j < n; j++){
        cout<<arr[j]<<" ";
    }


    return 0;
}
