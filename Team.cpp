#include "Team.h"

// Constructor
Team::Team(string name, string member1, string member2, string member3, int rank)
    : name(name), rank(rank) {
    members[0] = member1;
    members[1] = member2;
    members[2] = member3;
}

// Getters
string Team::getName() const { return name; }

string* Team::getMembers() { return members; }

int Team::getRank() const { return rank; }

// Setter for rank
void Team::setRank(int newRank) { rank = newRank; }