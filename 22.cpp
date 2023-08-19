// #include <iostream>
// using namespace std;

// int main() {
//     char name[50];
    
//     cout<<"Enter string : ";
//     // cin>>name;
//     getline(cin, name);

//     cout<<"Entered string : "<<name<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char name[50];
    
//     cout<<"Enter string : ";
//     cin>>name;

//     int n = 10;
//     int s = 0;
//     int e = n-1;

//     while(s<=e) {
//         if(name[s] != name[e]) {
//             cout<<"NO";
//             break;
//         }
//         s++;
//         e--;
//     }

//     cout<<"YES";

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool isSymbol(char ch) {
//     if((ch>='0' && ch<='9') || (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//         return false;
//     } else {
//         return true;
//     }
// }

// bool isPalindrome(string str) {
//     int start = 0;
//     int end = str.length() - 1;

//     while(start < end) {
//         while(start < end && isSymbol(str[start])) {
//             start++;
//         }

//         while(start < end && isSymbol(str[end])) {
//             end--;
//         }

//         if(tolower(str[start]) != tolower(str[end])) {
//             return false;
//         }

//         start++;
//         end--;
//     }

//     return true;
// }

// int main() {
//     string str;
    
//     cout<<"Enter string : ";
//     cin>>str;

//     if(isPalindrome(str)) {
//         cout<<"Palindrome String!\n";
//     } else {
//         cout<<"Non-palindrome string!\n";
//     }

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool isSymbol(char ch) {
//     if((ch>='0' && ch<='9') || (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//         return false;
//     } else {
//         return true;
//     }
// }

// bool isPalindrome(string str) {
//     int start = 0;
//     int end = str.length() - 1;

//     while(start < end) {
//         while(start < end && isSymbol(str[start])) {
//             start++;
//         }

//         while(start < end && isSymbol(str[end])) {
//             end--;
//         }

//         if(tolower(str[start]) != tolower(str[end])) {
//             return false;
//         }

//         start++;
//         end--;
//     }

//     return true;
// }

// int main() {
//     string str;
    
//     cout<<"Enter string : ";
//     cin>>str;

//     if(isPalindrome(str)) {
//         cout<<"Palindrome String!\n";
//     } else {
//         cout<<"Non-palindrome string!\n";
//     }

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool isSymbol(char ch) {
//     if((ch>='0' && ch<='9') || (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//         return false;
//     } else {
//         return true;
//     }
// }

// char getMaxOccurrence(string str) {
//     int count[26] = {0};
//     int maxIndex = 0;

//     for(int i=0; i<str.length(); i++) {
//         tolower(str[i]);
//         int index = str[i] - 'a';
//         count[index]++;
//     }

//     for(int i=0; i<26; i++) {
//         if(count[i] > count[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     char answer = maxIndex + 'a';
//     return answer;
// }

// int main() {
//     string str;
    
//     cout<<"Enter string : ";
//     cin>>str;

//     cout << "Most occurred character : " << getMaxOccurrence(str);

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool isSymbol(char ch) {
//     if((ch>='0' && ch<='9') || (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//         return false;
//     } else {
//         return true;
//     }
// }

// char getMaxOccurrence(string str) {
//     int count[26] = {0};
//     int maxIndex = 0;

//     for(int i=0; i<str.length(); i++) {
//         tolower(str[i]);
//         int index = str[i] - 'a';
//         count[index]++;
//     }

//     for(int i=0; i<26; i++) {
//         if(count[i] > count[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     char answer = maxIndex + 'a';
//     return answer;
// }

// int main() {
//     string str;
    
//     cout<<"Enter string : ";
//     cin>>str;

//     cout << "Most occurred character : " << getMaxOccurrence(str);

//     return 0;
// }



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// string replaceSpaces(string str) {
//     string ans = "";

//     for(int i=0; i<str.length(); i++) {
//         if(str[i] == ' '){
//             ans.push_back('@');
//             ans.push_back('4');
//             ans.push_back('0');
//         } else {
//             ans.push_back(str[i]);
//         }
//     }

//     return ans;
// }

// int main() {
//     string str;

//     cout<<"Enter the string : ";
//     getline(cin, str);

//     cout<<"String after replacing spaces : "<<replaceSpaces(str);

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool isSymbol(char ch) {
//     if((ch>='0' && ch<='9') || (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//         return false;
//     } else {
//         return true;
//     }
// }

// char getMaxOccurrence(string str) {
//     int count[26] = {0};
//     int maxIndex = 0;

//     for(int i=0; i<str.length(); i++) {
//         tolower(str[i]);
//         int index = str[i] - 'a';
//         count[index]++;
//     }

//     for(int i=0; i<26; i++) {
//         if(count[i] > count[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     char answer = maxIndex + 'a';
//     return answer;
// }

// int main() {
//     string str;
    
//     cout<<"Enter string : ";
//     cin>>str;

//     cout << "Most occurred character : " << getMaxOccurrence(str);

//     return 0;
// }



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// string replaceSpaces(string str) {
//     string ans = "";

//     for(int i=0; i<str.length(); i++) {
//         if(str[i] == ' '){
//             ans.push_back('@');
//             ans.push_back('4');
//             ans.push_back('0');
//         } else {
//             ans.push_back(str[i]);
//         }
//     }

//     return ans;
// }

// int main() {
//     string str;

//     cout<<"Enter the string : ";
//     getline(cin, str);

//     cout<<"String after replacing spaces : "<<replaceSpaces(str);

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// void removeOccurrences(string &s, string part) {

//     while(s.length()!=0 && s.find(part) < s.length()) {
//         s.erase(s.find(part), part.length());
//     }

// }

// int main() {
//     string str, part;

//     cout<<"Enter the string : ";
//     cin>>str;

//     cout<<"Enter the target substring : ";
//     cin>>part;

//     removeOccurrences(str, part);

//     cout<<"string after removeing all occurrences : "<<str;

//     return 0; 
// }



// #include <iostream>
// #include <string>
// using namespace std;

// bool checkInclusion(string s1, string s2) {
//     int count[26] = {0};

//     for(int i=0; i<s1.length(); i++) {
//         int index = s1[i] - 'a';
//         count[index]++;
//     }
// }

// int main() {
//     string str1, str2;

//     cout<<"Enter the first string : ";
//     cin>>str1;

//     cout<<"Enter the second string : ";
//     cin>>str2;

//     if(checkInclusion(str1, str2)) {
//         cout<<"Permutation is present!";
//     } else {
//         cout<<"Permutation is not present";
//     }

//     return 0; 
// }



// #include <iostream>
// #include <string>
// using namespace std;

// string removeDuplicates(string s) {
//     string::iterator it = s.begin();

//     for(int i=0; i<s.length()-1; i++) {
//         if(s[i] == s[i+1]) {
//             s.erase(it, 2);
//             i -= 2;
//         }
//     }
// }

// int main() {
//     string str;

//     cout<<"Enter the string : ";
//     cin>>str;

//     str = removeDuplicates(str);

//     cout<<"String after removing all duplicates : "<<str;

//     return 0; 
// }



// #include <iostream>
// #include <string>
// using namespace std;

// string stringCompression(string s) {
//     string ans = "";

//     for(int i=0; i<s.length(); i++) {
//         int count = 0;
//         char temp = s[i];

//         while(i<s.length() && s[i]==temp) {
//             i++;
//             count++;
//         }
//         i--;

//         ans.push_back(temp);
//         if(count > 1) {
//             char ch = count + '0';
//             ans.push_back(ch);
//         }
//     }

//     return ans;
// }

// int main() {
//     string str;

//     cout<<"Enter the string : ";
//     getline(cin, str);

//     string ans = stringCompression(str);

//     cout<<"Compressed string : "<<ans;

//     return 0; 
// }



