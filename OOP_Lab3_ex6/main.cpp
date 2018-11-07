#include"Book.h"

using namespace std;

int main() {

	vector<Book> library;
	// the parameters we will search 
	string title_to_find;
	string author_to_find;
	string ISBN_to_find;

	int count_title, count_author, count_ISBN;
	
	// Introdcting the class objects
	library.push_back( Book("The portrait of Dorian Gray", "Ocar Wilde", "Rao", "1607107325", 2013, 56.99));
	library.push_back( Book("Miss Peregrine", "Ransom Riggs", "youngArt", "9788408158035", 2015, 34.90));
	library.push_back(Book("Clubul Mefisto", "Tess Gerritsen", "Rao", "9789731034294", 2008, 29.99));
	library.push_back(Book("Red Dragon", "Thomas Harris", "Rao", "9789731038964", 2009, 16.90));
	library.push_back(Book("The Exorcist", "William Peter Blatty", "Rao", "006209436X", 2011, 64.99));
	


	cout << "Enter the title of the book you search: ";
	getline(cin, title_to_find);

	cout << "Enter the author  of the book you search : ";
	getline(cin, author_to_find);

	cout << "Enter the ISBN code of the book you search: ";
	getline(cin, ISBN_to_find);

	count_title = 0;
	count_author = 0;
	count_ISBN = 0;
	for(int i = 0; i < 5; i++){

		if (library[i].check_title(title_to_find)) {
			cout << "\nWe fount the book " <<title_to_find ;
			count_title++;
		}

		if (library[i].check_author(author_to_find)) {
			cout << "\nWe fount the books written by  " << author_to_find << " : ";
			cout << library[i].title;
			count_author++;
		}
		
		if (library[i].check_ISBN(ISBN_to_find)) {
			cout << "\nThe book with the ISBN " <<library[i].ISBN <<" is " 
				<< library[i].title <<" by " << library[i].author;
			count_ISBN++;
		}
		
	}
	if (count_title == 0) {
		cout << "We didn`t fount any book with that name.\n";
	}
	if (count_author == 0) {
		cout << "We didn`t found any book written by this author.\n";
	}
	if (count_ISBN == 0) {
		cout << "We didn`t found any book with this ISBN.";
	}
	cout << "\n";


	system("pause");
	return 0;
}