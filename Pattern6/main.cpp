// Floyds Triangle
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
    for (int i=1;i<=n;i++) {   //Rows
        for (int j=1;j<=i;j++) { //Columns
            cout << count <<" ";
            count++;
            }
        cout << endl;
    }

    return 0;
}
}