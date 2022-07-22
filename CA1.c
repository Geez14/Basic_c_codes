
#include <stdio.h>
#include <math.h>

typedef struct number
{
    double real;
    double imag;
} complex;

// for dev c++ or turbo c User
void print_complex(complex *cx);
void print_real(complex *root1, complex *root2);



// representing the roots in imaginary and real form to user.
void print_complex(complex *cx)
{   printf("Root of the given equation is: ");
    printf("%.2lf", cx->real);

    if (cx->imag != 0.0)
    {
        if (cx->imag < 0.0)
            {
                printf(" - i %.4f\n", -cx->imag);
            }
        else
            {
                printf(" + i %.4f\n", cx->imag);
            }
    }
}



void print_real(complex *root1, complex *root2)
{
    printf("Root of the given equation is : ");
    printf("{ %.2lf , %.2lf }",root1->real,root2->real);
}



int main()
{
    int a, b, c;
    complex x1, x2;
    x1.imag = x2.imag = 0;// initializing the value of imaginary 0
    int determinant;

    // user input and representation.
    scanf("%d %d %d", &a, &b, &c);
    printf("%dx^2+%dx+%d\n", a, b, c);


if (a != 0)
    {
        
        determinant = (b * b) - (4 * a * c);
    
    if (determinant < 0)
            {
            x1.real = -b / (2.0 * a);
            x1.imag = sqrt(-determinant) / (2.0 * a);
            x2.real = -b / (2.0 * a);
            x2.imag = -(sqrt(-determinant) / (2.0 * a));
    
            print_complex(&x1);
            print_complex(&x2);
            }
    
    else
            {
            x1.real = -b / (2.0 * a) + sqrt(determinant) / (2.0 * a);
            x2.real = -b / (2.0 * a) - sqrt(determinant) / (2.0 * a);
    
            print_real(&x1,&x2);
            }
    }


else if( a==0 && b!=0)
    {
        printf("Root of the given equation is = %d",-c/b);
    }


else
    {
        printf("Cannot exist!!");
    }


return 0;
}
