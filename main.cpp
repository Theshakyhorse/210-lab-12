//COMSC-210 | Lab 12 | Alexander Sierra
#include <iostream>
#include <algorithm>
#include <numeric> 
#include <array>
using namespace std;

//number of players on a team is typically constant
const int SIZE = 30;

int main() {
    array<double, SIZE> heights;
    cout << "There are " << SIZE << "people on this team" << endl;
    cout << "please enter the heights for the players" << endl; 
    cout << "For example 6 or 6.0 means the player is 6 feet tall " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "player " << i+1 << endl;
        cin >> heights[i];
    }
    cout << endl << "Outputting details: " << endl;
    if (heights.empty() == 0){
        cout << "Your first input was " << heights.front() << endl;
        cout << "Your last input was " << heights.back() << endl;
    }
    else{}

    return 0;
}