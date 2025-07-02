#include <iostream> // Includes the iostream library for input/output operations
#include <string>
using namespace std;
int main() {
    cout << "a simple game\n";
    cout << "the best game in the world!!!\n";
    cout << "a TYPING SIMULATOR!!!!\n";
    int points = 0;
    while (true)
    {
        cout << "\n\n\n type ANYTHING \n(remember to find all the letter comboes like abcd)\n\n";
        string anything;
        cin >> anything;
        cout << "you typed: " + anything;
        points = points + 1;
        cout << "\n you have ";
        cout << points;
        cout << " points";
        if (anything == "abcd"){
            cout << "WOW, a whole abcd combo!!!";
            cout << "+10 points";
            points = points + 10;
        }
        else if (anything == "wxyz")
        {
            cout << "WOW, a whole wxyz combo!!!";
            cout << "+10 points";
            points = points + 10;
        }
        else if (anything == "qwertyuiop")
        {
            cout << "WOW, a whole qwertyuiop combo!!!";
            cout << "+30 points";
            points = points + 30;
        }
        else if (anything == "abcd")
        {
            cout << "WOW, a whole abcd combo!!!";
            cout << "+10 points";
            points = points + 10;
        }
        else if (anything == "wasd")
        {
            cout << "\nWOW, a whole wasd combo!!!";
            cout << "+10 points\n";
            points = points + 10;
        }

        
    }
    
    
}