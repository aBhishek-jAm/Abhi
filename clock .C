\\ second project after learning operators
#include <stdio.h>
void main()
{
int h,m,s;
int d=1;
printf("enter the starting time\n");
scanf("%d%d%d",&h,&m,&s);
if(h>12 && m>60 && s>60)
{ printf("wrong time");}
while(1)
{ s++;
if(s>59)
 { s=0; m++;} 
if(m>59)
{ m=0; h++;}
if(h>12)
h=1;
printf("\nclock");
printf("\n %d : %d : %d",h,m,s);
sleep(d);
}
}
