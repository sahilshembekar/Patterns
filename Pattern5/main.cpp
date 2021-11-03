// half pyramid using numbers
#include <iostream>

using namespace std;

int main() {
int n ;

cout << "Enter n:";
cin>>n;
 
//  cout << "Enter No of Columns:";
//  cin>>Columns;
{
    for (int i=1;i<=n;i++) {   //Rows
        for (int j=1;j<=i;j++) { //Columns
            cout << i;
            }
        cout << endl;
    }

    return 0;
}
}