#include <cstdlib>
#include <string.h>

#include <iostream>

void openAlertBox(std::string& message) {
	//const std::string command = "start /B cmd /C mshta javascript:alert(\"\");close()";
	//std::system(command.c_str());
	/*char const fullCommand[2048];

	strcpy(fullCommand, strcat("start /B cmd /C mshta javascript:alert(\"", strcat(message, "\");close()")));

	std::system(fullCommand[0]);*/

	std::cout << *message << std::endl;
}

int main() {
	openAlertBox("hi");
}

