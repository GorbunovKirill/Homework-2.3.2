#include <iostream>
#include <Windows.h>

class Counter {
private:
	int num=1;

public:
	Counter(int num1) { this->num = num1; }


	void calc(char cmnd)
	{
		this->num;
		if (cmnd == 45) { this->num--; }
		else if (cmnd == 43) { this->num++; }
	}

	int get_num() {
		return this->num;
	}


};

void calculations(Counter general) {
	char sign;
	do {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> sign;
		general.calc(sign);
		if (sign == 61) {
			std::cout << "�����: ";
			std::cout << general.get_num() << std::endl;
		}
	} while (sign != 120);

	std::cout << "�� ��������" << std::endl;
}

int main() {
	int num1;
	std::string ask;
	
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���:  ";
	std::cin >> ask;
	if (ask == "��") {
	std::cout << "������� ��������� �������� ��������: ";
	std::cin >> num1;
	}
	else { num1 = 1; }

	Counter first(num1);

	calculations(first);

	return 0;

}