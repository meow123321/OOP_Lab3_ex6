#include"Book.h"

using namespace std;


int main() {

	Book *library;
	
	string title_to_find;
	string author_to_find;
	string ISBN_to_find;
	
	//library = operator new(Book)[5];

	library = new Book("The portrait of Dorian Gray", "Ocar Wilde", "Rao", "1607107325", 2013, 56.99);
	library = new Book("Miss Peregrine", "Ransom Riggs", "youngArt", "9788408158035", 2015, 34.90);
	library = new Book("Clubul Mefisto", "Tess Gerritsen", "Rao", "9789731034294", 2008, 29.99);
	library = new Book("Red Dragon", "Thomas Harris", "Rao", "9789731038964", 2009, 16.90);
	library = new Book("The Exorcist", "William Peter Blatty", "Rao", "006209436X", 2011, 64.99);



	cout << "Enter the title of the book you search: ";
	cin >> title_to_find;

	cout << "Enter the author  of the book you search : ";
	cin >> author_to_find;

	cout << "Enter the ISBN code of the book you search: ";
	cin >> ISBN_to_find;

	for(int i = 0; i < 5; i++){

		if (library[i].check_title(title_to_find)) {
			cout << "We fount the book" <<title_to_find ;

		}
		

		if (library[i].check_author(author_to_find)) {
			cout << "We fount the books written by " << author_to_find;
			cout << library[i].title;
			cout << "Find the book";
		}
		
		
		if (library[i].check_ISBN(ISBN_to_find)) {
			cout << "The book with the ISBN searched is: " << library[i].title << library[i].author;
		}
		
	}

	delete library;

	system("pause");
	return 0;
}