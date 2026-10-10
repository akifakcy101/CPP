#include <iostream>
#include <limits>

int main()
{/*
    int var;
    int z{5};

    int x,y;

    double pi{3.14159};
    double gravity{9.8};
    double phi{1.61803};

    std::cout << "Hello World\n";
    std::cout << "Hello" << "World\n";
    std::cout << "x equals to " << z << std::endl;

    std::string ad;
    std::cout << "Adın soyadın: ";
    std::getline(std::cin, ad);
    std::cout << ad << std::endl;

    std::cout << "Enter a number: ";
    std::cin >> var;

    std::cin >> x >> y;
*/

    //Exercise

    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::string name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// -_-
    std::cout << "Enter your full name: ";
    std::getline(std::cin , name);
    std::cout << "Hello "<< name <<", after 5 years you will be " << (age+5)<<" years old"<< std::endl;

    return 0;

}