//WRITE A PROGRAM TO PRINT ALL ALPHABETS FROM A TO Z BY SKIPPIMG 3 ALPHABETS USING DO WHILE LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
char s;
clrscr();
for(s='a';s<='z';s++){
printf("%c,",s);
s+=3;}
getch();
}

/* Output= a,e,i,m,q,u,y
*/