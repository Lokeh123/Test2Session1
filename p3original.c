#include<stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}

int is_prime(int n)
{
  int prime,i;
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      return 0;
    }
    else
    {
     return 1;
    }
  }
  
  return prime;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
  {
    printf("%d is not a prime number",n);
  }
  else
  {
    printf("%d is a prime numer",n);
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
}