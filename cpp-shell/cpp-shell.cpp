#include <iostream>
#include <string>

int main() {
	std::string command;

	while (true) {
		std::cout << "> ";

		std::getline(std::cin, command);

		if (command == "exit") {
			break;
		}

		std::cout << "Command entered: " << command << std::endl;
	}

	return 0;
}
