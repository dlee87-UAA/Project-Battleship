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
//how about this?
#include <iostream>
using namespace std;

int main()
{
    int array[10][10];
    int x = 0;

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            array[row][col] = row + col;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        x++;

        if ((i + 1) < 11)
        {
            cout << "A" << x << "\t";
        }

        if ((i + 1) % 10 == 0)
        {
            cout << endl;
            x = 1;
            cout << endl;
        }


        if ((i + 1) > 9 && (i + 1) < 20)
        {
            cout << "B" << x << "\t";
        }


        if ((i + 1) > 19 && (i + 1) < 30)
        {
            cout << "C" << x << "\t";
        }

        if ((i + 1) > 29 && (i + 1) < 40)
        {
            cout << "D" << x << "\t";
        }

        if ((i + 1) > 39 && (i + 1) < 50)
        {
            cout << "E" << x << "\t";
        }

        if ((i + 1) > 49 && (i + 1) < 60)
        {
            cout << "F" << x << "\t";
        }

        if ((i + 1) > 59 && (i + 1) < 70)
        {
            cout << "G" << x << "\t";
        }

        if ((i + 1) > 69 && (i + 1) < 80)
        {
            cout << "H" << x << "\t";
        }

        if ((i + 1) > 79 && (i + 1) < 90)
        {
            cout << "I" << x << "\t";
        }

        if ((i + 1) > 89 && (i + 1) < 100)
        {
            cout << "J" << x << "\t";
        }


    }

    return 0;
}


