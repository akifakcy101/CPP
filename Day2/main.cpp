#include <iostream>
#include <ctime>

//Header and .cpp should be same name
#include "header.h"

#define PI 3.141592653589793238462643383279502884
#define X

namespace Foo
{
    int doSomething(int x, int y) { return x + y; }
}

namespace Goo
{
    int doSomething(int x, int y) { return x - y; }
}




double area(int length)
{
    return length * length * PI;
}

int main()
{
    int a = 5;
    int b = 10;
    std::cout << add(a, b) << std::endl;


    std::cout << MY_FOX_NAME << std::endl;


#ifdef X
    std::cout << "X defined" << std::endl;
#endif

#ifdef Y
    std::cout << "Y defined" << std::endl;
#endif

#ifndef Z
    std::cout << "Z not defined" << std::endl;
#endif

#if 0 //WHY !!
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif

#if 1 //OH THATS WHY
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif


    //Namespace
    std::cout << Foo::doSomething(4, 3) << '\n'; // 7
    std::cout << Goo::doSomething(4, 3) << '\n'; // 1
    return 0;
}
