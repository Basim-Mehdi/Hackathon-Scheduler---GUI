#pragma once
// Purpose: Implement a binary tree structure to represent the tournament hierarchy.
//                                                              Role in the Project:

// Tournament Visualization:
// - Represents the knock-out structure with each node as a match.
// - Parent nodes represent matches in later rounds, while child nodes represent earlier round matches.

// Simulating Tournament Progress:
// - Allows traversal through matches to simulate or display results.
// - Provides a structure for determining and setting winners (e.g., calling setWinner updates a specific match node).

// Data Organization:
// - Facilitates storing and displaying the tournament in a tree-like structure.

// Relevant Requirements:
// (1) Managing the tournament's hierarchical structure (4 rounds: initial, quarterfinals, semifinals, and final).
// (6) Advancing winners and scheduling their next matches.
// (8) Organizing matches and results using a suitable data structure.

// Binary Tree Structure for Tournament

//                                          Final Match (Root)                                  
//                                                  |
//                                          -------------------
//                                          |                 |                            
//                                   Semifinal 1           Semifinal 2   
//                                          |                 |
//                                    ---------------      ---------------
//                                    |             |      |             |                   
//                              Quarterfinal 1   Quarterfinal 2  Quarterfinal 3   Quarterfinal 4   
//                                    |             |      |             |        
//                         --------------   --------------  --------------   --------------
//                         |            |   |            |  |            |   |            |
//                    Initial Match 1  Initial Match 2  Initial Match 3  Initial Match 4  
//                         |            |   |            |  |            |   |            |
//                  Team 1 vs Team 9  Team 2 vs Team 10 Team 3 vs Team 11 Team 4 vs Team 12
//                  Team 5 vs Team 13 Team 6 vs Team 14 Team 7 vs Team 15 Team 8 vs Team 16

/*
Explanation:
Round 1 (Initial Matches):

Team 1 vs Team 9
Team 2 vs Team 10
Team 3 vs Team 11
Team 4 vs Team 12
Team 5 vs Team 13
Team 6 vs Team 14
Team 7 vs Team 15
Team 8 vs Team 16
Round 2 (Quarterfinals): The winners from Round 1 will move on to the quarterfinals. There will be 4 matches, each between the winners of the 2 initial matches:

Quarterfinal 1: Winner of Team 1 vs Team 9 vs Winner of Team 2 vs Team 10
Quarterfinal 2: Winner of Team 3 vs Team 11 vs Winner of Team 4 vs Team 12
Quarterfinal 3: Winner of Team 5 vs Team 13 vs Winner of Team 6 vs Team 14
Quarterfinal 4: Winner of Team 7 vs Team 15 vs Winner of Team 8 vs Team 16
Round 3 (Semifinals): The winners from the quarterfinals move on to the semifinals:

Semifinal 1: Winner of Quarterfinal 1 vs Winner of Quarterfinal 2
Semifinal 2: Winner of Quarterfinal 3 vs Winner of Quarterfinal 4
Round 4 (Final): The winners of the semifinals play in the final:

Final Match: Winner of Semifinal 1 vs Winner of Semifinal 2

*/

#include <string>

using namespace std;

struct MatchNode {
    string team1;
    string team2;
    string winner;
    MatchNode* left = NULL;
    MatchNode* right = NULL;

    MatchNode(string t1 = "", string t2 = "", string win = "")
        : team1(t1), team2(t2), winner(win), left(NULL), right(NULL) {}
};

class MatchTree
{
private:
    MatchNode* root;
    void deleteTree(MatchNode* node);
    void displayMatches(MatchNode* node) const;

public:
    MatchTree();
    ~MatchTree();
    void buildTree(const string teams[], int numTeams);
    void setWinner(MatchNode* match, const string& winner);
    void displayMatches() const;
};


