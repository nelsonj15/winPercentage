#include <iostream>
#include <string.h>

using namespace std;

struct team
{
  string teamName;
  double winPercentage;
};

int main ()
{
  cout << "\n******************************************************************\n";
  cout << "***** Rob Nelson *************************************************\n";
  cout << "***** CSC 301     ************************************************\n";
  cout << "***** Project 5: Team Win Percentage Display *********************\n";
  cout << "******************************************************************\n\n";

  int teamCount;
  team *teamList = new team[teamCount];

  cout << "Hello, and welcome to Rob Nelson's Win Percentage Entry System.\n\n";
  cout << "How many teams will we be entering today? ";
  cin >> teamCount;
  // Telling the cin function there is no limit to the amount of numbers entered, to ignore.
  cin.ignore (numeric_limits < std::streamsize >::max (), '\n');

  // For loop designed to intake data for user input(i)
  for (int i = 0; i < teamCount; i++)
    {
      cout << "Enter Team Name: \n";
      getline (cin, teamList[i].teamName);

      cout << "Enter winning percentage: \n";
      cin >> teamList[i].winPercentage;

      // Low Percentage
      if (winPercentage < 0.333) {
        cout << "This team is below average.\n";
      } else if (winPercentage > .33) {
        cout << "None";
      }

      // Average Percentage
      if (winPercentage == 0.333 || winPercentage <= 0.666) {
        cout << "This team is average.\n";
      } else if (winPercentage < .66) {
        cout << "None";
      }

      // High Percentage
      if (winPercentage > 0.666) {
        cout << "This team is above average\n";
      } else if (winPercentage < .66) {
        cout << "None";
      }

      cout << "This is the list of teams\n";
      cout << "Below Average" << teamList[i].teamName << teamList[i].winPercentage << endl;
      cout << "Average" << teamList[i].teamName << teamList[i].winPercentage << endl;
      cout << "Above Average" << teamList[i].teamName << teamList[i].winPercentage << endl;
    }

  return 0;
}
