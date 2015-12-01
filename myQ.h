///////////////////////////////////////////
// File: mQ.h
// Description:
//	.h file for template queue class
//	using stl stacks
// Author: Jacob English
// Copyright (c) 2015 Jacob English
///////////////////////////////////////////
#include <iostream>
#include <stack>
using namespace std;

template <class T>
class myQ
{
	public:
		myQ(){}
		myQ(const myQ& q);
		void operator =(const myQ q);
		void enqueue(T item);
		T dequeue();
		int size();
	private:
		stack <T> front;
		stack <T> back;
};

#include "myQ.template"
