#include<iostream>
#include "D.cpp"

int main()
{
    int input;
    std::cout << "Please enter an integer that has only 2, 3 and 5 as its prime factors:" << std::endl;
    std::cin >> input;
    D* object = new D();
    object->update_val(input);
    object->print_val();
    return 0;
}