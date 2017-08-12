
#include <iostream>
#include <string.h>

using namespace std;

struct teams
{
    
    string t_name;		// This will be hold the team's name.
    double w_percent;		// This will hold the winning percentage of the team.
    
};



int
main ()
{
    
    cout <<
    "\n******************************************************************"
    << endl;
    cout << "***** Rob Nelson *************************************************"
    << endl;
    cout << "***** CSC 301     ************************************************"
    << endl;
    cout << "***** Project 5: Team Win Percentage Display *********************"
    << endl;
    cout <<
    "******************************************************************\n\n"
    << endl;
    
    string t_name;
    double w_percent = 0.0;	// I am still unsure as to exaclty which is faster, and takes up less space between float and double. I know float is pretty outdated, but can I have more clarification as to which is better for numerical data input? Thanks!!
    
    
    cout <<
    "Hello, and welcome to Rob Nelson's Win Percentage Entry System. \n\n"
    "How many teams will we be entering today?";
    int num_teams;
    cin >> num_teams;
    cin.ignore (numeric_limits < std::streamsize >::max (), '\n');	//This line of code is telling the cin function that there is no limit to the amount of numbers entered, to ignore.
    teams *info = new teams[num_teams];	// pointer for my below average team struct set equal to a new team entry.
    
    for (int i = 0; i < num_teams; i++)	//for loop designed to intake data for user input(i)
        
    {
        
        cout << "Enter Team Name: \n";
        getline (cin, info[i].t_name);
        
        cout << "Enter winning percentage: \n";
        cin >> info[i].w_percent;
        
        if (w_percent < 0.333)
        {
            cout << "This team is below average.\n";
        }
            else if (w_percent>.33)
            cout << "None";
        
        
        if (w_percent == 0.333 || w_percent <= 0.666)
        {
            
            cout << "This team is average.\n";
        }
        else if (w_percent < .66)
            cout << "None";
        
        
        if (w_percent > 0.666)

        {
            
            cout << "This team is above average\n";
        }
        
        else if (w_percent < .66)
            cout << "None";
        
        
        cout << "This is the list of teams\n";
        cout << "Below Average" << info[i].t_name<< info[i].w_percent << endl;
        cout << "Average" << info[i].t_name << info[i].w_percent << endl;
        cout << "Above Avergae" << info[i].t_name << info[i].w_percent << endl;
        
        
        
    }
    
    
    
    return 0;
}
