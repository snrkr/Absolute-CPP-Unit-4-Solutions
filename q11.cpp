// Prize game
#include <iostream>
#include <ctime>
using namespace std;

int printResult( int prize, int choice );
int playGame();

int main()
{
    srand( time(NULL) );
    
    int count = 0;
    int winCount = 0;
    int result = 0;
    
    double percentageWon;
    
    while (count < 10000) {
        
        result = playGame();
        if (result == 1) {
            winCount++;
        }
        count++;
    }
    
    percentageWon = winCount / static_cast<double>(count);
    cout << "Total Plays: " << count << endl;
    cout << "Total Wins: " << winCount << endl;
    cout << "% Win: " << ( percentageWon * 100 ) << endl;

    return 0;
}

int printResult(int prize, int choice)
{
    
    if (choice == 1){
        if (prize != 2){
            cout << "I reveal door 2 to contain detergent." << endl;
        }else{
            cout << "I reveal door 3 to contain detergent." << endl;
        }
    }
    if (choice == 2){
        if (prize != 1){
            cout << "I reveal door 1 to contain detergent." << endl;
        }else{
            cout << "I reveal door 3 to contain detergent." << endl;
        }
    }
    if (choice == 3){
        if (prize != 1){
            cout << "I reveal door 1 to contain detergent." << endl;
        }else{
            cout << "I reveal door 2 to contain detergent." << endl;
        }
    }
    if (choice == prize){
        cout << "You win the car!" << endl;
        return 1;
    }
    //If not already a winner, select another random door as user might have better chance of winning if he gets another door to select
    int newChoice;
    while(true){
        //select new door
        newChoice=rand() % 3 + 1;
        //Make sure its not same door as previous selected door
        if(newChoice!=choice){
            break;
        }
        //cout << "Which door now? Please choose a door: 1, 2 or 3." << endl;
        //cin>>choice;
    }
    if (choice == prize){
        cout << "You win the car!" << endl;
        return 1;
    }else{
        cout <<  "Sorry, you win detergent." << endl;
    }
    return 0;
}

int playGame()
{
    int prizeDoor = rand() % 3 + 1;
    int choice;
    //cout << "Please choose a door: 1, 2 or 3." << endl;
    //Randomly select a door for user
    choice=rand() % 3 + 1;
    //cin>>choice;
    //cout << "You choose DOOR #" << choice << endl;
    int result = printResult(prizeDoor,choice);
    return result;
}
