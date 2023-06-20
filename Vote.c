#include<stdio.h>

#include<conio.h>

int main()

{

int age;

printf("Enter the age of the person: ");

scanf("%d",&age);

if(age>=18)

printf("The person is eligible to vote.");

else

printf("The person is not eligible to vote.");

getch();

return 0;

}
