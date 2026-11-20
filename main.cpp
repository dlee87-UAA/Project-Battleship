#include <iostream>
using namespace std;

int main() {
   const int SIZE10 = 10;
   
   int grid[SIZE10][SIZE10]; //create 10 by 10 grid

// label the columns and print
for (int column = 1; column < 11; ++column) {
        cout << "  " << column; // spaces column numbers
    }
    cout << "\n  +" << std::string(30, '-') << "\n"; // makes line over grid


return 0;    
}