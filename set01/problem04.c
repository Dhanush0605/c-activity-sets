#include <stdio.h>
int input(int *a, int *b)
{
  printf("Enter two numbers\n");
  scanf("%d %d",a,b); 		
}

void add(int a, int b, int *sum)
{
    *sum = a+b;
}
void output(int a, int b, int sum)
{
  printf("Sum of %d + %d is %d\n",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}