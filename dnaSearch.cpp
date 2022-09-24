#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main ()
{
    string dna;
    string seg;
    int order = 0 , i = 0 ;

    cout << "Enter the DNA Sequence:" << endl;
    cin >> dna ;


    for (int i = 0; i < dna.length() ; i++ )
    {
        if ( dna[i] == 'A' || dna[i] == 'C' || dna[i] == 'G' || dna[i] == 'T')
        {}
        else
        {
            cout << "This is not a valid DNA sequence." << endl; 
            return 0;
        }
    }

  cout << "Enter the DNA fragment to be searched:" << endl;
    cin >> seg;   
    for ( int i = 0; i < seg.length() ;i++ )
    {
        if ( seg[i] == 'A' || seg[i] == 'C' || seg[i] == 'G' || seg[i] == 'T')
        {}
        else
        {
            cout << "This is not a valid DNA sequence" << endl; 
            return 0;
        }

    }

for (int i = 0; i < dna.length() ; i++){

    int leng = seg.length();
    if(dna.substr(i, leng) == seg.substr(0,leng))
    {
    order++; 
    }


}
cout << "Number of occurrences: " << order << endl;
}


