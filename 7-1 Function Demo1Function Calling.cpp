/*Function Demo1:Function Calling*/
#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void)
{
    double a;         
    int b, c, d, e;
    double r, s, t, u, v;

    a = functionM();   
    printf("%lf\n", a);

    return 0;
}

/*b ผิด double → int                     a = functionM();          */

/*c ผิด int → double                     b = functionN(a, b);  */

/*e ผิด พารามิเตอร์เกิน                      s = functionP(a,b,c,d,e);           */

/*g ผิด double → int                     c = d + functionN(r,s)     */

/*i ผิด ชนิดผิดทั้งหมด                      a = v + functionP(r, s, t, t);   */

/*j ผิด ชนิดพารามิเตอร์ผิด                   functionP(functionN(a, a), s, t, t+r);          */

/*k ผิด ชนิดพารามิเตอร์ผิด                   v = functionP(functionN(a, a), s, t, t+r);      */

