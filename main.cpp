#include <iostream>

struct address {
	std::string town;
	std::string street;
	std::string building;
	int apartment;
	long index;
};

void print(address& person) {
	std::cout << "City: " << person.town << std::endl;
	std::cout << "Street: " << person.street << std::endl;
	std::cout << "Building number: " << person.building << std::endl;
	std::cout << "Apartment number: " << person.apartment << std::endl;
	std::cout << "Index: " << person.index << std::endl;
	std::cout << std::endl;
}

int main(int argc, char** argv) {
	address pinkman = { "Albuquerque", "SW", "322", 16, 87104 };
	
	address holmes;
	holmes.town = "London";
	holmes.street = "Baker Street";
	holmes.building = "221B";
	holmes.apartment = 0;
	holmes.index = 161015;

	print(pinkman);
	print(holmes);

	return 0;
}