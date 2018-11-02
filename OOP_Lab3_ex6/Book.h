#pragma once
#include<iostream>
#include<string>



class Book {

public:
	string title;
	string author;
	string publishing_house;
	string ISBN;
	int aparence_year;
	int price;

	bool check_title(string title);

};






