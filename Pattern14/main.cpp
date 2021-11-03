// ZigZag/Wave pattern 

// For pattern think of 3 things : rows, columns, element to print
//If spaces are there then also spaces

#include <iostream>

using namespace std;

int main() {
int n;

cout << "Enter n:";
cin>>n; // Basically Rows
 
 // All even positions have stars// postion = row+ Column number
 //Also position are divisbile by 4
 // special case is stars in row 2 and the column number is divisbile by 4
for (int i=1;i<=3;i++) {
    for (int j=1; j<=n;j++) {
        if ((i+j)%4 ==0 || (i==2 && j%4 ==0)) {
            cout << "* ";
        }
        else {
            cout << "  ";
        }
    }
    cout << endl;

    }
    

    return 0;
}