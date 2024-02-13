// 4.3.2.Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
class Counter {
public:
    Counter(int _enteredNum) {
        this->counterNum = _enteredNum;
    }
    
    Counter(){}

    void addCounter() {
        counterNum++;
    }

    void disCounter() {
        this->counterNum--;
    }

    void outCounter() {
        std::cout << this->counterNum << std::endl;
    }
private:
    int counterNum = {1};
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int enteredNum;
    Counter counterObj;

    std::string enteredText;
    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: " << std::endl;
    std::cin >> enteredText;

    if (enteredText == "да") {
        std::cout << "Введите начальное значение счетчика: " << std::endl;
        std::cin >> enteredNum;
        counterObj = Counter(enteredNum);
    }

    bool flag = false;
    flag = false;
    do {
        char enteredChar = '0';
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> enteredChar;
        switch (enteredChar) {
        case '+': counterObj.addCounter(); flag = false; break;
        case '-': counterObj.disCounter(); flag = false; break;
        case '=': counterObj.outCounter(); flag = false; break;
        case 'x': flag = true; break;
        case 'х': flag = true; break;
        default: std::cout << "Неверная команда!" << std::endl; break;
        }     
    } while (flag == false);
    std::cout << "До свидания!";
}
