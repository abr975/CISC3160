#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <numeric>
#include <ctime>

using namespace std;
// For this Program I will be revising a old C++ program in one of my first classes all the way back on 3/7/2016
// The goal of this program was to create a program to track the teams of a Football League
class Team
{
private:
    string name;
    int wins, losses, ties;

public:
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    int getWins() { return wins; }
    int getLosses() { return losses; }
    int getTies() { return ties; }
    void setAll(int, int, int);
    Team(string, int, int, int);
    Team();
    ~Team();
    void toString();
};

int main()
{
    Team sportTeam[32];
    string tempName, menuInput, winsInput, lossesInput, tiesInput;
    int tempWins, tempLosses, tempTies, i = 0, menuNumber = 0, totalTeams = 32;
    cout << "This Program is tracks up to " << totalTeams << " sports teams and displays them\n";
    cout << "Press 1: Enter a Team, 2: Display All Teams, -1: Exit Program ";
    // Protecting against string input causing the program to infinite loop by using cin to string then converting to a interger value with stoi
    cin >> menuInput;
    menuNumber = stoi(menuInput);
    while (menuNumber != -1)
    {
        if (menuNumber == 0)
        {
            cout << "Press 1: Enter a Team, 2: Display All Teams, -1: Exit Program ";
            cin >> menuInput;
            menuNumber = stoi(menuInput);
        }
        else if (menuNumber == 1)
        {
            cout << "Enter your teams name ";
            cin >> tempName;
            sportTeam[i].setName(tempName);
            cout << "Enter your teams record wins/losses/ties\n";
            // Protecting against string input causing the program to infinite loop by using cin to string then converting to a interger value with stoi
            cin >> winsInput >> lossesInput >> tiesInput;
            tempWins = stoi(winsInput);
            tempLosses = stoi(lossesInput);
            tempTies = stoi(tiesInput);
            sportTeam[i].setAll(tempWins, tempLosses, tempTies);
            i++;
            totalTeams--;
            // If Teams are full then we display them and exit
            if (totalTeams <= 0)
            {
                cout << "The teams are full\n";
                menuNumber = 2;
            }
            // Else we can still add
            else
            {
                cout << "There are up to " << totalTeams << " teams left to enter\n";
                menuNumber = 0;
            }
        }
        else if (menuNumber == 2)
        {
            cout << i << " Teams\n";
            for (int j = 0; j < i; j++)
            {
                sportTeam[j].toString();
            }
            // If teams are full set menu to -1 to exit
            if (totalTeams <= 0)
            {
                menuNumber = -1;
            }
            // Else go back to menu
            else
            {
                menuNumber = 0;
            }
        }
        else
            menuNumber = 0;
    }
    return 0;
}

void Team::setAll(int wins, int losses, int ties)
{
    this->wins = wins;
    this->losses = losses;
    this->ties = ties;
}
Team::Team(string name, int wins, int losses, int ties)
{
    this->name = name;
    this->wins = wins;
    this->losses = losses;
    this->ties = ties;
}
Team::Team()
{
    this->name = "";
    this->wins = 0;
    this->losses = 0;
    this->ties = 0;
}
Team::~Team()
{
}
void Team::toString()
{
    cout << this->name << " is " << this->wins << " wins " << this->losses << " losses " << this->ties << " ties \n";
}