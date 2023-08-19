#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
    int start = 0;
    int end = arr.size()-1;

    while(start <= end) {
        swap(arr[start++], arr[end--]);
    }
}

int main() {
    int size;
    vector<int> arr;

    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"Enter the elements of array : ";
    for(int i=0; i<size; i++) {
        int temp;
        cin>>temp;
        arr.push_back (temp);
    }

    cout<<"Before reverse operation : ";
    for(int i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;

    reverseArray(arr);
    
    cout<<"After reverse operation : ";
    for(int i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseArray(vector<int> &arr, int m) {
//     int start = m+1;
//     int end = arr.size()-1;

//     while(start <= end) {
//         swap(arr[start++], arr[end--]);
//     }
// }

// int main() {
//     int size, m;
//     vector<int> arr;

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         int temp;
//         cin>>temp;
//         arr.push_back (temp);
//     }

//     cout<<"Enter the target index : ";
//     cin>>m;

//     cout<<"Before reverse operation : ";
//     for(int i:arr) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     reverseArray(arr, m);
    
//     cout<<"After reverse operation : ";
//     for(int i:arr) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> mergeSortedArrays(vector<int> arr1, vector<int> arr2) {
//     vector<int> ans;

//     int i=0, j=0;
//     int size1 = arr1.size();
//     int size2 = arr2.size();

//     while(i < size1 && j < size2) {
//         while(i < size1 && j < size2 && arr1[i] < arr2[j]) {
//             ans.push_back (arr1[i++]);
//         }

//         while(i < size1 && j < size2 && arr1[i] > arr2[j]) {
//             ans.push_back (arr2[j++]);
//         }

//         while(i < size1 && j < size2 && arr1[i] == arr2[j]) {
//             ans.push_back (arr2[i++]);
//             ans.push_back (arr2[j++]);
//         }
//     }

//     while(i < size1) {
//         ans.push_back (arr1[i++]);
//     }

//     while(j < size2) {
//         ans.push_back (arr1[i++]);
//     }

//     return ans;
// }

// int main() {
//     int size1, size2;
//     vector<int> arr1;
//     vector<int> arr2;

//     cout<<"Enter the size of first array : ";
//     cin>>size1;

//     cout<<"Enter the elements of first array : ";
//     for(int i=0; i<size1; i++) {
//         int temp;
//         cin>>temp;
//         arr1.push_back (temp);
//     }

//     cout<<"Enter the size of second array : ";
//     cin>>size2;

//     cout<<"Enter the elements of second array : ";
//     for(int i=0; i<size2; i++) {
//         int temp;
//         cin>>temp;
//         arr2.push_back (temp);
//     }

//     vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
    
//     cout<<"Merged Array : ";
//     for(int i:mergedArray) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void moveZeroes(vector<int> &arr) {
//     for(int i=0, zero=0; i<arr.size(); i++) {
//         if(arr[i] != 0) {
//             swap(arr[i], arr[zero]);
//             zero++;
//         }
//     }
// }

// int main() {
//     int size;
//     vector<int> arr;

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         int temp;
//         cin>>temp;
//         arr.push_back (temp);
//     }

//     cout<<"Before shifting zeroes : ";
//     for(int i:arr) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     moveZeroes(arr);
    
//     cout<<"After shifting zeroes : ";
//     for(int i:arr) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }