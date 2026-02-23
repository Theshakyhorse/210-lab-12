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
    cout << "please enter the heights for the players: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cin >> heights[i];
    }
    return 0;
}