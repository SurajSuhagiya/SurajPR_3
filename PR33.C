//WRITE A PROGRAM TO FIND THE SUM OF A FIRST AND THE LAST DIGIT OF A NUMBER.
#include<stdio.h>
#include<conio.h>
void main(){
int n,s,f,l;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
f=n%10;
while(n>10){
s=n/10;
n=s;}
l=s+f;
printf("The sum of the first and the last digit: %d",l);
getch();
}
/* Input = Enter any number: 384
   Output= The sum of the first and the last digit: 7
*/