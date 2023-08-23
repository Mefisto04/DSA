#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10] = {23, 122, 41, 67};

    cout << "Address of first memory block is : " << arr << endl;
    cout << "arr[0] : " << arr[0] << endl;
    cout << "Address of first memory block is : " << &arr[0] << endl;

    cout << "Step 4th : " << *arr << endl;
    cout << "Step 5th : " << *arr + 1 << endl;
    cout << "Step 6th : " << *(arr + 1) << endl;
    cout << "Step 7th : " << *(arr) + 1 << endl;
    cout << "Step 8th : " << arr[2] << endl;
    cout << "Step 9th : " << *(arr + 2) << endl;

    int i = 3;
    cout << "i[arr] = " << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << "Size of temp : " << sizeof(temp) << endl;
    cout << "Size of *temp : " << sizeof(*temp) << endl;
    cout << "Size of &temp : " << sizeof(&temp) << endl;

    int *ptr1 = &temp[0];
    cout << "Size of ptr1 : " << sizeof(ptr1) << endl;
    cout << "Size of *ptr1 : " << sizeof(*ptr1) << endl;
    cout << "Size of &ptr1 : " << sizeof(&ptr1) << endl;

    int a[20] = {1, 2, 3, 5};
    cout << "&a[0] : " << &a[0] << endl;
    cout << "&a : " << &a << endl;
    cout << "a : " << a << endl;

    int *p = &a[0];
    cout << "p : " << p << endl;
    cout << "*p : " << *p << endl;
    cout << "&p : " << &p << endl;

    // ERROR
    // arr = arr+1;

    int *ptr2 = &arr[0];
    cout << "Before - ptr2 : " << ptr2 << endl;
    ptr2 = ptr2 + 1;
    cout << "After - ptr2 : " << ptr2 << endl;

    return 0;
}



// #include<iostream>
// using namespace std;

// int main() {

//     int arr[5] = {1,2,3,4,5};
//     char ch[6] = "abcde";


//     cout << "arr : " << arr << endl;
//     cout << "ch : " << ch << endl;
    
//     char *c = &ch[0];
//     // Prints entire string
//     cout << c << endl;

//     char temp = 'z';
//     char *p = &temp;
//     cout << "p : " << p << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl; 
// }

// void update(int *p) {
//    p = p + 1;
//    cout << "Inside function : "<< *p <<endl;
// //    *p = *p + 1;

// }

// int getSum(int *arr, int n) {
//     // cout << "Size : " << sizeof(arr) << endl;

//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main() {
//     int value = 5;
//     int *p = &value;

//     print(p);

//     cout << "Before update : " << *p << endl;
//     update(p);
//     cout <<"After update : " << *p << endl;

//     int arr[6] = {1,2,3,4,5,8};

//     cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

//     return 0;
// }