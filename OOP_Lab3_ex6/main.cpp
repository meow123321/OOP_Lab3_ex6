
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
		this-> publishing_house = publishing_house;
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


int main() {
	Book library[10];
	
	string title_to_find, author_to_find, ISBN_to_find;
	string title_aux, author_aux, pub_house_aux, ISBN_aux;
	int price_aux, ap_year_aux;
	int title_count, author_count, ISBN_count;
	
	

	for (int i = 0; i < 2; i++) {
	
		cout << "Enter the title:";
		cin >> title_aux; 

		cout << "Enter th author: ";
		cin >> author_aux;

		cout << "Enter the publishing house: ";
		cin >> pub_house_aux;

		cout << "Enter the ISBN code: ";
		cin >> ISBN_aux;

		cout << "Enter the price of the book:";
		cin >> price_aux;

		cout << "Enter the year of the apparence:";
		cin >> ap_year_aux ;

		library[i].setTitle(title_aux);
		library[i].setAuthor(author_aux);
		library[i].setPublish(pub_house_aux);
		library[i].setISBN(ISBN_aux);
		library[i].setPrice(price_aux);
		library[i].setYear(ap_year_aux);
	}

	title_count = 0;
	author_count = 0;
	ISBN_count = 0;

	cout << "Enter the title of the book you search: ";
	cin >> title_to_find;
	cout << "Enter the author  of the book you search : ";
	cin >> author_to_find;
	cout << "Enter the ISBN code of the book you search: ";
	cin >> ISBN_to_find;

	for(int i = 0; i < 2; i++){

		if (library[i].check_title(title_to_find)) {
			title_count++;
		}

		if (library[i].check_author(title_to_find)) {
			author_count++;
		}

		if (library[i].check_ISBN(ISBN_to_find)) {
			ISBN_count++;
		}
	}

	cout << "THe title has been found " << title_count << " times";
	cout << "The author has been found " << author_count << " times";
	cout << "The ISBN code has been found " << ISBN_count << " times";

	system("pause");
	return 0;
}