#pragma once
#include <iostream>
#include <string>
#include "Yes_No_Form.h"

void Yes_No_Form::Create_form(int x) {
	std::cout << std::endl;
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "Title: ";
	for (int i = 0; i < 50; i++) {
		std::cout << title[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "Description: ";
	for (int i = 0; i < 500; i++) {
		std::cout << description[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	if (x == 1) {
		for (int i = 0; i < TQns; i++) {
			std::cout << questions[i][0] << std::endl;
			std::cout << "1. Yes" << std::endl;
			std::cout << "2. No" << std::endl;
		}
	}
	else if (x == 2) {
		for (int i = 0; i < TQns; i++) {
			std::cout << questions[i][0] << std::endl;
			std::cout << responses[i] << std::endl;
		}
	}
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
}

void Yes_No_Form::Edit_from() {
	std::cout << "Enter question number you want to edit: ";
	std::cin >> qnum;
	std::cin.ignore();
	std::cout << "Enter new question: ";
	for (int j = 0; j < 50; j++) {
		std::getline(std::cin, questions[qnum - 1][j]);
		if (!questions[qnum - 1][j].empty() && questions[qnum - 1][j].back() == '?') {
			break;
		};
	}
	Create_form(1);
}

void Yes_No_Form::Delete_form() {
	for (int i = 0; i < 50; i++) {
		title[i] = " ";
	}
	for (int i = 0; i < 500; i++) {
		description[i] = " ";
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 50; j++) {
			questions[i][j] = " ";
		}
	}
}