#include <iostream>
using namespace std;

int main(){
    int marks[8] = {1, 2, 56, 78, 23, 2, 45, 78};
    int n = sizeof(marks) / sizeof(marks[0]);
    int histo[101] = {0};

    // Optimized loop
    for (int i = 0; i < n; i++) {
        histo[marks[i]]++;
    }

    // Printing the answers
    for (int k = 0; k < 101; k++) {
        cout << k << "   " << histo[k] << endl;
    }

    return 0;
}
