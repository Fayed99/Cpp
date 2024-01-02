#include <iostream>

double increment_multiply(double a, double b)
{

    std::cout << "Inside function , before increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "Inside function , after increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Returning the result
    return result;
}
int main()
{
#include <iostream>

    double h{3.00};
    double i{4.00};

    std::cout << "Outside function , before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    double incr_mult_result = increment_multiply(h, i);

    std::cout << "Outside function , after increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    return 0;
}