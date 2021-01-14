#include <stdio.h>

// Sum of first n natural numbers.
int Rsum(int n)
{
    if(n==0)
        return 0;
    else
        return Rsum(n-1)+n;

}

// Factorial of a number.
int Rfact(int n)
{
    if(n==1)
        return 1;
    else
        return Rfact(n-1)*n;
}

//Power evaluation
int Rpower(int x, int y)
{
    if(y==1)
        return x;
    else
        return Rpower(x,y-1)*x;
}

//Taylor series
int Rtaylor(int x,int n)
{
    if(n==0)
        return 1;
    else
        return Rtaylor(x,n-1) + Rpower(x,n)/Rfact(n);
}

void main()
{
    printf("%d",Rtaylor(5,20));
}