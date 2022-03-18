#include "Karen.hpp"

int main() {
	Karen message;

	message.complain("DEBUG");
	message.complain("INFO");
	message.complain("WARNING");
	message.complain("ERROR");

	return 0;
}
