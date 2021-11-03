// Palindromic pattern

// For pattern think of 3 things : rows, columns, element to print
//If spaces are there then also spaces
//Numbers in decresaing order
//Then, number is increasing order
#include <iostream>

using namespace std;

int main() {
int n;

cout << "Enter n:";
cin>>n; // Basically Rows
 
for (int i=1;i<=n;i++) {
    int j; // To be used later
    for ( j=1;j<=n-i;j++) { //i represents row no
        cout << "  ";
    }
    int k=i; // i represents row no
    for (;j<=n;j++) { // Continue from previous stop, hence we do not initiailise again
        cout << k-- << " "; // Print in decreasing order starting from highest i.e. row number
    }
    k=2;
    for (;j<=n+i-1;j++) {
        cout <<k++ << " "; // Print in increasing order starting from 2, since 1 laready printed before
    }
    cout<< endl;
    }
    

    return 0;
}