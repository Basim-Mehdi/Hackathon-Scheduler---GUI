#pragma once
#include "Team.h"

public ref class TeamsArray
{
private:
    cli::array<Team^>^ teams;

public:
    // Constructor to initialize the array with space for 16 teams
    TeamsArray();

    // Setter to assign a team at a specific index
    void SetTeam(int index, Team^ team);

    // Getter to retrieve a team at a specific index
    Team^ GetTeam(int index);

    // Property to get the number of teams currently in the collection
    property int TeamCount
    {
        int get()
        {
            int count = 0;
            for (int i = 0; i < 16; i++)
            {
                if (teams[i] != nullptr)
                {
                    count++;
                }
            }
            return count;
        }
    }

    // Method to check if there is space available for a new team
    bool HasSpace();

    // Method to get the next available index for a new team
    int GetNextAvailableIndex();
};