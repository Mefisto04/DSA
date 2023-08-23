#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int *p1 = &n;
    int **p2 = &p1;

    cout << "n : " << n << endl;
    cout << "&n : " << &n << endl << endl;

    cout << "p1 : " << p1 << endl;
    cout << "&p1 : " << &p1 << endl;
    cout << "*p1 : " << *p1 << endl << endl;

    cout << "p2 : " << p2 << endl;
    cout << "*p2 : " << *p2 << endl;
    cout << "&p2 : " << &p2 << endl;
    cout << "**p2 : " << **p2 << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// void update(int **ptr) {
//     // ptr = ptr + 1;

//     // *ptr = *ptr + 1;

//     **ptr = **ptr + 1;
// }

// int main() {
//     int n = 5;
//     int *p1 = &n;
//     int **p2 = &p1;

//     cout << "Before : \n";
//     cout << "n : " << n << endl;
//     cout << "p1 : " << p1 << endl;
//     cout << "p2 : " << p2 << endl << endl;

//     update(p2);

//     cout << "After : \n";
//     cout << "n : " << n << endl;
//     cout << "p1 : " << p1 << endl;
//     cout << "p2 : " << p2 << endl << endl;

//     return 0;
// }
