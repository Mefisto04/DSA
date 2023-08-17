// #include <iostream>
// #include <limits.h>
// using namespace std;

// int reverse(int x) {
//     int ans = 0;

//     while(x != 0) {
//         if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
//             return 0;
//         }

//         int digit = x%10;

//         ans = (ans*10) + digit;

//         x /= 10;
//     }

//     return ans;
// }

// int main() {
//     int n;

//     cout<<"Enter the number to reverse : ";
//     cin>>n;

//     int rev = reverse(n);

//     cout<<"Reversed number = "<<rev<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int bitwiseComplement(int n) {
//     int m = n;
//     int mask = 0;

//     // Edge case
//     if(n == 0) {
//         return 1;
//     }

//     while(m != 0) {
//         mask = (mask << 1) | 1;
//         m = m >> 1;
//     }

//     int ans = (~n) & mask;

//     return ans;
// }

// int main() {
//     int n;

//     cout<<"Enter the number : ";
//     cin>>n;

//     int complement = bitwiseComplement(n);

//     cout<<"Required bitwise complement = "<<complement<<endl;

//     return 0;
// }


// #include <iostream>
// #include <limits.h>
// using namespace std;

// bool isPowerOfTwo(int n) {
//     int power = 1;

//     for(int i=0; i<31; i++) {
//         if(power == n) {
//             return true;
//         }

//         if(power < INT_MAX/2) {
//             power *= 2;
//         }
//     }

//     return false;
// }

// int main() {
//     int n;

//     cout<<"Enter the number : ";
//     cin>>n;

//     if(isPowerOfTwo(n)) {
//         cout<<n<<" is a power of two!"<<endl;
//     } else {
//         cout<<n<<" is not a power of two!"<<endl;
//     }

//     return 0;
// }

