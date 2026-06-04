#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char** av)
{
    // CppUTest test koşucusunu başlat
    return CommandLineTestRunner::RunAllTests(ac, av);
}