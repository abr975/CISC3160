// My name is Alex Barbero and this is my 4th program it will compute football statistics.
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int teamid=0, loses,ties,amountofgamesleft, teamscore, totalteams=0;
    double wins, totalgamesplayed, winningavrg;
    cout << "Enter team ID number, if team ID number = -1 program will stop " << endl;
    cin >> teamid;
    while (teamid!=-1){
        cout << "Enter wins, loses, and ties" << endl;
        cin >> wins >> loses >> ties;
        cout << "Team " << teamid << " has " << wins << " wins, " << loses << " loses and " << ties <<" ties." << endl;
        totalgamesplayed= wins+loses+ties;
        amountofgamesleft=16-totalgamesplayed;
        if (totalgamesplayed==16)
            cout << "Your team has played" << totalgamesplayed << ", your team has finished their season." << endl;
        else if (totalgamesplayed>16)
            cout << "Error: Your team has played over the max games please type in new info" << endl;
        else
            {cout << "Your team has played " << totalgamesplayed << " games." << endl;
            cout << "The amount of games remaining is " << amountofgamesleft << endl;}
        winningavrg = wins / totalgamesplayed;
        cout << "Your teams winning average is " << setprecision(4) << winningavrg << endl;
        if (wins>=ties)
            cout << "Your teams wins are greater than or equal to your teams ties." << endl;
        else
            cout << "Your teams wins are not greater than or equal to your teams ties." << endl;
        if (loses>ties)
            cout << "Your teams loses are greater than your teams ties." << endl;
        else if (loses<ties)
            cout << "Your teams loses are not greater than your teams ties." << endl;
        teamscore = (2 * wins) + ties - loses;
        if (teamscore<0)
            teamscore=0;
        cout <<"Your teams score is " << teamscore <<endl;
        totalteams++;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout <<"Enter team ID number " << endl;
        cin >> teamid;
        }
        cout <<"The total teams in your league is " << totalteams <<endl;


return 0;
}

