
#include <iostream>
#include <numeric>   // For std::gcd
#include <stdexcept> // For invalid_argument
using namespace std;

class Fraction
{
public:
    long long num;
    long long den;

    // 1. Default constructor: creates 0/1
    Fraction() : num(0), den(1)
    {
    }

    // 2. Parameterized constructor
    Fraction(long long num, long long den)
    {
        if (den == 0)
            throw invalid_argument("Denominator cannot be zero");

        this->num = num;
        this->den = den;

        simplify();
    }

    // 3. Print the fraction
    void print() const
    {
        cout << num << "/" << den << endl;
    }

    // 4. Simplify the fraction
    void simplify()
    {
        if (den == 0)
            throw invalid_argument("Denominator cannot be zero");

        // Keep the denominator positive
        if (den < 0)
        {
            num = -num;
            den = -den;
        }

        // GCD of numerator and denominator
        long long hcf = gcd(num, den);

        if (hcf != 0)
        {
            num /= hcf;
            den /= hcf;
        }
    }

    // 5. Member function: multiply current fraction
    void multiply(const Fraction &f)
    {
        num = num * f.num;
        den = den * f.den;

        simplify();
    }

    // 6. Member function: add to current fraction
    void add(const Fraction &f)
    {
        long long newNum = num * f.den + den * f.num;
        long long newDen = den * f.den;

        num = newNum;
        den = newDen;

        simplify();
    }

    // 7. Member function: subtract from current fraction
    void subtract(const Fraction &f)
    {
        long long newNum = num * f.den - den * f.num;
        long long newDen = den * f.den;

        num = newNum;
        den = newDen;

        simplify();
    }

    // 8. Member function: divide current fraction
    void divide(const Fraction &f)
    {
        if (f.num == 0)
            throw invalid_argument("Cannot divide by zero");

        long long newNum = num * f.den;
        long long newDen = den * f.num;

        num = newNum;
        den = newDen;

        simplify();
    }
};

// 9. Standalone function: returns a new multiplied fraction
Fraction multiply(const Fraction &f1, const Fraction &f2)
{
    return Fraction(f1.num * f2.num,
                    f1.den * f2.den);
}

// 10. Standalone function: returns a new added fraction
Fraction add(const Fraction &f1, const Fraction &f2)
{
    return Fraction(f1.num * f2.den + f2.num * f1.den,
                    f1.den * f2.den);
}

// 11. Standalone function: returns a new subtracted fraction
Fraction subtract(const Fraction &f1, const Fraction &f2)
{
    return Fraction(f1.num * f2.den - f2.num * f1.den,
                    f1.den * f2.den);
}

// 12. Standalone function: returns a new divided fraction
Fraction divide(const Fraction &f1, const Fraction &f2)
{
    if (f2.num == 0)
        throw invalid_argument("Cannot divide by zero");

    return Fraction(f1.num * f2.den,
                    f1.den * f2.num);
}

int main()
{
    Fraction f1(2, 5);
    Fraction f2(3, 5);

    cout << "Initial fractions:" << endl;
    cout << "f1 = ";
    f1.print();
    cout << "f2 = ";
    f2.print();

    // Standalone functions: original inputs stay unchanged
    Fraction ans1 = multiply(f1, f2);
    Fraction ans2 = add(f1, f2);
    Fraction ans3 = subtract(f1, f2);
    Fraction ans4 = divide(f1, f2);

    cout << "\nStandalone function results:" << endl;

    cout << "Multiplication: ";
    ans1.print();

    cout << "Addition: ";
    ans2.print();

    cout << "Subtraction: ";
    ans3.print();

    cout << "Division: ";
    ans4.print();

    cout << "\nOriginal fractions remain unchanged:" << endl;
    cout << "f1 = ";
    f1.print();
    cout << "f2 = ";
    f2.print();

    // Member functions: modify f1 itself
    cout << "\nMember function results:" << endl;

    f1.multiply(f2);
    cout << "After f1.multiply(f2): ";
    f1.print();

    // Reset f1 to demonstrate addition independently
    f1 = Fraction(2, 5);
    f1.add(f2);
    cout << "After f1.add(f2): ";
    f1.print();

    f1 = Fraction(2, 5);
    f1.subtract(f2);
    cout << "After f1.subtract(f2): ";
    f1.print();

    f1 = Fraction(2, 5);
    f1.divide(f2);
    cout << "After f1.divide(f2): ";
    f1.print();

    return 0;
}
