#include"Book.h"

Book::Book() {
}

Book::Book(string title, string author, string publishing_house, string ISBN, int apparence_year, double price) {
	this->title = title;
	this->author = author;
	this->publishing_house = publishing_house;
	this->ISBN = ISBN;
	this->apparence_year = apparence_year;
	this->price = price;


}

Book ::~Book() {
}

bool Book :: check_title(string title) {
	if (title == this->title)
		return 1;
	return 0;
}

bool Book :: check_author(string author) {
	if (author == this->author)
		return 1;
	return 0;
}

bool Book :: check_ISBN(string ISBN) {
	if (ISBN == this->ISBN)
		return 1;
	return 0;
}
