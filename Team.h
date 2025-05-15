#pragma once

// Purpose: Represent and manage individual team properties.
// Role in the Project:

// Team Data Management:
// - Stores team name, members, and rank from file input.
// - Provides methods to access (getName, getMembers, getRank) and 
//   update (setRank) team properties.

// Grouping Teams:
// - Uses team ranks to divide teams into Groups A and B.

// Ease of Data Manipulation:
// - Encapsulation ensures consistent management of team data.

// Relevant Requirements:
// (2) Reading and storing team data.
// (3) Handling team ranks and member details.
// (4) Dividing teams into Groups A and B based on rank.


#include <string>
using namespace std;
class Team
{
private:

	string name;
	string members[3];
	int rank;
   
public:
    Team(string name, string member1, string member2, string member3, int rank);
    string getName() const ;
    string* getMembers();
    int getRank() const ;
    void setRank(int newRank);
};
