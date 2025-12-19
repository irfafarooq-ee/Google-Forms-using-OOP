#pragma once
#include <iostream>
#include <string>
#include "True_False_Form.h"

class SQA_Form :public True_False_Form {
public:
	std::string Answers[10][50];
public:
	void Create_form(int x);
	void Edit_form();
	void Delete_form();
};
