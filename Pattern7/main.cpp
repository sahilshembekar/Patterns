// Butterfly Pattern
#include <iostream>

using namespace std;

int main() {
int n;
int count{1};

cout << "Enter n:";
cin>>n; // Basically Rows
 
//  cout << "Enter No of Columns:";
//  cin>>Columns;
{
    for (int i=1;i<=n;i++) {  
        for (int j=1;j<=i;j++) { 
        cout <<"*";
        }
        // Formula for spaces = 2*n - 2*row no
        int space = 2*n-2*i;
        for (int k=1; k<=space; k++) {
          cout << " ";  
        }
        for (int j=1;j<=i;j++) { 
        cout <<"*";
        }
        cout << endl;
    }
    //Mirror image pattern n to 1
    for (int i=n;i>=1;i--) {  
        for (int j=1;j<=i;j++) { 
        cout <<"*";
        }
        // Formula for spaces = 2*n - 2*row no
        int space = 2*n-2*i;
        for (int k=1; k<=space; k++) {
          cout << " ";  
        }
        for (int j=1;j<=i;j++) { 
        cout <<"*";
        }
        cout << endl;
    }
    

    return 0;
}
}