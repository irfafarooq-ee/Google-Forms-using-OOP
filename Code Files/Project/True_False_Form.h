#pragma once
#include <iostream>
#include <string>
#include "Form.h"

class True_False_Form :public Form {
public:
	std::string questions[10][50], responses[10];
	int TQns, qnum;
public:
	True_False_Form();
	void Create_form(int x);
	void Edit_from();
	void Delete_form();
};
