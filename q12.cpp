#include <iostream>
#include <ctime>

using namespace std;

void aaronShoots( bool& target );
//Randomly choose between 0,1, or 2. If !=1, missed shot.

void bobShoots( bool& target );
//Randomly choose between 0 or 1. If ==0, missed shot.

void charlieShoots( bool& target );
//Charlie is Deadshot.

int main()
{
    srand( time(NULL) );
    
    int aaronWin = 0, bobWin = 0, charlieWin = 0;
    
    for (int i = 0; i < 10000; i++) {
        
        bool aaronAlive = true, bobAlive = true, charlieAlive = true;//Reset alive for loop
        
        while ((aaronAlive && bobAlive) || (aaronAlive && charlieAlive) || (bobAlive && charlieAlive)) {
            
            if (charlieAlive) {
            //Aaron always targets Charlie if he is alive
            
                aaronShoots(charlieAlive);
                if (!(bobAlive || charlieAlive)) {
                    
                    aaronWin++;
                }
            }
            
            else {    //Aaron targets Bob if Charlie is dead

                aaronShoots(bobAlive);
                if (!(bobAlive || charlieAlive)) {
                    aaronWin++;
                }
            }
            
            if (bobAlive && charlieAlive)
            {
                bobShoots(charlieAlive);
                //Bob always targets Charlie if he is alive
                if (charlieAlive) {
                    charlieShoots(bobAlive);//Charlie targets Bob since he has better aim than Aaron
                }
            }
            
            else if (!bobAlive && !charlieAlive) {
                
            }
            
            else if (!bobAlive && aaronAlive) {
                
                charlieShoots(aaronAlive);
                charlieWin++;
            }
            
            else {
                
                bobShoots(aaronAlive);
                if (!aaronAlive)
                    bobWin++;
            }
        }
    }
    cout << "Aaron's wins: " << aaronWin << ".\n";
    cout << "Bob's wins: " << bobWin << ".\n";
    cout << "Charlie's wins: " << charlieWin << ".\n";
    
    return 0;
}


void aaronShoots( bool& target ) {
    
    int shot = (rand() % 3);
    if (shot == 1) {
        
        target = false;
    }
    
}

void bobShoots( bool& target ) {
    
    int shot = (rand() % 2);
    if (shot == 1) {
        
        target = false;
    }
}

void charlieShoots( bool& target ) {
    
    target = false;
}