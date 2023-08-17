// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//     cout<<"Printing array : ";

//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
// }

// int main() {
//     int arr[15] = {1,2,3,4,5};

//     printArray(arr, 15);

//     cout<<"Size of array = "<<sizeof(arr)<<endl;
//     cout<<"Length of array = "<<sizeof(arr) / sizeof(int)<<endl;


//     return 0;
// }


// #include <iostream>
// #include <limits.h>
// using namespace std;

// int getMax(int arr[], int size) {
//     int max = INT_MIN;

//     for(int i=0; i<size; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     return max;
// }

// int getMin(int arr[], int size) {
//     int min = INT_MAX;

//     for(int i=0; i<size; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     return min;
// }

// int main() {
//     int size;
//     cout<<"Enter the size of the array : ";
//     cin>>size;

//     int arr[100];

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Maximum element of the array = "<<getMax(arr, size)<<endl;
//     cout<<"Minimum element of the array = "<<getMin(arr, size)<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// void update(int arr[], int n) {
//     cout << endl << "Inside the function" <<endl;
    
//     //updating array's first element
//     arr[0] = 120;

//     for(int i=0; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
// }


// int main() {
//     int arr[3] = {1,2,3};


//     cout<<"Printing in main function"<<endl;

//     for(int i=0; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//     update(arr, 3);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int size, sum=0;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the element of the array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//         sum += arr[i];
//     }

//     cout<<"Sum of all elements of the array = "<<sum<<endl;

//     return 0;
// }


#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return true;
        }
    }

    return false;
}

int main() {
    int size, key;
    int arr[100];

    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"Enter the element of the array : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the key to search for : ";
    cin>>key;

    if(linearSearch(arr, size, key)) {
        cout<<"Element found in the array!"<<endl;
    } else {
        cout<<"Element not found in the array!"<<endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size-1;

//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int size, key;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the element of the array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Array before reverse : ";
//     printArray(arr, size);

//     reverseArray(arr, size);
    
//     cout<<"Array after reverse : ";
//     printArray(arr, size);

//     return 0;
// }


