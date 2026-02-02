/*Function Demo1:Function Calling*/
#include<stdio.h>
int checkNumber(int n1, int n2);
int multiply(int n1, int n2);

int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (checkNumber(a,b))
    {
    	printf("%d\n",multiply(a,b));
	}  
    else
    {
    	 printf("Reject\n");
	}
       
    return 0;
}


int checkNumber(int n1, int n2)
{
    if (n1 > 20 && n2 <= 60)
        return 1;   // valid
    else
        return 0;   // invalid
}

int multiply(int n1, int n2)
{
    return n1 * n2;
}

