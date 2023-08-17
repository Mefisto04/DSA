// #include <iostream>
// using namespace std;

// int firstPosition(int arr[], int size, int key) {
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     int ans = -1;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             ans = mid;
//             end = mid - 1;
//         } else if(key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return ans;
// }

// int lastPosition(int arr[], int size, int key) {
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     int ans = -1;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             ans = mid;
//             start = mid + 1;
//         } else if(key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return ans;
// }

// int main() {
//     int n, element;
//     int arr[100];

//     cout<<"Enter the size of the array : ";
//     cin>>n;

//     cout<<"Enter the elements of tha array : ";
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Enter the element to search for : ";
//     cin>>element;
    
//     int first = firstPosition(arr, n, element);
//     int last = lastPosition(arr, n, element);

//     cout<<"First position : "<<first<<endl;
//     cout<<"Last position : "<<last<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int firstPosition(int arr[], int size, int key) {
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     int ans = -1;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             ans = mid;
//             end = mid - 1;
//         } else if(key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return ans;
// }

// int lastPosition(int arr[], int size, int key) {
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     int ans = -1;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             ans = mid;
//             start = mid + 1;
//         } else if(key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return ans;
// }

// int main() {
//     int n, element;
//     int arr[100];

//     cout<<"Enter the size of the array : ";
//     cin>>n;

//     cout<<"Enter the elements of tha array : ";
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     cout<<"Enter the element to search for : ";
//     cin>>element;
    
//     int first = firstPosition(arr, n, element);
//     int last = lastPosition(arr, n, element);
//     int totOcc;

//     if(first == -1 || last == -1) {
//         totOcc = 0;
//     } else {
//         totOcc = last - first + 1;
//     }

//     cout<<"Total number of occurrences : "<<totOcc<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int peakIndex(int arr[], int size) {
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;

//     while(start < end) {
//         if(arr[mid] < arr[mid+1]) {
//             start = mid + 1;
//         } else {
//             end = mid;
//         }

//         mid = start + (end-start)/2;
//     }

//     return start;
// }

// int main() {
//     int n, element;
//     int arr[100];

//     cout<<"Enter the size of the array : ";
//     cin>>n;

//     cout<<"Enter the elements of tha array : ";
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     int peak = peakIndex(arr, n);

//     cout<<"Peak element of the array : "<<peak;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int pivotElement(int arr[], int size) {
//     int sum[100] = {0};

//     for(int i=0; i<size; i++) {
//         sum[i+1] = sum[i] + arr[i];
//     }

//     for(int i=0; i<size; i++) {
//         int left = sum[i];
//         int right = sum[size] - sum[i+1];

//         if(left == right) {
//             return arr[i];
//         }
//     }

//     return -1;
// }

// int main() {
//     int n, element;
//     int arr[100];

//     cout<<"Enter the size of the array : ";
//     cin>>n;

//     cout<<"Enter the elements of tha array : ";
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     int pivot = pivotElement(arr, n);

//     cout<<"Pivot element of the array : "<<pivot;

//     return 0;
// }