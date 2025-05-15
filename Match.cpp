#include "Match.h"

Match::Match(string team1, string team2, string date, string status)
    : team1(team1), team2(team2), winner(""), date(date), status(status) {}

string Match::getTeam1() const { return team1; }
string Match::getTeam2() const { return team2; }
string Match::getWinner() const { return winner; }
void Match::setWinner(const string& winner) { this->winner = winner; }
string Match::getDate() const { return date; }
string Match::getStatus() const { return status; }
void Match::setStatus(const string& status) { this->status = status; }

