// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n) {
//     if(n <= 1) {
//         return false;
//     }

//     for(int i=2; i<=n/2; i++) {
//         if(n%i == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     int num;

//     cout << "Enter the number : ";
//     cin >> num;

//     if(isPrime(num)) {
//         cout << "Prime!" << endl;
//     } else {
//         cout << "Not Prime!" << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// // Sieve of Eratosthenes
// int countPrime(int n) {
//     int count = 0;
//     vector<bool> prime(n+1, true);
//     prime[0] = prime[1] = false;

//     for(int i=2; i<n; i++) {
//         if(prime[i]) {
//             count++;

//             for(int j=2*i; j<n; j+=i) {
//                 prime[j] = false;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int num;

//     cout << "Enter the number : ";
//     cin >> num;

//     cout << "Total count of prime numbers from 1 to num : " << countPrime(num) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// // Euclid's Algorithm
// // gcd(a,b) = gcd(a-b,b)
// // gcd(a,b) = gcd(a%b,b)
// /*
// int gcd(int n1, int n2) {
//     int a=n1, b=n2;
//     if(n1<n2) {
//         swap(a, b);
//     }

//     while(a && b) {
//         a %= b;
//         swap(a, b);
//     }

//     return (a) ? a : b;
// }
// */

// int gcd(int n1, int n2) {
//     if(n1 == 0) {
//         return n2;
//     }

//     if(n2 == 0) {
//         return n1;
//     }

//     while(n1 != n2) {
//         if(n1 > n2) {
//             n1 -= n2;
//         } else {
//             n2 -= n1;
//         }
//     }

//     return n1;
// }

// int main() {
//     int num1, num2;

//     cout << "Enter the numbers : ";
//     cin >> num1 >> num2;

//     cout << "GCD : " << gcd(num1, num2) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int modularExponentiation(int x, int n, int m) {
    
// }

// int main() {
//     int x, n;
//     int m = 1e9+7;

//     cout << "Enter the value of x & n : ";
//     cin >> x >> n;

//     cout << "x^n = " << modularExponentiation(x, n, m) << endl;
//     return 0;
// }



