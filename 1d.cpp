#include <conio.h>
#include <iostream>
int main()
{
    int a[5], i;
    std::cout << "enter the value of array\n";
    for (i = 0; i < 5; i++)
    {
        std::cin >> a[i];
    }
    for (i = 0; i < 5; i++)
    {
        std::cout << "\nvalue of index= " << i << "=\t" << a[i];
    }
    getch();
}