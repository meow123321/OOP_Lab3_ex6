#include "Book.h"
#include<iostream>

using namespace std;

bool Book :: check_title(string title) {
	if (title == this->title)
		return 1;
	return 0;
}


