#include<stdio.h>
#include<math.h>
//take input and add     1
/*int main(){
   int a,b;
   printf("ENter a: ");
   scanf("%d",&a);
   printf("Enter b: ");
   scanf("%d",&b);
   int c=a+b;
   printf("c=%d",c);
}*/
//Write a C program to print the following characters in reverse.  2
/*int main(){
   char a='X';
   char b='M';
   char c='L';
   printf("The reverse of %c%c%c is %c%c%C",a,b,c,c,b,a);
}*/
//Write a C program to compute the perimeter and area of a rectangle with a  3
/*int main(){
   int a,b,area,perimeter;
   printf("Enter the lenght: ");
   scanf("%d",&a);
   printf("Enter the width: ");
   scanf("%d",&b);
   area=a*b;
   perimeter=2*(a+b);
   printf("The area is  =%d\n",area);
   printf("The perimeter is =%d",perimeter);
}*/
//Write a C program to compute the perimeter and area of a circle with a given 4
/*int main(){
   float area,perimeter;
   float r;
   printf("ENetr the radius");
   scanf("%f",&r);
   area=3.14*r*r;
   perimeter=2*3.14*r;
   printf("The area is =%f\n",area);
   printf("The perimeter is =%f",perimeter);
}*/
//Write a C program to convert specified days into years, weeks and days.  5
/*int main(){
   int days,weeks,years;
   printf("Enter the no of days: ");
   scanf("%d",&days);
   years=days/365;
   days=days%365;
   weeks=days/7;
   days=days%7;
   printf("The years=%d\n",years);
   printf("The weeks=%d\n",weeks);
   printf("The days=%d",days);
}*/
//Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value. 6
/*int main(){
   int item1,item2;
   int n_I1,n_I2;
   float avg;
   printf("Enetr weight of item");
   scanf("%d",&item1);
   printf("eneter the no of items purchesed");
   scanf("%d",&n_I1);
   printf("Enetr weight of item");
   scanf("%d",&item2);
   printf("eneter the no of items purchesed");
   scanf("%d",&n_I2);
   avg=(item1*n_I1+item2*n_I2)/(n_I1+n_I2);
   printf("Average=%f",avg);
}*/
//make a pointer 7
/*int main(){
   int x=10;
   int *j=&x;
   printf("%d",*j);
}*/
//Write a C program that accepts three integers and finds the maximum of three.  8
/*int main(){
   int a,b,c;
   printf("Enter the first element:");
   scanf("%d",&a);
   printf("Enter the second element:");
   scanf("%d",&b);
   printf("Enter the third element:");
   scanf("%d",&c);
   if(a>b && a>c){
      printf("maximum is %d",a);
   }
   if(a<b){
      if(b<c){
         printf("maximum is %d",c);
      }
      else{
         printf("maximum is %d",b);
      }
   }
      return 0;
}*/
//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points). 9
/*int main(){
   int d;
   float f,m;
   printf("Enter the distance traveled:");
   scanf("%d",&d);
   printf("Enter the fuel spent:");
   scanf("%f",&f);
   m=d/f;
   printf("The average milage is :%.2f",m);
   return 0;
}*/
//Write a C program to calculate the distance between two points. 11
/*int main(){
   int x1=25;
   int y1=15;
   int x2=35;
   int y2=10;
   float a;
   a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
   printf("The distance is %.3f",sqrt(a));
}*/
//Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes. 12
/*rite a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
Expected Output:
Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:*/