#include <stdio.h>
#include <math.h>
int main()
{
int n,rev=0,op;
scanf("%d",&n);
op=n;
while(n>0)
{
rev=(rev*10)+n%10;
n=n/10;
}
if(rev==op)
{
    printf("palindrome");
}
else
{
    printf("not palindrome");
}
    return 0;
}