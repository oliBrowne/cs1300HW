#include <iostream>
#include <cmath>
#include <string>
 using namespace std;

 int main()
{
    int height;
    int i = 0; 
    int row = 1; 
    char start = 'a'; 
    cout << "Enter the height:" << endl;
    cin >> height;
    if (height < 1)
    {
        cout << "Invalid input." << endl;
        return 0; 
    }
    // number of rows
    for ( i = 1 ; i<= height ; i++)
    {
        // each individual row 
        for ( row = 1 ; row <= 2 * i - 1; row++ )
        {
            cout << start;
            if(start == 'z')
            {
                start = 'a';
            }
            else 
            start++;
        }
        cout << endl;
    }


}

