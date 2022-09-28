#include <iostream>
#include <bitset>

using std::cin;
using std::cout;


int main()
{
    // zadanie 1
    std::cout << "1." << "\n";
    std::cout << "Efremov Nikita Alexeyevich, 221-331" << "\n";


    // zadanie 2
    std::cout << "2." << "\n";
    std::cout << "min int = " << INT_MIN << " max int = " << INT_MAX << " size of int = " << sizeof(int) << "\n";
    std::cout << "min insigned int = " << int(0b00000000000000000000000000000000) << " max unsigned int = " << UINT_MAX << " size of unsigned int = " << sizeof(unsigned int) << "\n";
    std::cout << "min short = " << SHRT_MIN << " max short =" << SHRT_MAX << " size of short=" << sizeof(short) << "\n";
    std::cout << "min unsigned short = " << "" << " max unsigned short =" << USHRT_MAX << " size of unsigned short=" << sizeof(unsigned short) << "\n";
    std::cout << "min long = " << LONG_MIN << " max long =" << LONG_MAX << " size of long=" << sizeof(long) << "\n";
    std::cout << "min long long = " << LLONG_MIN << " max long long =" << LLONG_MAX << " size of long long=" << sizeof(long long) << "\n";
    std::cout << "min double = " << int(0b100000000000000000000000000000000000000000000000000000000000000) << " max double =" << int(0b011111111111111111111111111111111111111111111111111111111111111) << " size of double=" << sizeof(double) << "\n";
    std::cout << "min char = " << CHAR_MIN << " max char =" << CHAR_MAX << " size of char=" << sizeof(char) << "\n";
    std::cout << "min bool = " << int(0b1000000) << " max bool =" << int(0b0111111) << " size of bool=" << sizeof(bool) << "\n";


    // zadanie 3
    std::cout << "3." << "\n";
    std::cout << "Enter a number:" << "\t";
    int f;
    std::cin >> f;
    std::cout << "In binary form" << "\t" << std::bitset<16>(f) << "\n"
        << "In hexadecimal form" << "\t" << std::hex << f << "\n"
        << "bool" << "\t" << bool(f) << "\n"
        << "double" << "\t" << double(f) << "\n"
        << "char" << "\t" << char(f) << "\n";


    // zadanie 4
    std::cout << "4." << "\n";
    std::cout << "Enter the coefficients a * x = b:";
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " * x = " << b << "\n";
    std::cout << "x = " << b << "/" << a << "\n";
    std::cout << "x = " << (float)b / (float)a << "\n";
    std::cout << "Answer:" << (float)b / (float)a << "\n";


    // zadanie 5
    std::cout << "5." << "\n";
    std::cout << "Enter the coordinates of the segment on the straight line" << "\t";
    int q, w;
    std::cin >> q;
    std::cin >> w;
    std::cout << "The middle of the segment is at the point with the coordinate" << "\t";
    std::cout << ((float)q + (float)w) / 2;

    return 0;
}