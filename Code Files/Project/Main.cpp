#include <iostream>
#include <string>
#include "Form.h"
#include "True_False_Form.h"
#include "Yes_No_Form.h"
#include "SQA_Form.h"

int main() {
	std::cout << std::endl;
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t\tWelcome to Forms" << std::endl;
	for (int i = 0; i < 168; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	int choice = -1;
	while (choice != 4) {
		std::cout << "Which kind of form would you like to make?" << std::endl;
		std::cout << "1. True or False Form" << std::endl;
		std::cout << "2. Questions and answer Form" << std::endl;
		std::cout << "3. Yes or No Form" << std::endl;
		std::cout << "4. Exit Form" << std::endl;
		do {
			std::cout << "Your choice: ";
			std::cin >> choice;
			if (std::cin.fail()) {
				std::cout << "Please enter a Valid Input." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			if (choice > 4 || choice <= 0) {
				std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
			}
			else {
				break;
			}
		} while (true);
		switch (choice) {
		case 1: {
			std::cout << "\nNote: Press full-stop to submit responses.\n" << std::endl;
			True_False_Form TFF;
			std::cout << "Enter title: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, TFF.title[i]);
				if (!TFF.title[i].empty() && TFF.title[i].back() == '.') {
					TFF.title[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "Enter description: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, TFF.description[i]);
				if (!TFF.description[i].empty() && TFF.description[i].back() == '.') {
					TFF.description[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "\nEnter '?' to submit question. \nNote: Maximum Questions allowed = 10\n" << std::endl;
			do {
				std::cout << "Enter number of questions: ";
				std::cin >> TFF.TQns;

				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (TFF.TQns > 10 || TFF.TQns <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					break;
				}
			} while (true);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			for (int i = 0; i < TFF.TQns; i++) {
				std::cout << "Enter question " << i + 1 << " : ";
				for (int j = 0; j < 50; j++) {
					std::getline(std::cin, TFF.questions[i][j]);
					if (!TFF.questions[i][j].empty() && TFF.questions[i][j].back() == '?') {
						break;
					}
				}
			}
			std::cout << "Enter number to proceed accordingly." << std::endl;
			std::cout << "1. Submit Form" << std::endl;
			std::cout << "2. Edit Form" << std::endl;
			int x = -1;
			std::cout << "Your choice: ";
			std::cin >> x;
			std::cin.ignore();
			switch (x) {
			case 1: {
				std::cout << "Your Form has been submitted." << std::endl;
				TFF.Create_form(1);
			}break;
			case 2: {
				TFF.Edit_from();
			}break;
			}
			std::cout << "Do you want to submit responses for the form?" << std::endl;
			std::cout << "1. Yes" << std::endl;
			std::cout << "2. No" << std::endl;
			do {
				std::cout << "Your choice: ";
				std::cin >> choice;
				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (choice > 2 || choice <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					if (choice == 1) {
						for (int i = 0; i < TFF.TQns; i++) {
							std::cout << "Enter True/False for question " << i + 1 << ": ";
							do {
								std::cin >> TFF.responses[i];
								if (std::cin.fail()) {
									std::cout << "Please enter a Valid Input." << std::endl;
									std::cin.clear();
									std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
									continue;
								}

								if (TFF.responses[i] != "True" && TFF.responses[i] != "TRUE" && TFF.responses[i] != "False" && TFF.responses[i] != "FALSE") {
									std::cout << "Invalid Answer. Enter 'True' or 'False' to proceed." << std::endl;
								}
								else {
									break;
								}
							} while (true);
						}
					}
					else if (choice == 2) {
						TFF.Create_form(2);
						break;
					}
					TFF.Create_form(2);
					break;
				}
			} while (true);
		}break;
		case 2: {
			std::cout << "\nNote: Press full-stop to submit responses.\n" << std::endl;
			SQA_Form SQA;
			std::cout << "Enter title: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, SQA.title[i]);
				if (!SQA.title[i].empty() && SQA.title[i].back() == '.') {
					SQA.title[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "Enter description: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, SQA.description[i]);
				if (!SQA.description[i].empty() && SQA.description[i].back() == '.') {
					SQA.description[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "\nEnter '?' to submit question. \nNote: Maximum Questions allowed = 10\n" << std::endl;
			do {
				std::cout << "Enter number of questions: ";
				std::cin >> SQA.TQns;

				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (SQA.TQns > 10 || SQA.TQns <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					break;
				}
			} while (true);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			for (int i = 0; i < SQA.TQns; i++) {
				std::cout << "Enter question " << i + 1 << " : ";
				for (int j = 0; j < 50; j++) {
					std::getline(std::cin, SQA.questions[i][j]);
					if (!SQA.questions[i][j].empty() && SQA.questions[i][j].back() == '?') {
						break;
					}
				}
			}
			std::cout << "Enter number to proceed accordingly." << std::endl;
			std::cout << "1. Submit Form" << std::endl;
			std::cout << "2. Edit Form" << std::endl;
			int x = -1;
			while (x != 1 && x != 2) {
				try {
					std::cout << "Your choice: ";
					std::cin >> x;
					if (std::cin.fail()) {
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						throw std::runtime_error("Invalid input! Please enter a valid choice (1 or 2).");
					}

					if (x != 1 && x != 2) {
						throw std::runtime_error("Invalid input! Please enter a valid choice (1 or 2).");
					}
				}
				catch (const std::exception& e) {
					std::cout << e.what() << std::endl;
				}
			}
			switch (x) {
			case 1: {
				std::cout << "Your Form has been submitted." << std::endl;
				SQA.Create_form(1);
			} break;
			case 2: {
				SQA.Edit_from();
			} break;
			}
			std::cout << "Do you want to submit responses for the form?" << std::endl;
			std::cout << "1. Yes" << std::endl;
			std::cout << "2. No" << std::endl;
			do {
				std::cout << "Your choice: ";
				std::cin >> choice;
				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (choice > 2 || choice <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					if (choice == 1) {
						for (int i = 0; i < SQA.TQns; i++) {
							std::cout << "Answer for " << i + 1 << " question: ";
							std::cin >> SQA.responses[i];
							SQA.Create_form(2);
							break;
						}
					}
					else if (choice == 2) {
						SQA.Create_form(2);
						break;
					}
				}
				} while (true);
		}break;
		case 3: {
			std::cout << "\nNote: Press full-stop to submit responses.\n" << std::endl;
			Yes_No_Form YNF;
			std::cout << "Enter title: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, YNF.title[i]);
				if (!YNF.title[i].empty() && YNF.title[i].back() == '.') {
					YNF.title[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "Enter description: ";
			for (int i = 0; i < 50; i++) {
				std::getline(std::cin, YNF.description[i]);
				if (!YNF.description[i].empty() && YNF.description[i].back() == '.') {
					YNF.description[i].pop_back();
					break;
				}
			}
			std::cout << std::endl;
			std::cout << "\nEnter '?' to submit question. \nNote: Maximum Questions allowed = 10\n" << std::endl;
			do {
				std::cout << "Enter number of questions: ";
				std::cin >> YNF.TQns;

				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (YNF.TQns > 10 || YNF.TQns <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					break;
				}
			} while (true);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			for (int i = 0; i < YNF.TQns; i++) {
				std::cout << "Enter question " << i + 1 << ": " << std::endl;
				for (int j = 0; j < 50; j++) {
					std::getline(std::cin, YNF.questions[i][j]);
					if (!YNF.questions[i][j].empty() && YNF.questions[i][j].back() == '?') {
						break;
					}
				}
			}
			std::cout << "Enter number to proceed accordingly." << std::endl;
			std::cout << "1. Submit Form" << std::endl;
			std::cout << "2. Edit Form" << std::endl;
			int x = -1;
			do {
				std::cout << "Your choice: ";
				std::cin >> x;

				if (std::cin.fail()) {
					std::cout << "Invalid Input! Please enter a valid choice (1 or 2)." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}

				if (x != 1 && x != 2) {
					std::cout << "Invalid Input! Please enter a valid choice (1 or 2)." << std::endl;
				}
			} while (x != 1 && x != 2);

			switch (x) {
			case 1:
				std::cout << "Your Form has been submitted." << std::endl;
				YNF.Create_form(1);
				break;
			case 2:
				YNF.Edit_from();
				break;
			}
			std::cout << "Do you want to submit responses for the form?" << std::endl;
			std::cout << "1. Yes" << std::endl;
			std::cout << "2. No" << std::endl;
			do {
				std::cout << "Your choice: ";
				std::cin >> choice;
				if (std::cin.fail()) {
					std::cout << "Please enter a Valid Input." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}
				if (choice > 2 || choice <= 0) {
					std::cout << "The input is out of range. Enter a valid Input to proceed." << std::endl;
				}
				else {
					if (choice == 1) {
						for (int i = 0; i < YNF.TQns; i++) {
							std::cout << "Enter Yes/No for question " << i + 1 << ": ";
							do {
								std::cin >> YNF.responses[i];
								if (std::cin.fail()) {
									std::cout << "Please enter a Valid Input." << std::endl;
									std::cin.clear();
									std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
									continue;
								}
								if (YNF.responses[i] != "Yes" && YNF.responses[i] != "YES" && YNF.responses[i] != "NO" && YNF.responses[i] != "No") {
									std::cout << "Invalid Answer. Enter 'Yes' or 'No' to proceed." << std::endl;
								}
								else {
									break;
								}
							} while (true);
						}
					}
					else if (choice == 2) {
						YNF.Create_form(2);
						break;
					}
					YNF.Create_form(2);
					break;
				}
			} while (true);
		}break;
		}
	}
	std::cout << "Thank you for using forms." << std::endl;
	return 0;
}