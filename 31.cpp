#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // Base case
    if(n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Factorial of " << num << " : " << factorial(num) << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int power(int num, int pow) {
//     // Base case
//     if(pow == 0) {
//         return 1;
//     }

//     return num * power(num, pow-1);
// }

// int main() {
//     int num, pow;

//     cout << "Enter the number and its power : ";
//     cin >> num >> pow;

//     cout << num << "^" << pow << " : " << power(num, pow) << endl;
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void headCounting(int num) {
//     // Base case
//     if(num == 0) {
//         return;
//     }

//     // Recursive relation
//     headCounting(num-1);

//     // Processing
//     cout << num << " ";
// }

// void tailCounting(int num) {
//     // Base case
//     if(num == 0) {
//         return;
//     }

//     // Processing
//     cout << num << " ";

//     // Recursive relation
//     tailCounting(num-1);
// }

// int fib(int num) {
//     if(num <= 2) {
//         return num-1;
//     }

//     int ans = fib(num-1) + fib(num-2);
//     cout << ans << " ";

//     return ans;
// }

// int main() {
//     int num;

//     cout << "Enter the number : ";
//     cin >> num;

//     cout << "Head Counting : ";
//     headCounting(num);
//     cout << endl;

//     cout << "Tail Counting : ";
//     tailCounting(num);
//     cout << endl;

//     return 0;
// }