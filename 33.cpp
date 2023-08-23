#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {
    if(size == 1) {
        return true;
    }

    if(arr[size-1] < arr[size-2]) {
        return false;
    } else {
        return isSorted(arr, size-1);
    }
}

/*
bool isSorted(int arr[], int size) {
    if(size == 0 || size == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    } else {
        return isSorted(arr+1, size-1);
    }
}
*/

int main() {
    int size;
    int arr[100];

    cout << "Enter the size : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    if(isSorted(arr, size)) {
        cout << "Array is sorted !" << endl;
    } else {
        cout << "Array is not sorted !" << endl;
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int arraySum(int arr[], int size) {
//     if(size == 1) {
//         return arr[0];
//     }

//     return arr[0] + arraySum(arr+1, size-1);
// }

// int main() {
//     int size;
//     int arr[100];

//     cout << "Enter the size : ";
//     cin >> size;

//     cout << "Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Sum of all elements : " << arraySum(arr, size) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool linearSearch(int arr[], int size, int key) {
//     if(size == 0) {
//         return false;
//     }

//     if(arr[0] == key) {
//         return true;
//     } else {
//         return linearSearch(arr+1, size-1, key);
//     }
// }

// int main() {
//     int size, key;
//     int arr[100];

//     cout << "Enter the size : ";
//     cin >> size;

//     cout << "Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter th element to search for : ";
//     cin >> key;

//     if(linearSearch(arr, size, key)) {
//         cout << "Element is present !" << endl;
//     } else {
//         cout << "Element is not present !" << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool binarySearch(int arr[], int start, int end, int key) {
//     if(start > end) {
//         return false;
//     }

//     int mid = start + (end-start)/2;

//     if(arr[mid] == key) {
//         return true;
//     } else if(arr[mid] > key) {
//         return binarySearch(arr, start, mid-1, key);
//     } else {
//         return binarySearch(arr, mid+1, end, key);
//     }
// }

// int main() {
//     int size, key;
//     int arr[100];

//     cout << "Enter the size : ";
//     cin >> size;

//     cout << "Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter th element to search for : ";
//     cin >> key;

//     if(binarySearch(arr, 0, size-1, key)) {
//         cout << "Element is present !" << endl;
//     } else {
//         cout << "Element is not present !" << endl;
//     }

//     return 0;
// }