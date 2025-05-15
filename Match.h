#pragma once
// Purpose: Represent and manage individual matches in the tournament.
// Role in the Project:

// Match Scheduling:
// - Stores details like team names, date, time, status, and winner.

// Progress Tracking:
// - Updates match status (scheduled or completed) and assigns the winner after the match ends.

// Simulation Support:
// - Provides methods to set the winner and update the status, aiding tournament simulation.

// Relevant Requirements:
// (5) Managing match details like participants, schedule, and winner.
// (6) Tracking match results and advancing winners to the next round.

#include <string>

using namespace std;

class Match
{
private:
    string team1;
    string team2;
    string winner;
    string date;
    string status; // "Scheduled" or "Completed"

    public:
        Match(string team1, string team2, string date, string status);
        string getTeam1() const;
        string getTeam2() const;
        string getWinner() const;
        void setWinner(const string& winner);
        string getDate() const;
        string getStatus() const;
        void setStatus(const string& status);
};

