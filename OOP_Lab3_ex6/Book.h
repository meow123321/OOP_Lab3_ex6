#pragma once

#include<iostream>
#include<string>

using namespace std;
 
class Book {

public:
	string title;
	string author;
	string publishing_house;
	string ISBN;
	int apparence_year;
	double price;

	bool check_title(string title) {
		if (title == this->title)
			return 1;
		return 0;
	}

	bool check_author(string author) {
		if (author == this->author)
			return 1;
		return 0;
	}

	bool check_ISBN(string ISBN) {
		if (ISBN == this->ISBN)
			return 1;
		return 0;
	}

	Book(string title_aux, string author_aux, string publishing_house_aux, string ISBN_aux, int apparence_year_aux, double price_aux);



};





