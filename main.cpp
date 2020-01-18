#include <iostream> // == import iostream
#include <windows.h> // import windows lib


class math {
    public:
    int val1, val2, val3;
    void ask() {
        std::cout << "First number: ";
        std::cin >> val1;
        std::cout << "Second number: ";
        std::cin >> val2;
    }
    void add() {
        val3 = val1 + val2;
        std::cout << val3;
    }
    void sub() {
        val3 = val1 - val2;
        std::cout << val3;
    }
    void mult() {
        val3 = val1 * val2;
        std::cout << val3;
    }
    void div() {
        val3 = val1 / val2;
        std::cout << val3;
    }
};


int main() {
    int option;
    math m;
    while(1) {
        std::cout << "\n=======================================\n";
        std::cout << "1. add\n2. subtract\n3. multiply\n4. division\nOption: ";
        std::cin >> option;
        switch (option) {
            case 1:
                m.ask();
                m.add();
                break;
            case 2:
                m.ask();
                m.sub();
                break;
            case 3:
                m.ask();
                m.mult();
                break;
            case 4:
                m.ask();
                m.div();
                break;
            default:
                std::cout << "Select 1 ~ 4";
                break;
        system("cls");
        }
    }
    return 0;
}
