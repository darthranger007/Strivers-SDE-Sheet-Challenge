#include <bits/stdc++.h> 
class Queue {
    int frontt, rear;
	vector<int> arr;
public:
    Queue() {
        // Implement the Constructor
        frontt = 0;
		rear = 0;
		arr.resize(100001);
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frontt==rear)
        return true;
        return false;
    }

    void enqueue(int e)
	{
		arr[rear]=e;
		rear++;
		// Write your code here.
	}

	// Dequeue (retrieve) the element from the frontt of the queue.
	int dequeue()
	{
		if(frontt==rear)
		return -1;
		frontt++;
		return arr[frontt-1];
		// Write your code here.
	}

    int front() {
        // Implement the frontt() function
        if(frontt==rear)
		return -1;
        return arr[frontt];

    }
};


