
#include <iostream>

struct belowAvg
{
    
    char t_name[200];		// This will be hold the team's name.
    double w_percent;			// This will hold the winning percentage of the team.
    
};

struct avg
{
    
    char t_name[200];		// This will be hold the team's name.
    double w_percent;			// This will hold the winning percentage of the team.
    
};

struct aboveAvg
{
    
    char t_name[200];		// This will be hold the team's name.
    double w_percent;			// This will hold the winning percentage of the team.
    
};



using namespace std;

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
    
    char t_name[200];
    double w_percent = 0.0;		// I am still unsure as to exaclty which is faster, and takes up less space between float and double. I know float is pretty outdated, but can I have more clarification as to which is better for numerical data input? Thanks!!
    
    
    cout << "Hello, and welcome to Rob Nelson's Win Percentage Entry System. \n\n"
    "How many teams will we be entering today?";
    int below_teams;
    cin >> below_teams;
    cin.ignore (numeric_limits < std::streamsize >::max (), '\n');	//This line of code is telling the cin function that there is no limit to the amount of numbers entered, to ignore.
    belowAvg *info = new belowAvg[below_teams];	// pointer for my below average team struct set equal to a new team entry.
    
    int average_teams;
    cin >> average_teams;
    cin.ignore (numeric_limits < std::streamsize >::max (), '\n');	//This line of code is telling the cin function that there is no limit to the amount of numbers entered, to ignore.
    avg *info2 = new avg[average_teams];	// pointer for my below average team struct set equal to a new team entry.
    
    int above_teams;
    cin >> above_teams;
    cin.ignore (numeric_limits < std::streamsize >::max (), '\n');	//This line of code is telling the cin function that there is no limit to the amount of numbers entered, to ignore.
    aboveAvg *info3 = new aboveAvg[above_teams];	// pointer for my below average team struct set equal to a new team entry.
    
    for (int i = 0; i < below_teams; i++)	//for loop designed to intake data for user input(i)
    
    for (int i = 0; i < average_teams; i++)
            
    for (int i = 0; i <above_teams; i++)
    
    {

            cout << "Enter Team Name: \n";
            cin >> info[i].t_name;
            
            cout << "Enter winning percentage: \n";
            cin >> info[i].w_percent;
            
            if (w_percent < 0.333)
            {
                cout << "This team is below average.\n";
                
            }
           
            else if (w_percent == 0.333 || w_percent <= 0.666)
               
                cout << "This team is average.\n";
            
            
                
            else if (w_percent > 0.666)
                cout<< "This team is above average\n";
            
             cout << "This is the list of teams\n" "Below Avergae" << info[i].t_name << info[i].w_percent << endl;
             cout << "Average" << info2[i].t_name << info2[i].w_percent << endl;
             cout << "Above Avergae" << info3[i].t_name << info3[i].w_percent << endl;

}
    
                  
                

    
    return 0;
}

