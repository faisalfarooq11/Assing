#include<stdio.h>
#include<conio.h>

int main()
{
char choice;
printf("Time Table\n");
printf("1.Monday\n");
printf("2.Tuesday\n");
printf("3.Wednesday\n");
printf("4.Thursday\n"); 
printf("5.Friday\n");
printf("6.Saturday\n");
printf("7.Sunday\n");
printf("Enter choice\n");

scanf("%c", &choice);

if (choice=='1')
{

printf("Monday class is ICT\n");
}

else if (choice=='2')
{
 printf(" Tuesday class is programming");

}
else if (choice=='3')
{
printf("Wednesday class is Physics");

}

else if (choice=='4')

{
printf("Thursday class is English");
}

else if (choice=='5')
{
printf("Friday class is Calculus");
}
else if (choice=='6')
{
printf("Saturday is holiday\n");
}
else if (choice=='7')
{
printf("Sunday is holiday\n");
}
    return 0;
}