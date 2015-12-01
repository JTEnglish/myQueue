///////////////////////////////////////////
// File: main.cc
// Description:
// 	main.cc to test myQ template class
// Author: Jacob English
// Copyright (c) 2015 Jacob English
///////////////////////////////////////////
#include <iostream>
#include <string>
#include "myQ.h"
using namespace std;

int main()
{
	myQ<int> int_q;
	myQ<string> string_q;
	int q_size = 0;

	cout<< "How long would you like your queue? ";
	cin>> q_size;
	for (int i = 0; i < q_size; i++)
		int_q.enqueue(i);

	q_size = int_q.size();
	for (int j = 0; j < q_size; j++)
		cout<< int_q.dequeue()<< endl;

	cout<< endl<< endl;


	cout<< "Enter four strings separated by spaces: ";
	for (int k = 0; k < 4; k++)
	{
		string s = "";
		cin>> s;
		string_q.enqueue(s);
	}

	cout<< endl<< endl;

	q_size = string_q.size();
	for (int l = 0; l < q_size; l++)
		cout<< string_q.dequeue()<< endl;

	return (0);
}
