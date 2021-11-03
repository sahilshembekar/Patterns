  //BROKEN!!!!! repair pending

// Star pattern with stars 

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
    for (int j=1;j<=n-i;j++) { //i represents row no
        cout << "  ";
    }
    for (int j=1;j<=2*i-1;j++) {
        cout <<"*";
    }
    cout<< endl;
    }
    
for (int i=n;i>=1;i--) {
    for (int j=1;j<=n-i;j++) { //i represents row no
        cout << "  ";
    }
    for (int j=1;j<=2*i-1;j++) {
        cout <<"*";
    }
    
    cout<< endl;
    }
    

    return 0;
}
