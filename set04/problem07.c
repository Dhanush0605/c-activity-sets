#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void_output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);

int main() {
    Fraction f1, f2, sum;

    printf("Enter the first fraction (numerator denominator): ");
    f1 = input_fraction();

    printf("Enter the second fraction (numerator denominator): ");
    f2 = input_fraction();

    sum = add_fractions(f1, f2);

    output(f1, f2, sum);

    return 0;
}

Fraction input_fraction() {
    Fraction f;
    scanf("%d %d", &f.num, &f.den);
    return f;
}

int find_gcd(int a, int b) {
    if (b == 0)
        return a;
    return find_gcd(b, a % b);
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;
    sum.num = (f1.num * f2.den) + (f2.num * f1.den);
    sum.den = f1.den * f2.den;

    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;

    return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum) {
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}
