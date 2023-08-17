// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void swapAlternate(int arr[], int size) {
//     for(int i=0; i<size-1; i+=2) {
//         swap(arr[i], arr[i+1]);
//     }
// }

// int main() {
//     int size;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Before swaping alternate elements : ";
//     printArray(arr, size);

//     swapAlternate(arr, size);
    
//     cout<<"After swaping alternate elements : ";
//     printArray(arr, size);

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// bool uniqueOccurrences(int arr[], int size) {
//     vector<int> count;
    
//     //In-built function to sort the array
//     sort(arr, arr+size);

//     for(int i=0; i<size; i++) {
//         int cnt = 0;
//         int flag = arr[i];

//         while(i<size && arr[i] == flag) {
//             i++;
//             cnt++;
//         }
//         i--;

//         count.push_back (cnt);
//     }

//     sort(count.begin(), count.end());

//     for(int i=0; i<count.size()-1; i++) {
//         if(count[i] == count[i+1]) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     int size;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     if(uniqueOccurrences(arr, size)) {
//         cout<<"Number of occurrences of each value is the array is unique!"<<endl;
//     } else {
//         cout<<"Number of occurrences of each value is the array is not unique!"<<endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int findDuplicate(int arr[], int size) {
//     int ans = 0;
//     for(int i=0; i<size; i++) {
//         ans = ans ^ arr[i]; 
//     }
//     for(int i=1; i<size; i++) {
//         ans = ans ^ i;
//     }
//     return ans;
// }
// int main() {
//     int size;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }
//     cout<<"Duplicate element in he array : "<<findDuplicate(arr, size)<<endl;
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// using namespace std;

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void findDuplicates(int nums[], int size) {
//     sort(nums, nums+size);

//     for(int i=0; i<size-1; i++) {
//         if(nums[i] == nums[i+1]) {
//             cout<<nums[i]<<" ";
//             i++;
//         }
//     }
// }

// int main() {
//     int size;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }

//     cout<<"All duplicate elements of array : ";
//     findDuplicates(arr, size);

//     return 0;
// }



// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // void inputArray(int arr[], int size) {
// // // // //     for(int i=0; i<size; i++) {
// // // // //         cin>>arr[i];
// // // // //     }
// // // // // }

// // // // // void printArray(int arr[], int size) {
// // // // //     for(int i=0; i<size; i++) {
// // // // //         cout<<arr[i]<<" ";
// // // // //     }
// // // // //     cout<<endl;
// // // // // }

// // // // // void intersectionArray(int arr1[], int arr2[], int size1, int size2) {
// // // // //     int i=0, j=0;

// // // // //     while(i<size1 && j<size2) {
// // // // //         if(arr1[i] < arr2[j]) {
// // // // //             i++;
// // // // //         }

// // // // //         if(arr1[i] > arr2[j]) {
// // // // //             j++;
// // // // //         }

// // // // //         if(arr1[i] == arr2[j]) {
// // // // //             cout<<arr1[i]<<" ";
            
// // // // //             while(arr1[i] == arr2[j]) {
// // // // //                 i++;
// // // // //                 j++;
// // // // //             }
// // // // //         }
// // // // //     }
// // // // // }

// // // // // int main() {
// // // // //     int size1, size2;
// // // // //     int arr1[100], arr2[100];

// // // // //     cout<<"Enter the size of first array : ";
// // // // //     cin>>size1;

// // // // //     cout<<"Enter the elements of first array : ";
// // // // //     inputArray(arr1, size1);

// // // // //     cout<<"Enter the size of second array : ";
// // // // //     cin>>size2;

// // // // //     cout<<"Enter the elements of second array : ";
// // // // //     inputArray(arr2, size2);

// // // // //     cout<<"Intersection elements of these two arrays : ";
// // // // //     intersectionArray(arr1, arr2, size1, size2);

// // // // //     return 0;
// // // // // }



// // // // #include <iostream>
// // // // using namespace std;

// // // // void inputArray(int arr[], int size) {
// // // //     for(int i=0; i<size; i++) {
// // // //         cin>>arr[i];
// // // //     }
// // // // }

// // // // void printArray(int arr[], int size) {
// // // //     for(int i=0; i<size; i++) {
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // //     cout<<endl;
// // // // }

// // // // void pairSum(int arr[], int size, int sum) {
// // // //     for(int i=0; i<size-1; i++) {
// // // //         for(int j=i+1; j<size; j++) {
// // // //             if(arr[i] + arr[j] == sum) {
// // // //                 cout<<"New pair : "<<arr[i]<<" & "<<arr[j]<<endl;
// // // //             }
// // // //         }
// // // //     }
// // // // }

// // // // int main() {
// // // //     int size, targetSum;
// // // //     int arr[100];

// // // //     cout<<"Enter the size of array : ";
// // // //     cin>>size;

// // // //     cout<<"Enter the elements of array : ";
// // // //     inputArray(arr, size);

// // // //     cout<<"Enter the target sum : ";
// // // //     cin>>targetSum;

// // // //     pairSum(arr, size, targetSum);

// // // //     return 0;
// // // // }



// // // #include <iostream>
// // // using namespace std;

// // // void inputArray(int arr[], int size) {
// // //     for(int i=0; i<size; i++) {
// // //         cin>>arr[i];
// // //     }
// // // }

// // // void printArray(int arr[], int size) {
// // //     for(int i=0; i<size; i++) {
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     cout<<endl;
// // // }

// // // void tripletSum(int arr[], int size, int sum) {
// // //     for(int i=0; i<size-2; i++) {
// // //         for(int j=i+1; j<size-1; j++) {

// // //             for(int k=j+1; k<size; k++) {
// // //                 if(arr[i] + arr[j] + arr[k] == sum) {
// // //                     cout<<"New triplet : "<<arr[i]<<", "<<arr[j]<<" & "<<arr[k]<<endl;
// // //                 }
// // //             }

// // //         }
// // //     }
// // // }

// // // int main() {
// // //     int size, targetSum;
// // //     int arr[100];

// // //     cout<<"Enter the size of array : ";
// // //     cin>>size;

// // //     cout<<"Enter the elements of array : ";
// // //     inputArray(arr, size);

// // //     cout<<"Enter the target sum : ";
// // //     cin>>targetSum;

// // //     tripletSum(arr, size, targetSum);

// // //     return 0;
// // // }



// // #include <iostream>
// // using namespace std;

// // void inputArray(int arr[], int size) {
// //     for(int i=0; i<size; i++) {
// //         cin>>arr[i];
// //     }
// // }

// // void printArray(int arr[], int size) {
// //     for(int i=0; i<size; i++) {
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // void sort01(int arr[], int size) {
// //     int start = 0;
// //     int end = size-1;

// //     while(start <= end) {
// //         while(arr[start] == 0 && start <= end) {
// //             start++;
// //         }

// //         while(arr[end] == 1 && start <= end) {
// //             end--;
// //         }

// //         while(arr[start]==1 && arr[end]==0 && start <= end) {
// //             swap(arr[start], arr[end]);
// //             start++;
// //             end--;
// //         }
// //     }
// // }

// // int main() {
// //     int size;
// //     int arr[100];

// //     cout<<"Enter the size of array : ";
// //     cin>>size;

// //     cout<<"Enter the elements of array : ";
// //     inputArray(arr, size);

// //     cout<<"Array before sorting : ";
// //     printArray(arr, size);

// //     sort01(arr, size);

// //     cout<<"Array after sorting : ";
// //     printArray(arr, size);

// //     return 0;
// // }



// #include <iostream>
// using namespace std;

// void inputArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cin>>arr[i];
//     }
// }

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// // DNF (Dutch-National-Flag) Algorithm
// // Red - White - Blue Ball Questions
// // low - mid - high variables (3 pointers)
// void sort012(int arr[], int size) {
//     int low = 0;
//     int mid = 0;
//     int high = size-1;

//     while(mid <= high) {
 
//         switch(arr[mid]) {
//             case 0:
//                 swap(arr[mid++], arr[low++]);
//                 break;
//             case 1:
//                 mid++;
//                 break;
//             case 2:
//                 swap(arr[mid], arr[high--]);
//                 break;
//         }
        
//     }
// }

// int main() {
//     int size;
//     int arr[100];

//     cout<<"Enter the size of array : ";
//     cin>>size;

//     cout<<"Enter the elements of array : ";
//     inputArray(arr, size);

//     cout<<"Array before sorting : ";
//     printArray(arr, size);

//     sort012(arr, size);

//     cout<<"Array after sorting : ";
//     printArray(arr, size);

//     return 0;
// }



