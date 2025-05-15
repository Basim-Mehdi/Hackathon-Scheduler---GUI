#include "TeamsArray.h"

// Constructor implementation
TeamsArray::TeamsArray()
{
    teams = gcnew cli::array<Team^>(16); // Allocate space for 16 teams
}

// Setter for a team at a specific index
void TeamsArray::SetTeam(int index, Team^ team)
{
    if (index >= 0 && index < 16)
    {
        teams[index] = team;
    }
    else
    {
        throw gcnew ArgumentOutOfRangeException("Index out of range.");
    }
}

// Getter for a team at a specific index
Team^ TeamsArray::GetTeam(int index)
{
    if (index >= 0 && index < 16)
    {
        return teams[index];
    }
    else
    {
        throw gcnew ArgumentOutOfRangeException("Index out of range.");
    }
}

// Method to check if there is space for more teams
bool TeamsArray::HasSpace()
{
    for (int i = 0; i < 16; i++)
    {
        if (teams[i] == nullptr) // If any panel is empty
        {
            return true;
        }
    }
    return false; // No space available
}

// Method to get the next available index for a new team
int TeamsArray::GetNextAvailableIndex()
{
    for (int i = 0; i < 16; i++)
    {
        if (teams[i] == nullptr) // Find the first available spot
        {
            return i;
        }
    }
    return -1; // Return -1 if no space is available
}
