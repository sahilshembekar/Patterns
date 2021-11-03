 
// inverted half pyramid
#include <iostream>

using namespace std;

int main() {
int n ;

cout << "Enter n:";
cin>>n;
 
//  cout << "Enter No of Columns:";
//  cin>>Columns;
{
    for (int i=n;i>=1;i--) {   //Rows
        for (int j=1;j<=i;j++) { //Columns
            cout << "*"; 
            }
        cout << endl;
    }

    return 0;
}
}