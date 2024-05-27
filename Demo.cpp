#include <iostream>
class Demo
{
public:
    int a, b, c;
    Demo()
    {
    }
    Demo(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Demo &operator++(int)
    {
        Demo *copy = (Demo *)malloc(sizeof(copy));
        copy->a = this->a;
        copy->b = this->b;
        copy->c = this->c;
        (this->a)++;
        (this->b)++;
        (this->c)++;
        return *copy;
    }

    Demo &operator++()
    {
        (this->a)++;
        (this->b)++;
        (this->c)++;
        return *this;
    }
    void Print()
    {
        std::cout << (this->a) << std::endl;
        std::cout << (this->b) << std::endl;
        std::cout << (this->c) << std::endl;
    }
};
int main()
{
    Demo d1(3, 4, 5);
    Demo d2(7, 5, 4);
    Demo d3;
    Demo d4;
    d3 = d1++; // d1.operator++() //No any Explicit Parameter Because of Unary Operator
    d4 = ++d2;
    d3.Print();
    d4.Print();
}
