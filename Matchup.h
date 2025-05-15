#pragma once
#include "Team.h"
ref class Matchup
{
public:
    Team^ Team1;  // The first team (from the top 8)
    Team^ Team2;  // The second team (from the shuffled bottom 8)

    // Constructor to initialize a matchup
    Matchup(Team^ team1, Team^ team2) {
        Team1 = team1;
        Team2 = team2;
    }
};

