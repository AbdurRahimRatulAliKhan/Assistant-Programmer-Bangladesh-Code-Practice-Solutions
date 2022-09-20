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






3. Factorial Using Recursion:

long int factorial (int n)
    {
        if (n == 0)
            return 1;
        else
            return (n * (factorial (n-1)));
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






5. Prime Number:

int i;
if(n<=1) return 1;

for(i=2; i<= n/2; i++)
{
	if(n%i == 0) return 0;
}
return 1


// Input: 10
// Output: 2, 3, 5, 7







5. Prime Number:


for (i=1; i<=n; i++)
    if(n%i==0)

    count++;

if (count==2)


// Input: 
// Output: 






5. Prime Factors

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






7. Binary to Decimal

  
    for(i=0; n != 0; i++)
    {
        rem = n%10;
        n /= 10;
        decimal += rem * pow(2, i);
    }


// Input: 101011
// Output: 43





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






13. Swapping without using third variable



    a = a + b;
    b = a - b;
    a = a - b;


Input: 1 3
Output: 3 1






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






16. Remove element from array



for(i=0; i<P-1; i++)
        printf("%d ", a[i]);

for(i=P; i<n; i++)
        printf("%d ", a[i]);



Input: 5
Input: 10 20 30 40 50
Input P = 3
Output: 10 20 40 50






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