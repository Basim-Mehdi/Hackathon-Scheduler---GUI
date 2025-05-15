#pragma once

// Purpose: Implement a queue to manage teams advancing through tournament rounds.
// Role in the Project:

// Advancing Teams:
// - Stores and manages the progression of teams through knock-out rounds.
// - Operations:
//   - enqueue: Adds the winning team to the queue for the next round.
//   - dequeue: Retrieves the next team for scheduling matches.
//   - peek: Views the next team in the queue.

// Round Organization:
// - Simplifies scheduling by maintaining a consistent order of advancing teams.

// Relevant Requirements: (Project points)
// (1) Handling knock-out rounds.
// (6) Managing winners and scheduling their matches for the next round.

#include <string>

using namespace std;
class TeamQueue
{
private:
    struct Node {
        string teamName;
        Node* next;
        Node(string name) : teamName(name), next(NULL) {}
    };

    Node* front;
    Node* rear;
    int size;

public:
    TeamQueue();
    ~TeamQueue();
    void enqueue(const string& teamName);
    string dequeue();
    string peek() const;
    bool isEmpty() const;
    int getSize() const;
};

