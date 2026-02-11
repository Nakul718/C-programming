#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} Complex;
void input(Complex *c);
void display(Complex c);
Complex Add(Complex c1, Complex c2);
Complex Sub(Complex c1, Complex c2);
Complex Mul(Complex c1, Complex c2);

void main()
{
    Complex num1, num2, num3;

    input(&num1);
    input(&num2);

    num3 = Add(num1, num2);
    printf("Addition Result: ");
    display(num3);

    num3 = Sub(num1, num2);
    printf("Subtraction Result: ");
    display(num3);

    num3 = Mul(num1, num2);
    printf("Multiplication Result: ");
    display(num3);
}
void input(Complex *c)
{
    printf("Enter real part: ");
    scanf("%f", &c->real);

    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}
void display(Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex Add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

Complex Sub(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

Complex Mul(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    temp.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return temp;
}
