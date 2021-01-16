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

//Taylor Series Horner’s Rule
double Taylor_Horner(int x, int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return Taylor_Horner(x,n-1);

}

//Taylor Series Iterative
double Taylor_iterative(int x, int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;

    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

//fibonacci nth term
int fib(int n)
{
    int t0=0,t1=1,s=0,i;

    if(n<=1) return n;

    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }

    return s;
}

int F[10];

//fibonacci nth term using recursion
int mfib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int main() {
    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;

    printf("%d \n", mfib(6));
    return 0;
}
