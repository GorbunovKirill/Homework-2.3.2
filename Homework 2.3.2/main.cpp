#include <iostream>
#include <Windows.h>

class Counter {

private:
    int num;

public:
    void calc(int a) {
        setlocale(LC_ALL, "Russian");
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        std::string ask;
        int c = 0;
        do {
            std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���:  ";
            std::cin >> ask;
            if (ask == "��") { std::cout << "������� ��������� �������� ��������: "; std::cin >> a; c = 1; }
            else if (ask == "���") { a = 1; c = 1; }
            else { std::cout << "������" << std::endl; }
        } while (c != 1);
        char b;
        do {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
            std::cin >> b;
            if (!std::cin) {
                std::cin.clear();
                std::cin.get();
            }
            b = static_cast<char>(b);
            if (b == 45) { a--; }
            else if (b == 43) { a++; }
            else if (b == 61) { std::cout << "����� " << a << std::endl; }
            else if (b == 120) {
                std::cout << std::endl;
                std::cout << "�� �������� " << std::endl;
            }
            else {
                std::cout << "������" << std::endl;
            }
            this->num = a;
        } while (b != 120);
    }


    Counter(int num) {
        this->num = num = 1;
    }
};

int main() {
    int num1 = 0;
    Counter first(num1);
    first.calc(num1);
}