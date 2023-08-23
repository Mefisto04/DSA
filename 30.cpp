#include <bits/stdc++.h>
using namespace std;

#define PI 3.14

int main() {
    int radius = 5;
    // double PI = 3.14;

    double area = PI * radius * radius;
    cout << "Area is : " << area << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int a = 100;

// void func1() {
//     cout << "In func1 - a : " << a << endl;
// }

// void func2() {
//     cout << "In func2 - a : " << a << endl;
// }

// int main() {
    
//     cout << "In main  - a : " << a << endl;

//     func1();
//     func2();

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// inline int getMax(int a, int b) {return (a>b) ? a : b;}

// int main() {
//     int a, b;

//     cout << "Enter the value of a & b : ";
//     cin >> a >> b;

//     cout << "Maximum number : " << getMax(a, b) << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int size, int start = 0) {
//     for(int i = start; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[5] = {4, 6, 2, 6, 9};

//     cout << "Array from index 1 : ";
//     printArray(arr, 5, 1);

//     cout << "Whole array : ";
//     printArray(arr, 5);

//     return 0;
// }