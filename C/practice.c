ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
                                 Main Logic for Coding
000000000000000000000000000000000000000000000000000000000000000

1. Palindrome Number:


    while(t != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + t%10;
        t = t/10;
            if (n == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    }
     
// Input: 
// Output: 
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 121 etc.       



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reverse = 0, t;
    printf("Enter\n");
    scanf("%d", &n);
    t = n;
    while(t != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + t%10;
        t = t/10;
    }
    if (n == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}



2. Perfect Number:


    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }

// Input: 
// Output: 
// 6, 28, 496.....
// 6 = 1 + 2 + 3
//for 6 ... addition of factors without 6 = same 6 is called perfect number




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, rem, sum = 0, i;
    printf("Enter a number!\n");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    return 0;
}






3. Factorial Using Recursion:


    {
        if (n == 0)
            return 1;
        else
            return (n * (factorial (n-1)));
    }




//#include <stdio.h>
//#include <stdlib.h>
//long factorial (int n);
//
//int main()
//{
//    int n;
//    long f;
//    printf("Enter!\n");
//    scanf("%d", &n);
//
//    if (n < 0)
//        printf("Negative Integers isn't defined");
//    else
//    {
//        f = factorial(n);
//        printf("%ld", f);
//    }
//
//    long factorial ( int n)
//    {
//        if (n == 0)
//            return 1;
//        else
//            return (n * (factorial (n-1)));
//    }
//    return 0;
//}






#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}







3. Factorial Using Loop:


    for(i=1;i<=number;i++){    
      fact=fact*i;  





#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   





Or,


    i = n;
    while (i != 0)
    {
        a = a * i;
        i--;
    }




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a = 1;
    scanf("%d", &n);
        i = n;
    while (i != 0)
    {
        a = a * i;
        i--;
    }

    printf("%d", a);
    return 0;
}


4. GCD and LCM:


int a = n1;
int b = n2;

while(n2 != 0)
{
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
}
    gcd = n1;
lcm = (a * b) / n1;


// Input: 
// Output: 







#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2, rem, lcm, gcd;
scanf("%d %d", &n1, &n2);
int a = n1;
int b = n2;

while(n2 != 0)
{
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
}
    gcd = n1;
lcm = (a * b) / n1;
{
    printf("gcd: %d\n", gcd);
    printf("lcm: %d", lcm);
}
}






5. Prime Number:


for (i=1; i<=n; i++)
    if(n%i==0)

    count++;

if (count==2)


// Input: 
// Output: 






#include <stdio.h>
//#include <stdlib.h>
//int prime(int);

int main()
{
//    int i, j, n, result;
//    printf("Enter!\n");
//    scanf("%d", &n);
//
//    result = prime(n);
//    if (result == 0)
//        printf("Is not a prime");
//    else
//        printf("Is a prime");
//    return 0;
//}
//
//
//int prime (int n)
//{
//int i;
//
//if (n<=1)
//    return 1;
//for(i=2; i<=n/2;i++)
//{
//    if (n%i==0)
//        return 0;
//}
//return 1;


//int n, i, count=0;
//printf("Enter!");
//scanf("%d", &n);
//
//
//for (i=1; i<=n; i++)
//{
//    if(n%i==0)
//        {
//    count++;
//}
//
//}
//if (count==2)
//        {
//
//    printf("Prime");}
//else
//    {printf("Not prime");
//        }
//
//}



//#include <stdio.h>
//int main()
//{
//   int i, num, p = 0;
//   printf("Please enter a number: \n");
//   scanf("%d", &num);
//   for(i=1; i<=num; i++)
//   {
//      if(num%i==0)
//      {
//         p++;
//      }
//   }
//   if(p==2)
//   {
//      printf("Entered number is %d "\
//             "and it is a prime number.",num);
//   }
//   else
//   {
//      printf("Entered number is %d "\
//             "and it is not a prime number.",num);
//   }
//}






int n, i, count=0;
printf("Enter!");
scanf("%d", &n);


for (i=1; i<=n; i++)
    if(n%i==0)

    count++;

if (count==2)


    printf("Prime");
else
    printf("Not prime");


}







Prime Factors

    for(i=2; n>1; i++)

    {
        while(n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }


// Input: 30
// Output: 2 3 5





//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
////////    printf("Hello world!\n");
////////    return 0;
//int n, i, count, j;
//scanf("%d", &n);
//
//for (i=1; i<=n; i++)
////    printf("1st:%d ", i);
//{
////         count = 0;
//    if(n%i==0)
//        count = 0;
////        {
////            printf("%d\n", i);
////        }
//
//        for(j=1; j<=i; j++)
////            printf("%d\n", j);
//    {
//        if(i%j==0)
//            count++;
//        if(count==2)
////////            printf("%d ", i);
//        {
//            printf("%d ", i);
//        }
//    }
////////        count++;
////////    if(count == 2)
////////    {
////////
////////        printf("%d ", i);
////////    }
////////printf("%d", i);
//}
////////printf("%d", i);
//return 0;
//}

























//////
//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////  int main(void)
//////    {
//////        int n;
//////     //int n = 8;
//////     scanf("%d", &n);
//////    // int n = 75;
//////    // int n = 18;
//////     //printf("All prime factors of %d are: ",n);
//////     if (n>0)
//////	  {
//////       while (n%2==0)
//////        {
//////            printf("2 ");
//////            n = n / 2;
//////        }
//////
//////        for (int i = 3; i <= sqrt(n); i+= 2)
//////        {
//////            while (n%i == 0)
//////            {
//////                printf("%d ",i);
//////                n /= i;
//////            }
//////        }
//////        if (n > 2)
//////            printf("%d ",n);
//////       }
//////       return 0;
//////	}





























#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    primefactors(n);

    return 0;
}


void primefactors(int n)
{
    int i;
    for(i=2; n>1; i++)
 //       printf("%d", i);
    {
        while(n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    printf("\n");
}








//////#include<stdio.h>
//////#include <stdlib.h>
//////
//////int main()
//////{
//////    int n, i;
//////    scanf("%d", &n);
//////
//////    for(i=2; n>1; i++)
//////
//////    {
//////        while(n%i == 0)
//////        {
//////            printf("%d ", i);
//////            n = n/i;
//////        }
//////    }
//////}






6. Fibonacci series using recursion:


for (i=0; i<n; i++)
{
    printf("%d", feb(i));
}
.......
{
  if (n == 0 || n == 1)
    return n;
  else 
     return (feb(n-1) + feb(n-2));
}

// Input: 5
// Output: 0 1 1 2 3




or, 

#include<stdio.h>

int main()

{

    int j, n, i, ar[1000];

    scanf("%d", &n);

    ar[0] = 0;

    ar[1] = 1;

    for(i = 2;i < n;i++){

        ar[i] = ar[i-2] + ar[i-1];

    }

    printf("0");

    for(j = 1;j < n;j++){

        printf(" %d", ar[j]);

    }

    printf("\n");

    return 0;

}



// Input: 5
// Output: 0 1 1 2 3



7. Binary to Decimal

  
    for(i=0; n != 0; i++)
    {
        rem = n%10;
        n /= 10;
        decimal += rem * pow(2, i);
    }


// Input: 101011
// Output: 43





#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    int i, rem, decimal = 0, n;
    scanf("%d", &n);

//    while(n != 0)
    {
            for(i=0; n != 0; i++)
    {
        rem = n%10;
        n /= 10;
        decimal += rem * pow(2, i);
    }
//    i++;
    }


    printf("%d", decimal);
}






8. Decimal to Binary


    while(n != 0)
    {
    rem = n%2;
    n = n/2;
    {
            a[i] = rem;
    }
        i++;
    }
    for(i=i-1; i>=0; i--)


// Input: 25
// Output: 11001





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rem, n, a[50], i;

    scanf("%d", &n);

    while(n != 0)
    {
    rem = n%2;
    n = n/2;
    {

            a[i] = rem;

    }
        i++;
    }

    for(i=i-1; i>=0; i--)
    {
        printf("%d", a[i]);
    }

//    int a[50], i;
// for(i=i-1; i>=0; i--)
//    {
//        printf("%d", a[i]);
//    }


}






9.  nCr


nminusr = n-r;

        for (i = 1; i<=n; i++)
    {
        a = a*i;
    }
printf("a: %d\n", a);

        for (j = 1; j<=r; j++)
    {
        b = b*j;
    }
printf("b: %d\n", b);

        for (k = 1; k<=nminusr; k++)
    {
        c = c*k;
    }
printf("c: %d\n", c);
    ncr = a/(b*c);


// Input: 6 3
// Output: 20





#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, a = 1, j, r, b = 1, k, nminusr, c = 1, ncr;

scanf("%d", &n);
scanf("%d", &r);
nminusr = n-r;

        for (i = 1; i<=n; i++)
    {
        a = a*i;
    }
printf("a: %d\n", a);

        for (j = 1; j<=r; j++)
    {
        b = b*j;
    }
printf("b: %d\n", b);

        for (k = 1; k<=nminusr; k++)
    {
        c = c*k;
    }
printf("c: %d\n", c);
    ncr = a/(b*c);


    printf("%d", ncr);





 //..........................................


//////     {
//////        for (i = 1; i<=n; i++)
//////    {
//////        a = a*i;
//////    }
//////
//////
//////        for (j = 1; j<=r; j++)
//////    {
//////        b = b*j;
//////    }
//////
//////
//////        for (k = 1; k<=nminusr; k++)
//////    {
//////        c = c*k;
//////    }
////// }
//////    ncr = a/(b*c);
//////
//////
//////    printf("%d", ncr);


//...............................

////int i, n, a = 1;
////scanf("%d", &n);
////i = n;
////    while (i != 0)
////    {
////        a = a * i;
////        i--;
////    }
////    {
////        printf("%d", a);
////    }
}







10. Pattern Matching


        for (i=1; i <= n; i++)
        {
            for (space = 1; space<=n-i; space++)
            {
                printf(" ");
            }

            for(star = 1; star <= 2*i-1; star++)
                {
                    printf("*");
                }

// Input: 5
// Output: 5 rows piramid figure will be shown
    *    
   ***   
  *****
 *******
*********





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, space, star;
    scanf("%d", &n);
    {
        for (i=1; i <= n; i++)
        {
            for (space = 1; space<=n-i; space++)
            {
                printf(" ");
            }

            for(star = 1; star <= 2*i-1; star++)
                {
                    printf("*");
                }
                    printf("\n");
        }
    }
}








//////    int i, n, space, star;
//////    scanf("%d", &n);
//////    {
//////        for (i=1; i <= n; i++)
//////        {
//////            for (space = 1; space<=n-1; space++)
//////
//////                printf(" ");
//////            {
//////                for(star = 1; star <= 2*i-1; star++)
//////                {
//////
//////                    printf("*");
//////
//////                }
//////              printf("\n");
//////            }
//////
//////        }
//////
//////    }
//////
//////}






Pattern Matching simple pattern



for(i=1; i<=lines; i++)
{
    for(star=1; star<=i; star++)
    {
        printf("*");
    }



// Input: 5
//Output:
*
**
***
****
*****






#include <stdio.h>
#include <stdlib.h>

int main()
{
//////    printf("Hello world!\n");
//////    return 0;
int lines, i, star;
scanf("%d", &lines);
for(i=1; i<=lines; i++)
{
    for(star=1; star<=i; star++)
    {
        printf("*");
    }
        printf("\n");
}
}







11. Number Pattern



for(i=1; i<= rows; i++)
{
    for(num=1; num<=i; num++)
        printf("%d", num);
            printf("\n");
}



// Input: 5
//Output:
1
12
123
1234
12345






#include <stdio.h>
#include <stdlib.h>

//int main()
//{
////////    printf("Hello world!\n");
////////    return 0;
//
//int rows, i, num;
//scanf("%d", &rows);
////////printf("%d", rows);
//for(i=1; i<= rows; i++)
//{
//    for(num=1; num<=i; num++)
//        printf("%d", num);
//            printf("\n");
//}
////////        printf("\n");
//
////////Input: 5
////////Output:
////////1
////////12
////////123
////////1234
////////12345
//}








//////int main()
//////{
//////
//////int rows, i, dash, num1, value, num2;
//////scanf("%d", &rows);
////////////printf("Rows: %d\n", rows);
//////for(i=1; i<= rows; i++)
//////////////    value = i;
////////////printf("i:%d\n", i);
////////////printf("value:%d\n", value);
//////{
//////    value = i;
//////    for(dash=1; dash<=rows-i; dash++)
//////
//////    {
////////////        printf("dash:%d", dash);
//////        printf(" ");
//////    }
//////
//////    for(num1=1; num1<=i; num1++)
//////    {
//////        printf("%d", value);
//////        value++;
//////    }
//////    value--;
//////    value--;
//////////////    --value;
//////////////    --value;
//////    for(num2=1; num2<i; num2++)
//////    {
//////        printf("%d", value);
//////        value--;
//////    }
//////    printf("\n");
//////}
//////
////////////// Input: 5
//////////////Output:
////////////    1
////////////   232
////////////  34543
//////////// 4567654
////////////567898765
//////
//////}









int main()
{

int rows, i, dash, num1, value, num2;
scanf("%d", &rows);
//////printf("Rows: %d\n", rows);
for(i=1; i<= rows; i++)
////////    value = i;
//////printf("i:%d\n", i);
//////printf("value:%d\n", value);
{
    value = 1;
    for(dash=1; dash<=rows-i-2; dash++)

    {
//////        printf("dash:%d", dash);
        printf(" ");
    }

    for(num1=1; num1<=i; num1++)
    {
        printf("%d", value);
//////        value++;
        value = value * (i - num1) / num1;
//    }
//    value--;
//    value--;
//////////    --value;
//////////    --value;
//    for(num2=1; num2<i; num2++)
//    {
//        printf("%d", value);
//        value--;
//    }
//    printf("\n");
}
        printf("\n");
//////// Input: 5
////////Output:
//////  1
////// 11
//////121
//////1331
//////14641

}
}








////////


Number Pattern



for(i=1; i<= rows; i++)
{
    value = i;
    for(dash=1; dash<=rows-i; dash++)

    {
        printf(" ");
    }

    for(num1=1; num1<=i; num1++)
    {
        printf("%d", value);
        value++;
    }
    value--;
    value--;
    for(num2=1; num2<i; num2++)
    {
        printf("%d", value);
        value--;
    }
    printf("\n");
}



// Input: 5
//Output:
    1
   232
  34543
 4567654
567898765



Pascal Number Pattern



    value = 1;
    for(num1=1; num1<=i; num1++)
    {
        printf("%d", value);
        value = value * (i - num1) / num1;
    }
        printf("\n");



Input: 5
Output:
1
11
121
1331
14641





12. Armstrong Number


    nown = n;
    while(nown>0)
    {
        r = nown%10;
        c = r*r*r;
        sum = sum +  c;
        nown = nown/10;
    }
    if(sum == n)


Input: 153
Output: Armstrong

Armstrong number is a number that is equal to the sum of cubes of its digits. ... For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.







#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, c, sum = 0, nown;

    scanf("%d", &n);
    nown = n;
    while(nown>0)
    {
        r = nown%10;
        c = r*r*r;
        sum = sum +  c;
        nown = nown/10;
    }
    if(sum == n)
    {
        printf("Armstrong");
    }

    else
    {
        printf("Not Armstrong");
    }
    return 0;
}



















////////with n digits
//////
//////#include <math.h>
//////#include <stdio.h>
//////
//////int main() {
//////   int num, originalNum, remainder, n = 0;
//////   float result = 0.0;
//////
//////   printf("Enter an integer: ");
//////   scanf("%d", &num);
//////
//////   originalNum = num;
//////
//////   // store the number of digits of num in n
//////   for (originalNum = num; originalNum != 0; ++n) {
//////       originalNum /= 10;
//////   }
//////
//////   for (originalNum = num; originalNum != 0; originalNum /= 10) {
//////       remainder = originalNum % 10;
//////
//////      // store the sum of the power of individual digits in result
//////      result += pow(remainder, n);
//////   }
//////
//////   // if num is equal to result, the number is an Armstrong number
//////   if ((int)result == num)
//////    printf("%d is an Armstrong number.", num);
//////   else
//////    printf("%d is not an Armstrong number.", num);
//////   return 0;
//////}
















////////up to 2^64-1
//////#include <stdio.h>
//////#define L long long
//////int check_armstrong(L);
//////L power(int, int);
//////
//////int main () {
//////  L n;
//////
//////  printf("Input a number\n");
//////  scanf("%lld", &n);
//////
//////  if (check_armstrong(n) == 1)
//////    printf("%lld is an armstrong number.\n", n);
//////  else
//////    printf("%lld isn't an armstrong number.\n", n);
//////
//////  return 0;
//////}
//////
//////int check_armstrong(L n) {
//////  L sum = 0, t;
//////  int remainder, digits = 0;
//////
//////  t = n;
//////
//////  while (t != 0) {
//////    digits++;
//////    t = t/10;
//////  }
//////
//////  t = n;
//////
//////  while (t != 0) {
//////    remainder = t%10;
//////    sum = sum + power(remainder, digits);
//////    t = t/10;
//////  }
//////
//////  if (n == sum)
//////    return 1;
//////  else
//////    return 0;
//////}
//////
//////L power(int n, int r) {
//////  int c;
//////  L p = 1;
//////
//////  for (c = 1; c <= r; c++)
//////    p = p*n;
//////
//////  return p;
//////}







13. Swapping without using third variable



    a = a + b;
    b = a - b;
    a = a - b;


Input: 1 3
Output: 3 1






#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);

}







14. Reverse Array



for(i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
for(i=n-1; i>=0; i--)
{
    printf("%d ", a[i]);
}



Input: 5
Input: 10 20 30 40 50
Output: 50 40 30 20 10







#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, a[100];

scanf("%d", &n);

for(i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
for(i=n-1; i>=0; i--)
{
    printf("%d ", a[i]);
}
}






15. Insert an element in an array



for(i=n-1; i>=P-1; i--)
    a[i+1] = a[i];
    a[P-1] = PE;

for(i=0; i<=n; i++)
    printf("%d ", a[i]);



Input: 5
Input: 10 20 30 40 50
Input P = 3
Input PE = 11
Output: 10 20 11 30 40 50






#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, i, a[100], P, PE;

printf("Enter the array: ");
scanf("%d", &n);

printf("Enter the array element: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

printf("Enter the position: ");
scanf("%d", &P);

printf("Enter the position element: ");
scanf("%d", &PE);

    for(i=n-1; i>=P-1; i--)
    a[i+1] = a[i];
    a[P-1] = PE;

for(i=0; i<=n; i++)
    printf("%d ", a[i]);
}







16. Remove element from array



for(i=0; i<P-1; i++)
        printf("%d ", a[i]);

for(i=P; i<n; i++)
        printf("%d ", a[i]);



Input: 5
Input: 10 20 30 40 50
Input P = 3
Output: 10 20 40 50





#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, a[100], P, PE;

scanf("%d", &n);
for (i=0; i<n; i++)
    scanf("%d", &a[i]);

scanf("%d", &P);

for(i=0; i<P-1; i++)
        printf("%d ", a[i]);

for(i=P; i<n; i++)
        printf("%d ", a[i]);
}




//////int main()
//////{
//////
//////int n, i, a[100], P, PE;
//////
//////scanf("%d", &n);
//////
//////for(i=0; i<n; i++)
//////scanf("%d", &a[i]);
//////
//////scanf("%d", &P);
//////n--;
//////
//////    for(i=P; i<=n; i++)
//////    a[i-1] = a[i];
//////
//////for(i=0; i<n; i++)
//////    printf("%d ", a[i]);
//////}






17. Merge two arrays


{
    for(i=0; i<m; i++)
    {
        printf("%d ", a[i]);
    }

    for(j=0; j<n; j++)
    {
        a[i+1] = b[j];
        printf("%d ", a[i+1]);
    }
}



Input: 5
Input: 1 2 3 4 5
Input = 4
Input: 1 2 3 4
Output: 1 2 3 4 5 1 2 3 4








#include <stdio.h>
#include <stdlib.h>

int main()
{
//////    printf("Hello world!\n");
//////    return 0;

int m, i,n, j, a[100], b[100];

scanf("%d", &m);
for(i=0; i<m; i++)
scanf("%d", &a[i]);

scanf("%d", &n);
for(j=0; j<n; j++)
scanf("%d", &b[j]);

{
    for(i=0; i<m; i++)
    {
        printf("%d ", a[i]);
    }

    for(j=0; j<n; j++)
    {
        a[i+1] = b[j];
        printf("%d ", a[i+1]);
    }
}

}






18. Print a string using a loop


{
    char a[100];
    int i=0;

    gets(a);
    while(a[i]!='\0')
    {
            printf("%c", a[i]);
            i++;
    }
    return 0;
}


Input: My name is khan
Output: My name is khan



19. Reverse a string



{
char s[100];
int n;

gets(s);
n=strlen(s);

for(n=n-1; n>=0; n--)

putchar(s[n]);
}



Input: My name is khan
Output: nahk si eman yM




20. Word Count



n=strlen(s);
for(i=0; i<=n; i++)
{
    if(s[i]==' ' ||  s[i]=='\n')
    {
        count++;
    }

}



Input: My name is khan
Output: 4

ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

