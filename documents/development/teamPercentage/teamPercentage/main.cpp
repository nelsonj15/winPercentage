
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
    int below = 0;
    int average = 0;
    int above = 0;
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
        cin.ignore();
        cout << "Enter winning percentage: \n";
        cin >> teamList[i].winPercentage;
    }
    
    // Display teams that are Below Average
    cout <<"Below Average Teams:" << endl;
    for ( int i= 0; i < teamCount; i++)
    {
        if (teamList[i].winPercentage <= .333)
        {
            cout << teamList[i].teamName;
            below = 1;
        }
    }
    if (below == 0)
        cout << "none\n";
    
    // Display teams that are Average
    cout <<"Average Teams:" << endl;
    for ( int i= 0; i < teamCount; i++)
    {
        if (teamList[i].winPercentage <= .666 || teamList[i].winPercentage >= .334)
        {
            cout << teamList[i].teamName;
            average = 1;
        }
    }
    if (average == 0)
        cout << "none\n";
    
    // Display teams that are Above Average
    cout <<"Above Average Teams:" << endl;
    for ( int i= 0; i < teamCount; i++)
    {
        if (teamList[i].winPercentage >= .667)
        {
            cout << teamList[i].teamName;
            above = 1;
        }
    }
    if (above == 0)
        cout << "none\n";
    
    

        return 0;
    }
