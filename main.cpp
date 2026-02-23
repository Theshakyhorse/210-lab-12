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
    //reads data to get player heights
    for(int i = 0; i < SIZE; i++) {
        cout << "player " << i+1 << endl;
        cin >> heights[i];
    }

    cout << endl << "Outputting details: " << endl;
    //checks if heights were entered otherwise just state that nothing was entered
    if (heights.empty() == 0){
        cout << "The first player's height was " << heights.front() << endl;
        cout << "The last player's height was " << heights.back() << endl;
        cout << "their heights' sorted from least to greatest is ";
        //sorts data from least to greatest then outputs
        sort(heights.begin(), heights.end());
        for(int i = 0; i < SIZE; i++){
            cout << "player " << i+1 << "'s height: " << heights[i];
        }
        cout << endl;

        cout << "their heights' sorted from greatest to least is ";
        //sorts data from greatest to least then outputs
        sort(heights.rbegin(), heights.rend());
        for(int i = 0; i < SIZE; i++){
            cout << "player " << i+1 << "'s height: " << heights[i];
        }
        cout << endl;
        //extremes
        cout << "shortest height: " << *min_element(heights.begin(), heights.end()) << endl;
        cout << "tallest height: " << *max_element(heights.begin(), heights.end()) << endl;

    }
    else{
        cout << "No player heights have been entered" << endl;
    }

    //code to find a certain height gotten from user input
    cout << "enter a height: ";
    cin >> height;
    array<double, SIZE>::iterator it;
    it = find(heights.begin(), heights.end(), height);
    if (it != heights.end()){
        cout << "player " << it-heights.begin() << " has the same height" << endl;
    }
    else{
        cout << "no player matches the height of " << *it << endl;
    }

    return 0;
}