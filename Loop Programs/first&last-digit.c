#include <stdio.h>
int main()
{
int n,last,first;
scanf("%d",&n); 
last=n%10;
first=n;
while(first>=10)
{
first=first/10;
}
printf("%d  %d",last,first);
    return 0;
}