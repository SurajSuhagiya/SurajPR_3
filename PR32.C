//WRITE A PROGRAM TO COUNT THE TOTAL NUMBER OF DIGITS IN A NUMBER.
#include<stdio.h>
#include<conio.h>
void main(){
int s,t=0;
clrscr();
printf("Enter any number:");
scanf("%d",&s);
while(s!=0){
s=s/10;
t++;}
printf("Total number of digits is: %d",t);
getch();
}
/* INPUT= Enter any number: 752
   OUTPUT= Total number of digit is: 3
*/