// half pyramid after 180 degree rotation
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
        for (int j=1;j<=n;j++) { //Columns
            if (j<=n-i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
             
            }
        cout << endl;
    }

    return 0;
}
}