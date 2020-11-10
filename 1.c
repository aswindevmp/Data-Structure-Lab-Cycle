//1. Write a program to read two polynomials and store them in an array. Calculate the sum of the
two polynomials and display the first polynomial, second polynomial and the resultant
polynomial.//

#include<stdio.h>
#include<math.h>
struct poly
{
   float coeiff;
   int exp;
}x[60],y[60],z[60];

int main()
{
  int i;
  int Deg1,Deg2;
  printf("Polynomial-1 Degree:\n");
  scanf("%d",&Deg1);
  for(i=0;i<=Deg1;i++) 
    {
      printf("\n Coeifficient Of x^ %d : \n",i);
      scanf("%f",&x[i].coeiff);
      x[i].exp=i;
    }
    
  printf("Polynomial-2 Degree:\n");
  scanf("%d",&Deg2);
  for(i=0;i<=Deg2;i++)
    {
      printf("\n Coeifficiant Of x^ %d: \n",i);
      scanf("%f",&y[i].coeiff);
      y[i].exp=i;
    }
    
  printf("\nFirst Polynomial is \n");
  for(i=0;i<=Deg1;i++)
    printf("+ %.2f x^ %d",x[i].coeiff,x[i].exp);
    
  printf("\nSecond Polynomial is \n");
  for(i=0;i<=Deg2;i++)
    printf("+ %.2f x^ %d",y[i].coeiff,y[i].exp);
    
  if(Deg1>Deg2)
  {
    for(i=0;i<=Deg2;i++)
     {
       z[i].coeiff=x[i].coeiff+y[i].coeiff;
       z[i].exp=x[i].exp;
     }
    for(i=0;i<=Deg1;i++)
     {
      z[i].coeiff=x[i].coeiff;
      z[i].coeiff=x[i].exp;
     }
  }
  
  else
  {
    for(i=0;i<=Deg1;i++)
     {
      z[i].coeiff=x[i].coeiff+y[i].coeiff;
      z[i].exp=x[i].exp;
     }
    for(i=0;i<=Deg2;i++)
     {
      z[i].coeiff=y[i].coeiff;
      z[i].exp=y[i].exp;
     }
  }
  
  printf("\n Added Polynomial is : \n");
  for(i=0;i<=Deg2;i++)
    printf("+ %.2f x^ %d", z[i].coeiff,z[i].exp);
}          
  
