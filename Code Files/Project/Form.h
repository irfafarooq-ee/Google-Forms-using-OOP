#pragma once
#include <iostream>

class Form {
public:
	std::string title[50], description[500];
public:
	Form();
	virtual void Create_form(int) = 0;
	virtual void Edit_from() = 0;
	virtual void Delete_form() = 0;
};
