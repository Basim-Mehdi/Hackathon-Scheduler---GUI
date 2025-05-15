#include "MatchTree.h"

#include <iostream>

MatchTree::MatchTree() : root(NULL) {}

MatchTree::~MatchTree() {
    deleteTree(root);
}

void MatchTree::deleteTree(MatchNode* node) {
    if (node == NULL) return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

void MatchTree::buildTree(const string teams[], int numTeams) {
    MatchNode* nodes[50]; // Fixed size array to hold nodes
    int index = 0;

    for (int i = 0; i < numTeams; i += 2) {
        nodes[index++] = new MatchNode(teams[i], teams[i + 1]);
    }

    while (index > 1) {
        int nextIndex = 0;
        for (int i = 0; i < index; i += 2) {
            MatchNode* parent = new MatchNode();
            parent->left = nodes[i];
            parent->right = nodes[i + 1];
            nodes[nextIndex++] = parent;
        }
        index = nextIndex;
    }

    root = nodes[0];
}

void MatchTree::setWinner(MatchNode* match, const string& winner) {
    if (match) match->winner = winner;
}

void MatchTree::displayMatches() const {
    displayMatches(root);
}

void MatchTree::displayMatches(MatchNode* node) const {
    if (node == NULL) return;
    displayMatches(node->left);
    if (!node->team1.empty() && !node->team2.empty()) {
        cout << node->team1 << " vs " << node->team2;
        if (!node->winner.empty()) cout << " | Winner: " << node->winner;
        cout << endl;
    }
    displayMatches(node->right);
}