#include "TeamQueue.h"
#include <iostream>

TeamQueue::TeamQueue() {
	front = NULL;
	rear = NULL;
	size = 0;
}

TeamQueue::~TeamQueue() {
	while (front != NULL) {
		dequeue();
	}
}

void TeamQueue::enqueue(const string& teamName) {
    Node* newNode = new Node(teamName);
    if (rear == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}

string TeamQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return "";
    }
    Node* temp = front;
    string teamName = temp->teamName;
    front = front->next;
    if (front == NULL) rear = NULL;
    delete temp;
    size--;
    return teamName;
}

string TeamQueue::peek() const {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return "";
    }
    return front->teamName;
}

bool TeamQueue::isEmpty() const {
	return size == 0;
}

int TeamQueue::getSize() const {
	return size;
}
