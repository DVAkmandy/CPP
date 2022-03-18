#include <string>
#include <iostream>

typedef struct
{
	int x;
	int y;
	int z;
} Data;

uintptr_t serealize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserealize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main ()
{
	Data * ex = new Data();
	Data * dub;
	uintptr_t raw;
	srand(time(NULL));

	ex->x = (rand() % 1000);
	ex->y = (rand() % 1000);
	ex->z = (rand() % 1000);
	std::cout << "Указатель на выделенную память:\t" << ex << "\n";
	std::cout << "X = " << ex->x << std::endl;
	std::cout << "Y = " << ex->y << std::endl;
	std::cout << "Z = " << ex->z << std::endl;
	raw = serealize(ex);
	dub = deserealize(raw);
	std::cout << "Преобразуем указатель в число:\t" << raw << "\n";
	if (ex == dub)
		std::cout << "После отратного преобразования: " << dub << "\n";
	std::cout << "X = " << dub->x << std::endl;
	std::cout << "Y = " << dub->y << std::endl;
	std::cout << "Z = " << dub->z << std::endl;

	delete ex;
	return (0);
}
