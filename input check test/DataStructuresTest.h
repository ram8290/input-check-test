#pragma once
#include <iostream>

class Stack
{
private:
	static const int MAX_SIZE = 20;
	int stack[MAX_SIZE];
	int top;
public:
	Stack()
	{
		top = -1;
	}

	void push(int val)
	{
		if (top >= MAX_SIZE - 1)
		{
			std::cout << "Stack Overflow.\n";
		}
		else
		{
			top++;
			stack[top] = val;
		}
	}

	int pop()
	{
		if (top<0)
		{
			std::cout << "Stack Underflow.\n";
			return -1;
		}
		else
		{
			top--;
			return stack[top];
		}
	}

	int size()
	{
		return (top + 1);
	}

	int peek()
	{
		if (top >= 0)
		{
			return stack[top];
		}
		return -1;
	}
};

class Queue
{
private:
	static const int MAX_SIZE = 20;
	int q[MAX_SIZE];
	int front;
	int back;

public:
	Queue()
	{
		front = 0;
		back = -1;
	}
	void shift(int val)
	{
		if (back >= MAX_SIZE - 1)
		{
			std::cout << "Queue is full.\n";
		}
		else
		{
			back++;
			q[back] = val;
		}
	}

	int unshift()
	{
		if (front > back)
		{
			std::cout << "Queue is empty.\n";
			return -1;
		}
		else
		{
			front++;
			return q[(front - 1) % MAX_SIZE];
		}
	}

	int size()
	{
		return ((back - front) + 1);
	}

	int get_front()
	{
		if (front >= 0)
		{
			return q[front];
		}
		return -1;
	}
};