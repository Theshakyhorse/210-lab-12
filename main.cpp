//COMSC-210 | Lab 12 | Alexander Sierra
#include <iostream>
#include <algorithm>
#include <numeric> 
#include <array>
using namespace std;

//number of players on a team is constant
const int SIZE = 30;

int main() {
    array<double, SIZE> heights;
    int height;

    cout << "There are " << SIZE << "people on this team" << endl;
    cout << "please enter the heights for the players" << endl; 
    cout << "For example, entering 6 or 6.0 = the player is 6 ft tall" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "player " << i+1 << endl;
        cin >> heights[i];
    }

    cout << endl << "Outputting details: " << endl;
    if (heights.empty() == 0){
        cout << "Your first input was " << heights.front() << endl;
        cout << "Your last input was " << heights.back() << endl;
        cout << "their heights' sorted from least to greatest is ";
        sort(heights.begin(), heights.end());
        for(int i = 0; i < SIZE; i++){
            cout << "player " << i+1 << "'s height: " << heights[i];
        }
        cout << endl;
        cout << "their heights' sorted from greatest to least is ";
        sort(heights.rbegin(), heights.rend());
        for(int i = 0; i < SIZE; i++){
            cout << "player " << i+1 << "'s height: " << heights[i];
        }
        cout << endl;
        cout << "shortest height: " << *min_element(heights.begin(), heights.end()) << endl;
        
    }
    else{
        cout << "you entered nothing" << endl;
    }

    cout << "enter a height: ";
    cin >> height;
    array<double, SIZE>::iterator it;
    it = find(heights.begin(), heights.end(), height);
    if (it != heights.end()){
        cout << "player " << it-heights.begin() << " has the same height" << endl;
    }
    else{
        cout << "no player matches the height of " << *it << " ft" << endl;
    }

    return 0;
}