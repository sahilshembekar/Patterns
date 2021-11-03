// Inverted pattern
// For pattern think of 3 things : rows, clumns, element to print
#include <iostream>

using namespace std;

int main() {
int n;
int count{1};

cout << "Enter n:";
cin>>n; // Basically Rows
 
for (int i=1;i<=n;i++) {
    for (int j=1;j<=(n+1-i);j++) { 
        cout << j << " ";
        
    }
    cout<< endl;
    }
    

    return 0;
}