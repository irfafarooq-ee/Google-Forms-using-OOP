#include <iostream>
#include "Form.h"

Form::Form() {
	for (int i = 0; i < 50; i++) {
		title[i] = " ";
	}
	for (int i = 0; i < 500; i++) {
		description[i] = " ";
	}
}