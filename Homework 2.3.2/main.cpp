#include <iostream>
#include <Windows.h>

class Counter {
private:
	int num;

public:
	Counter(int num1) { this->num = num1; }
	Counter() { this->num = 1; }

	void calc(int num1, char cmnd)
	{
		cmnd = static_cast<char>(cmnd);
		if (cmnd == 45) { num1 = this->num--; }
		else if (cmnd == 43) { this->num++; }
		else if (cmnd == 61) { this->num = num1; }
	}

	int get_num() {
		return this->num;
	}
	int set_num(int num1) {
		return this->num = num1;
	}

};

void calculations(char sign, Counter general) {
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> sign;
		general.calc(general.get_num(), sign);
		if (sign == 61) {
			std::cout << "равно: ";
			std::cout << general.get_num() << std::endl;
		}
	} while (sign != 120);

	std::cout << "До свидания" << std::endl;
}

int main() {
	int num1;
	char sign1{};
	std::string ask;
	Counter first;

	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:  ";
	std::cin >> ask;
	if (ask == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num1; first.set_num(num1);
	}

	calculations(sign1, first);

	return 0;

}