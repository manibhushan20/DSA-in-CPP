#include<iostream>
#include<vector>
using namespace std;

class player {
public:
    string name;  // Use string for names
    int age;
    int noOfTestMatches;
    int AvgScore;
    int jerseyNo;
};

int main() {
    int n;
    cout << "Enter the number of Players:";
    cin >> n;

    vector<player> Cricketers;

    for (int i = 0; i < n; i++) {
        player newPlayer;  // create a new player object
        cout << "Enter details for Player " << i + 1 << ":" << endl;
        
        cout << "Name: ";
        cin >> newPlayer.name;

        cout << "Age: ";
        cin >> newPlayer.age;

        cout << "Number of Test Matches: ";
        cin >> newPlayer.noOfTestMatches;

        cout << "Average Score: ";
        cin >> newPlayer.AvgScore;

        cout<< "Jersey number: ";
        cin>> newPlayer.jerseyNo;

        Cricketers.push_back(newPlayer);  // add the player to the vector
    }

    // Display player details
    for (int i = 0; i < n; i++) {
        cout << endl << " Details for Player " << i + 1 << ":" << endl;
        cout << "Name: " << Cricketers[i].name << endl;
        cout << "Age: " << Cricketers[i].age << endl;
        cout << "Number of Test Matches: " << Cricketers[i].noOfTestMatches << endl;
        cout << "Average Score: " << Cricketers[i].AvgScore << endl;
        cout<< "Jersey Numbr: " << Cricketers[i].jerseyNo <<endl;
        cout << endl;
    }

    return 0;
}
