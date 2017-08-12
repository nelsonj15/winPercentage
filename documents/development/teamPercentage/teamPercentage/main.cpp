
#include <iostream>
#include <string.h>

using namespace std;

struct team
{
    
    string teamName;		// This will be hold the team's name.
    double winPercentage;		// This will hold the winning percentage of the team.
    
};



int
main ()
{
    
    cout <<
          "\n******************************************************************\n";
    cout << "***** CSC 301     ************************************************\n";
    cout << "***** Project 5: Team Win Percentage Display *********************\n";
    cout << "******************************************************************\n\n";
    
    double winPercentage = 0.0;
    int teamCount = 0;
    team *teamList = new team[teamCount];
    
     cout << "Hello, and welcome to Rob Nelson's Win Percentage Entry System.\n\n";
     cout << "How many teams will we be entering today? ";
     cin >> teamCount;
     // Telling the cin function there is no limit to the amount of numbers entered, to ignore.
     cin.ignore (numeric_limits < std::streamsize >::max (), '\n');
    
    	// For loop designed to intake data for user input(i)
      // For loop designed to intake data for user input(i)
    for (int i = 0; i < teamCount; i++)
    {
        cout << "Enter Team Name: \n";
        getline (cin, teamList[i].teamName);
        
        cout << "Enter winning percentage: \n";
        cin >> teamList[i].winPercentage;
    }
        // Low Percentage
        if (winPercentage == 0 || winPercentage < 0.333) {
        } else if (winPercentage > .33) {
            cout << "None";
        }
        
        // Average Percentage
        if (winPercentage == 0.333 || winPercentage <= 0.666) {
        } else if (winPercentage < .66) {
            cout << "None";
        }
        
        // High Percentage
        if (winPercentage == 0.667 || winPercentage > 0.666) {
        } else if (winPercentage < .66) {
            cout << "None";
        }
        cout << "Here are the teams you have entered: \n";
        for (int i = 0; i < teamCount; i++)
        {
            cout << "Below Average Team:" << (winPercentage == 0.333 || winPercentage < 0.333) << endl;
            cout << "Average Team:" << (winPercentage == 0.333 || winPercentage <= 0.666) << endl;
            cout << "Above Average Team:" << (winPercentage == 0.667 || winPercentage > 0.666) << endl;
        }
    return 0;
}

