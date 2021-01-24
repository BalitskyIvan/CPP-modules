#include "Serialization.hpp"
int main() {
	Serialization serialization;

	std::srand(std::time(0));

	std::cout << "\n" << std::endl;
	Data *data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;

	std::cout << "\n" << std::endl;
	data = serialization.deserialize(serialization.serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s1 << std::endl;
	return 0;
}
