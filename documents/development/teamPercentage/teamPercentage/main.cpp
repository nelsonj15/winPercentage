
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
    
    while (teamList->winPercentage <= .333)
    {
        cout << "Below Average Team:" << endl;
    }
    
    while (teamList->winPercentage <= .666)
    {
        cout << "Average Team:" << endl;
    }
    
    while (teamList->winPercentage > .666 )
    {
        cout << "Average Team:" << endl;
    }
    

    for (int i = 0; i < teamCount; i++)
    {
        cout << "Enter Team Name: \n";
        getline (cin, teamList[i].teamName);
        
        cout << "Enter winning percentage: \n";
        cin >> teamList[i].winPercentage;
    }
    
       cout << "Your Teams Are:" << teamList->teamName << teamList->winPercentage << endl;
    
        return 0;
}
