#include <iostream>
#include <cmath>

using namespace std;
int comp(int);

int main()
{
    int a = 0; 
    //check for vaild input
    do
    {
    cout << "Enter  a value between 1 and 1000:" << endl;
    cin >> a;
    if (a <= 1 || a >= 1000)
    {
        cout << "Invalid input." << endl; 

    }
    }
    while (a <= 1 || a >= 1000 );
    cout << a << endl;
    comp(a);
    

}
// does calcualtion and prints values 
int comp(int var )
{
    while (var > 1)
    {
        if (var % 2 == 0)
        {
            var = (var/2) ;
            cout << var << endl; 
        }
        else 
        {
            var = 3 * var +1;
            cout << var << endl;
        }
    }
}