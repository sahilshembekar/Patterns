// Triangle pattern?
// For pattern think of 3 things : rows, columns, element to print
//If spaces are there then also spaces
#include <iostream>

using namespace std;

int main() {
int n;

cout << "Enter n:";
cin>>n; // Basically Rows
 
for (int i=1;i<=n;i++) {
    for (int j=1;j<=n-i;j++) { //i represents row no
        cout << " ";
    }
    for (int k=1;k<=i;k++) {
        cout << k << " ";
    }
    cout<< endl;
    }
    

    return 0;
}