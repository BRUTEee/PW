
#include <iostream>
using namespace std;

class Complex
{
public:
    float real;
    float imaginary;

    // Constructor
    Complex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Print complex number
    void print()
    {
        cout << real;

        if (imaginary >= 0)
            cout << " + i" << imaginary << endl;
        else
            cout << " - i" << -imaginary << endl;
    }

    // Addition
    void add(Complex c)
    {
        real = real + c.real;
        imaginary = imaginary + c.imaginary;
    }

    // Subtraction
    void subtract(Complex c)
    {
        real = real - c.real;
        imaginary = imaginary - c.imaginary;
    }

    // Multiplication
    void multiply(Complex c)
    {
        float newReal = real * c.real - imaginary * c.imaginary;
        float newImaginary = real * c.imaginary + imaginary * c.real;

        real = newReal;
        imaginary = newImaginary;
    }

    // Division
    void divide(Complex c)
    {
        float denominator = c.real * c.real + c.imaginary * c.imaginary;

        if (denominator == 0)
        {
            cout << "Division by zero is not possible." << endl;
            return;
        }

        float newReal = (real * c.real + imaginary * c.imaginary) / denominator;

        float newImaginary = (imaginary * c.real - real * c.imaginary) / denominator;

        real = newReal;
        imaginary = newImaginary;
    }
};

int main()
{
    Complex c1(3, 7);
    Complex c2(2, 4);

    cout << "First complex number: ";
    c1.print();

    cout << "Second complex number: ";
    c2.print();

    // Addition
    Complex sum = c1;
    sum.add(c2);
    cout << "Addition: ";
    sum.print();

    // Subtraction
    Complex difference = c1;
    difference.subtract(c2);
    cout << "Subtraction: ";
    difference.print();

    // Multiplication
    Complex product = c1;
    product.multiply(c2);
    cout << "Multiplication: ";
    product.print();

    // Division
    Complex quotient = c1;
    quotient.divide(c2);
    cout << "Division: ";
    quotient.print();

    return 0;
}
