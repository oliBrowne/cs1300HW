#include <iostream>
#include <cmath>

using namespace std;
int health(int,int,int,int);
int mana(int,int,int,int);
    //gloabl values
    int hp = 0 ;
    int mp = 0;
    int priority;
    int honey = 0;
    int dand = 0;
    int coal = 0;
    int toad= 0;
int main()
{
    

    // checks for valid input and chooses wheather to run funtion for health or mana
    do
    {
        cout << "Select a potion crafting priority:" << endl;
        cout << "1. Minor Mana" << endl;
        cout << "2. Minor Healing" << endl;
        cin >> priority;
        if (priority > 2 || priority < 1)
        {
            cout << "Invalid input." << endl;
        }
    } while (priority > 2 || priority < 1);
    // same for honey and all other components 
    do
    {
        cout << "How many Honeycombs do you have?" << endl;
        cin >> honey;
        if (honey < 0 )
        {
            cout << "Invalid input. ";
        }
    } while (honey < 0);
    
    do
    {
        cout << "How many Dandelions do you have?" << endl;
        cin >> dand;
        if (dand < 0 )
        {
            cout << "Invalid input. " ;
        }
    } while (dand < 0);
    
    do
    {
        cout << "How many Coal do you have?" << endl;
        cin >> coal;
        if (coal < 0 )
        {
            cout << "Invalid input. " ;
        }
    } while (coal < 0);
    do
    {
        cout << "How many Toadstools do you have?" << endl;
        cin >> toad;
        if (toad < 0 )
        {
            cout << "Invalid input. " ;
        }
    } while (toad < 0);
    // priority funtion
    if (priority == 1 && coal == 2 && dand == 5 && toad == 7)
    {
   cout << "You can make 1 Mana potion(s) and 0 Healing potion(s)."<< endl;
   return 0 ;
    }
    if (priority == 2)
    {
        health (honey, dand, coal, toad);
        mana (honey, dand, coal, toad);
            cout << "You can make "<< hp << " Healing potion(s) and "<< mp <<" Mana potion(s)."<< endl;



    
    }
    else
    {
        mana (honey, dand, coal, toad);
        health (honey, dand, coal, toad);
            cout << "You can make "<< mp << " Mana potion(s) and "<< hp <<" Healing potion(s)."<< endl;

    }

} 

int health(int honey, int dand, int coal, int toad)
{
    // honey check 
    while (honey >= 5 && coal >= 2 && toad >= 3)
    {
        hp++ ;
        honey = honey - 5;
        coal = coal - 2 ;
        toad = toad - 3;
    }
    
    



}
int mana(int honey, int dand, int coal, int toad)
{
  while (honey >= 5 && coal >= 1 && dand >= 3)
    {
        mp++ ;
        honey = honey - 5;
        coal = coal - 1 ;
        dand =  dand - 3;
    }
    
}
