#include<iostream>

class Calculator {
public:
    virtual int getResult() {
        return 0;
    }

    int num1 = 0;
    int num2 = 0;
};

class AddCalculator : public Calculator {
public:
    int getResult() {
        return num1 + num2;
    }
};

class SubCalculator : public Calculator {
public:
    int getResult() {
        return num1 - num2;
    }
};

class MulCalculator : public Calculator {
public:
    int getResult() {
        return num1 * num2;
    }
};

class DisCalculator : public Calculator {
public:
    int getResult() {
        int ret = num1 / num2;
        return ret;
        // return num1 / num2;
    }
};

void kun() {
    Calculator * kun = new AddCalculator;
    kun->num1 = 10;
    kun->num2 = 7;
    std::cout << kun->getResult() << '\n';
    delete kun;

    kun = new SubCalculator;
    kun->num1 = 10;
    kun->num2 = 7;
    std::cout << kun->getResult() << '\n';
    delete kun;

    kun = new MulCalculator;
    kun->num1 = 10;
    kun->num2 = 7;
    std::cout << kun->getResult() << '\n';
    delete kun;

    kun = new DisCalculator;
    kun->num1 = 10;
    kun->num2 = 7;
    std::cout << kun->getResult() << '\n';
    delete kun;
}

int main() {
    kun();
    return 0;
}