#include <cs50.h>
#include <stdio.h>

long get_n(void);
int calculate_length(long n);
int calculate_last(long n);
int luhn_alg(long n);


int main(void)
{


    long n = get_n();

    int luhn = luhn_alg(n);
      //printf("Luhn %d \n", luhn);


    int len = calculate_length(n);
        //printf("Uzunluk %d \n", len);
          if (len != 5 && len !=6 && len != 7)
            {
                printf("Invalid");
                return 0;
            }


    int b = calculate_last(n);
    //printf("İlk Sayı %d \n ", b);

    if ( len == 6 && b > 51 && b<55)
      {
        printf("MasterCard \n \n");
      }
    else if ( len==5 )
      {
        if(b==34 || b==37 )
        printf("American Express \n");
      }

    else if ( len==6 || len == 7 )
      {
        if(b>40 && b<49)
        printf("Visa \n");
      }
        else
          {
            printf("Invalid Cart");
            return 0;
          }

    }

 long get_n(void)
{
    long a ;
    do
    {
      a=get_long("Kart Numarası: ");
    }
   while(a<1);
   return a;
}

int calculate_length(long n)
{
  int len = 0;
  do
  {
    n = n / 10;
    ++len;
  } while (n > 0);
  return len;
}

int calculate_last(long n)
{
  do
  {
    n = n / 10;
  } while (n > 100);
    return n;
}

int luhn_alg(long n)
{
  int ttl1 = 0; // sum doubled of numbers
  int ttl2 = 0; // sum of normal numbers
  int f = 0; // count
  int d = 0; // 2. count
  int sum = 0;

  int lad = n % 10;

  do
{
    n = n / 10;
    int z = n % 10;
    f++;
    d++;
    if ( f % 2 == 0)
    ttl2= ttl2+z;
    if ( d % 2 == 1)
    ttl1= ttl1+z;
    sum = lad + ttl1*2 + ttl2;

} while (n > 1);
  return sum;

}


