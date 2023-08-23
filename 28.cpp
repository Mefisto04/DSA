#include <bits/stdc++.h>
using namespace std;

void update1(int j) {
    j++;
}

void update2(int &j) {
    j++;
}

int main() {
    int i = 5;

    int &j = i;

    cout << i << endl;
    update1(i);
    cout << i << endl;
    update2(i);
    cout << i << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int getSum(int arr[], int n) {
//     int sum = 0;

//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//     }
    
//     return sum;
// }

// int main() {
//     int n;

//     cout << "Enter the value of n : ";
//     cin >> n;

//     // Dynamic allocation of an array
//     int *arr = new int[n];

//     cout << "Enter the elements of array : ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Sum of all elements : " << getSum(arr, n) << endl;

//     delete []arr;

//     return 0;
// }