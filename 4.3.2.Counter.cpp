// 4.3.2.Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
class Counter {
public:
    void setCounterNum(int enteredNum) {
        this->counterNum = enteredNum;
    }

    void addCounter() {
        this->counterNum++;
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
    
    bool flag = false;
    do {
        std::string enteredText;
        std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: " << std::endl;
        std::cin >> enteredText;
        if (enteredText == "да") {
            std::cout << "Введите начальное значение счетчика: " << std::endl;
            std::cin >> enteredNum;
            counterObj.setCounterNum(enteredNum);
            flag = true;
        } else if (enteredText == "нет") {
            flag = true;
        }
        else {
            std::cout << "Введенное слово не распознано, попробуйте еще раз " << std::endl;
            flag = false;
        }
    } while (flag == false);

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
