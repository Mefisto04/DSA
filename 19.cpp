// #include <iostream>
// #include <array>
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     array<int, 4> a = {1, 2, 3, 4};

//     int size = a.size();

//     for(int i=0; i<size; i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Size of array = "<<a.size()<<endl;

//     cout<<"Element at second index = "<<a.at(2)<<endl;

//     cout<<"Empty or not = "<<a.empty()<<endl;

//     cout<<"First element = "<<a.front()<<endl;
//     cout<<"Last element = "<<a.back()<<endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);

//     int size = v.size();

//     for(int i=0; i<size; i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Size of vector = "<<v.size()<<endl;
//     cout<<"Capacity of vector = "<<v.capacity()<<endl;

//     cout<<"Element at second index = "<<v.at(2)<<endl;

//     cout<<"Empty or not = "<<v.empty()<<endl;

//     cout<<"First element = "<<v.front()<<endl;
//     cout<<"Last element = "<<v.back()<<endl;


//     cout<<"\nBefore pop operation : ";
//     for(int i:v) {
//         cout<<i<<" ";
//     }

//     v.pop_back();
    
//     cout<<"\nAfter pop operation : ";
//     for(int i:v) {
//         cout<<i<<" ";
//     }

//     cout<<"\n\nBefore clear operation : Size = "<<v.size()<<endl;

//     v.clear();

//     cout<<"After clear operation : Size = "<<v.size()<<endl;

//     vector<int> v1(5, 1);
//     cout<<"\nPrinting new vector : ";
//     for(int i:v1) {
//         cout<<i<<" ";
//     }

//     return 0;
// }



// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     deque<int> d;

//     d.push_back(1);
//     d.push_back(2);

//     d.push_front(3);
//     d.push_front(4);

//     for(int i:d) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     // d.pop_back() ;

//     // for(int i:d) {
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     // d.pop_front();

//     // for(int i:d) {
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     cout<<"Size of deque = "<<d.size()<<endl;

//     cout<<"Element at second index = "<<d.at(2)<<endl;

//     cout<<"First element = "<<d.front()<<endl;
//     cout<<"Last element = "<<d.back()<<endl;

//     cout<<"Empty or not : "<<d.empty()<<endl;

//     d.erase(d.begin(), d.begin()+1);
    
//     for(int i:d) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     list<int> l;

//     l.push_back(1);
//     l.push_back(2);

//     l.push_front(3);
//     l.push_front(4);

//     int size = l.size();

//     for(int i:l) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     l.erase(l.begin());

//     cout<<"After erase operation : ";
//     for(int i:l) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     // l.pop_back() ;

//     // for(int i:l) {
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     // l.pop_front();

//     // for(int i:l) {
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     cout<<"Size of list = "<<l.size()<<endl;

//     // Copying list content
//     list<int> l1(l);

//     cout<<"New list : ";
//     for(int i:l1) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     // Initialising new list
//     list<int> l2(10, 20);

//     cout<<"Newly initialised list : ";
//     for(int i:l2) {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     stack<string> s;

//     s.push("Akash");
//     s.push("Gautam");


//     cout<<"First element : "<<s.top()<<endl;

//     s.pop();

//     cout<<"First element after pop : "<<s.top()<<endl;

//     cout<<"Size of stack : "<<s.size()<<endl;
//     cout<<"Empty or not : "<<s.empty()<<endl;

//     return 0;
// }




// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int> q;
    
//     return 0;
// }



// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> q;
    
//     return 0;
// }



// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> q;
    
//     return 0;
// }



