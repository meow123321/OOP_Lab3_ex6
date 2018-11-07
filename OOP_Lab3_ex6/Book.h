#pragma once

#include<iostream>
#include<string>
#include<vector>

using namespace std;
 
class Book {

public:
	string title;
	string author;
	string publishing_house;
	string ISBN;
	int apparence_year;
	double price;

	// The functions that check if the title/author/ISBN are in the
	bool check_title(string title);
	bool check_author(string author);
	bool check_ISBN(string ISBN);

	//the default Constructor
	Book();
	//the parameterized constructors
	Book(string title, string author, string publishing_house, string ISBN, int apparence_year, double price); 
	// the destructor
	~Book(); 

};





