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
	int price;

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

	string getTitle() {
		return title;
	}
	void setTitle(string title) {
		this->title = title;
	}

	void setAuthor(string author) {
		this->author = author;
	}

	void setPublish(string publishing_house) {
		this->publishing_house = publishing_house;
	}

	void setISBN(string ISBN) {
		this->ISBN = ISBN;
	}

	void setYear(int aparence_year) {
		this->apparence_year = aparence_year;
	}

	void setPrice(int price) {
		this->price = price;
	}



};





