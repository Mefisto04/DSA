// #include <bits/stdc++.h>
// using namespace std;

// int main() {


//     // Create 2D-Array
//     int arr[3][4];

//     // Taking Input row wise
//     cout << "Enter the elements : ";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cin >> arr[row][col];
//         }
//     }

//     // Printing 2D-Array
//     cout << "Row-wise Elements : \n";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     // Taking Input column wise
//     cout << "\nEnter the elements : ";
//     for(int col=0; col<4; col++) {
//         for(int row=0; row<3; row++) {
//             cin >> arr[row][col];
//         }
//     }

//     // Printing 2D-Array
//     cout << "Column-wise Elements : \n";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     cout << "arr1 Elements : \n";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cout << arr1[row][col] << " ";
//         }
//         cout << endl;
//     }

//     int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     cout << "arr2 Elements : \n";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cout << arr2[row][col] << " ";
//         }
//         cout << endl;
//     }

//     int arr3[3][4] = {0};
//     cout << "arr3 Elements : \n";
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             cout << arr3[row][col] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100

// void input2dArray(int arr[][MAX], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// bool isPresent(int arr[][MAX], int row, int col, int target) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {

//             if(arr[i][j] == target) {
//                 return true;
//             }
        
//         }
//     }

//     return false;
// }

// int main() {
//     int row, col, target;
//     int arr[MAX][MAX];

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : ";
//     input2dArray(arr, row, col);

//     cout << "Enter the target : ";
//     cin >> target;

//     if(isPresent(arr, row, col, target)) {
//         cout << "Element is present!" << endl;
//     } else {
//         cout << "Element is not present!" << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100

// void input2dArray(int arr[][MAX], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// void printRowSum(int arr[][MAX], int row, int col) {
//     for(int i=0; i<row; i++) {
//         int sum = 0;
//         for(int j=0; j<col; j++) {
//             sum += arr[i][j];
//         }
//         cout << "Sum of row" << i+1 << " : " << sum << endl;
//     }
// }

// int main() {
//     int row, col;
//     int arr[MAX][MAX];

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : ";
//     input2dArray(arr, row, col);

//     printRowSum(arr, row, col);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100

// void input2dArray(int arr[][MAX], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// void printColSum(int arr[][MAX], int row, int col) {
//     for(int i=0; i<col; i++) {
//         int sum = 0;
//         for(int j=0; j<row; j++) {
//             sum += arr[j][i];
//         }
//         cout << "Sum of col" << i+1 << " : " << sum << endl;
//     }
// }

// int main() {
//     int row, col;
//     int arr[MAX][MAX];

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : ";
//     input2dArray(arr, row, col);

//     printColSum(arr, row, col);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100

// void input2dArray(int arr[][MAX], int row, int col) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// int largestRowSum(int arr[][MAX], int row, int col) {
//     int maxSum = INT_MIN;

//     for(int i=0; i<row; i++) {
//         int sum = 0;
//         for(int j=0; j<col; j++) {
//             sum += arr[i][j];
//         }
        
//         if(sum > maxSum) {
//             maxSum = sum;
//         }
//     }

//     return maxSum;
// }

// int main() {
//     int row, col;
//     int arr[MAX][MAX];

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : ";
//     input2dArray(arr, row, col);

//     cout << "Largest row sum : " << largestRowSum(arr, row, col) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr) {
//     int row = arr.size();
//     int col = arr[0].size();
//     vector<int> wave;
    
//     for(int i=0; i<col; i++) {
//         if(i&1) {
//             for(int j=row-1; j>=0; j--) {
//                 wave.push_back(arr[j][i]);
//             }
//         } else {
//             for(int j=0; j<row; j++) {
//                 wave.push_back(arr[j][i]);
//             }
//         }
//     }

//     return wave;
// }

// int main() {
//     int row, col;
//     vector<vector<int>> arr;

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : \n";
//     for(int i=0; i<row; i++) {
//         vector<int> temp;
//         for(int j=0; j<col; j++) {    
//             int t;
//             cin >> t;
//             temp.push_back(t);
//         }
//         arr.push_back(temp);
//     }

//     vector<int> wave = wavePrint(arr);

//     cout << "Wave print of array : ";
//     for(int i:wave) {
//         cout << i << " ";
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> spiralPrint(vector<vector<int>> arr) {
//     vector<int> spiral;
//     int row = arr.size();
//     int col = arr[0].size();
    
//     int top=0, bottom=row-1, left=0, right=col-1;
//     int countElements = 0;
//     int totalElements = row * col;

//     while(countElements < totalElements) {
//         // Printing Top Row
//         for(int i=left; i<=right && countElements<totalElements; i++) {
//             spiral.push_back(arr[top][i]);
//             countElements++;
//         }
//         top++;

//         // Printing Right Column
//         for(int i=top; i<=bottom && countElements<totalElements; i++) {
//             spiral.push_back(arr[i][right]);
//             countElements++;
//         }
//         right--;

//         // Printing Bottom Row
//         for(int i=right; i>=left && countElements<totalElements; i--) {
//             spiral.push_back(arr[bottom][i]);
//             countElements++;
//         }
//         bottom--;

//         // Printing Left Column
//         for(int i=bottom; i>=top && countElements<totalElements; i--) {
//             spiral.push_back(arr[i][left]);
//             countElements++;
//         }
//         left++;
//     }

//     return spiral;
// }

// int main() {
//     int row, col;
//     vector<vector<int>> arr;

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : \n";
//     for(int i=0; i<row; i++) {
//         vector<int> temp;
//         for(int j=0; j<col; j++) {    
//             int t;
//             cin >> t;
//             temp.push_back(t);
//         }
//         arr.push_back(temp);
//     }

//     vector<int> spiral = spiralPrint(arr);

//     cout << "Spiral print of array : ";
//     for(int i:spiral) {
//         cout << i << " ";
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void rotateMatrix(vector<vector<int>> &arr) {
//     int row = arr.size();
//     int col = arr[0].size();
//     vector<vector<int>> temp(arr);

//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             temp[j][col-i-1] = arr[i][j];
//         }
//     }

//     arr = temp;
// }

// int main() {
//     int row, col, target;
//     vector<vector<int>> arr;

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : " << endl;
//     for(int i=0; i<row; i++) {
//         vector<int> temp;
//         for(int j=0; j<col; j++) {    
//             int t;
//             cin >> t;
//             temp.push_back(t);
//         }
//         arr.push_back(temp);
//     }

//     cout << endl << "Before Rotate : " << endl;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     rotateMatrix(arr);

//     cout << endl << "After Rotate : " << endl;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool binarySearch(vector<vector<int>> arr, int target) {
//     int row = arr.size();
//     int col = arr[0].size();
//     int start = 0;
//     int end = (row*col) - 1;

//     while(start <= end) {
//         int mid = start + (end-start)/2;
//         int r = mid / col;
//         int c = mid % col;

//         if(arr[r][c] == target) {
//             return true;
//         } else if(arr[r][c] > target) {
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }

//     return false;
// }

// int main() {
//     int row, col, target;
//     vector<vector<int>> arr;

//     cout << "Enter the number of row & col : ";
//     cin >> row >> col;
    
//     cout << "Enter the elements of array : ";
//     for(int i=0; i<row; i++) {
//         vector<int> temp;
//         for(int j=0; j<col; j++) {    
//             int t;
//             cin >> t;
//             temp.push_back(t);
//         }
//         arr.push_back(temp);
//     }

//     cout << "Enter the target : ";
//     cin >> target;

//     if(binarySearch(arr, target)) {
//         cout << "Element is present!" << endl;
//     } else {
//         cout << "Element is not present!" << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int target) {
    int r = 0;
    int c = arr[0].size() - 1;

    while(r<arr.size() && c>=0) {
        if(arr[r][c] == target) {
            return true;
        } 
          else if(arr[r][c] > target) {
              c--;
        }     else {
                r++;
            }
    }
    return false;
}

int main() {
    int row, col, target;
    vector<vector<int>> arr;

    cout << "Enter the number of row & col : ";
    cin >> row >> col;
    
    cout << "Enter the elements of array : ";
    for(int i=0; i<row; i++) {
        vector<int> temp;
        for(int j=0; j<col; j++) {    
            int t;
            cin >> t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }

    cout << "Enter the target : ";
    cin >> target;

    if(binarySearch(arr, target)) {
        cout << "Element is present!" << endl;
    } else {
        cout << "Element is not present!" << endl;
    }

    return 0;
}


