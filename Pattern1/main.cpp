#include <iostream>

using namespace std;

int main() {
int rows ;
int Columns;

cout << "Enter No of Rows:";
cin>>rows;
 
 cout << "Enter No of Columns:";
 cin>>Columns;
{
    for (int i=1;i<=rows;i++) {   //Rows
        for (int j=1;j<=Columns;j++) { //Columns
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
}