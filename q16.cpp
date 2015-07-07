#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

void getHighScore( string& holdName, int& holdScore );

int main() {

    string name;
    int score;

    getHighScore( name, score );


    cout << "High scored player is " << name
         << " score is " << score << endl;

    return 0;
}
void getHighScore( string& holdName, int& holdScore ) {

    ifstream inputStream;
    inputStream.open( "score.txt" );

    if ( !inputStream.is_open() ) {

        cout << "Error file opening\n";
        exit(0);
    }

    int highScore = -1;
    holdScore = highScore;

    int score;
    string name;
    while ( inputStream >> name ) {


        inputStream >> score;
        if (score > holdScore) {

            holdScore = score;
            holdName = name;
        }
    }

    inputStream.close();
}