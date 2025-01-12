// Lab 1 Debrief

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This main function is for the first part of the lab
// int main() {
//     // print a greeting
//     cout <<"Hello World!" << endl;

//     // Declare some variables
//     int x = 10+5;
//     int y =0;
//     y = x;
//     x = 20;

//     // Print out the results
//     cout <<"x = " <<x << ", y = " <<y << endl;
// }

// 1..1 Implicit conversions

// int main() {
//   int a = 10;
//   double b = 3.14;
//   a = b;
//   if (a) { cout << a << endl; }

//   a = a - b;
//   b = 10;
//   cout << a << endl;
//   cout << b << endl;

//   if (a) { cout << a << endl; }

//   cout << "done" << endl;
// }

// 1..2 Functions in C++

// int max(int x, int y) {
//   if (x > y) { return x; }
//   else { return y; }
// }

// int main() {
//   int a = 3;
//   int b = 4;
//   cout << max(a, b) << endl;
// }

// bool equal(int x, int y) {
//   return x == y;
// }

// int main() {
//   int a = 5;
//   int b = 5;
//   if (equal(a, b)) {
//     cout << "they're equal!";
//   }
// }

// int plus_one(int x) {
//   x = x + 1;
//   return x;
// }

// int main() {
//   int a = 3;
//   a = plus_one(a);
//   a = plus_one(a);
//   cout << a << endl;
// }

// void greet(string name) {
//   cout << "Hi " << name << endl;
// }

// int main() {
//   greet("Ashvin");
//   greet("Maria");
//   greet("Wenzhao");
//   return 0;
// }

// int count_if(vector<double> v, double val) {
//     int count = 0;
//     for(int i = 0; i < v.size(); i++) {
//       if(v[i] == val) {
//         count++;
//       }
//     }
//     return count;
//   }

// int main() {
//     vector<double> a = {1.0, 2.0, 3.0, 4.0, 5.0, 3, 3.00};
//     cout << "Count is " << count_if(a, 3.0) << endl;
//     cout << "End";
//     return 0;
// }

