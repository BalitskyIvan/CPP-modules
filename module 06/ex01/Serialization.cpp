//
// Created by Lonmouth Mallador on 1/23/21.
//

#include "Serialization.hpp"

Serialization::Serialization() {

}

static char getRandomChar()
{
	int res = 65 + std::rand() % (122 - 65);
	while (res > 90 && res < 97)
		res = 65 + std::rand() % (122 - 65);
	return res;
}

void *Serialization::serialize(void) {
	char *data = new char[20];
	int i = 0;
	for (; i < 8; i++)
		data[i] = getRandomChar();
	*reinterpret_cast<int *>(data + i) = std::rand();
	for (; i < 20; i++)
		data[i] = getRandomChar();
	return data;
}


Data *Serialization::deserialize(void *raw) {
	Data *data = new Data;
	char *res = static_cast<char *>(raw);
	data->s1.assign(res, 8);
	data->n = *reinterpret_cast<int *>(res + 8);
	data->s1.assign(res + 12, 8);
	return data;
}

Serialization::~Serialization() {
}