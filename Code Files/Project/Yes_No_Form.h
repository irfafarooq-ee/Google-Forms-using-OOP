#pragma once
#include <iostream>
#include <string>
#include "True_False_Form.h"

class Yes_No_Form :public True_False_Form {
public:
	void Create_form(int x);
	void Edit_from();
	void Delete_form();
};
