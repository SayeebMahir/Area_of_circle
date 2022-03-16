#include <stdio.h>
int main(){
double r, area;
double pie=3.14159;
printf("Enter the value of radius ");
scanf("%lf", &r);
area=pie*r*r;
printf("The Area of the circle is:%lf",area);
return 0;
}
