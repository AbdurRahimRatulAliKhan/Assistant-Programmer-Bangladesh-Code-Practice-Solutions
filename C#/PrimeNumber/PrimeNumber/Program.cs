using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PrimeNumber
{
    internal class Program
    {
        //static void Main(string[] args)
        //{
        //    Console.WriteLine("Enter a number: ");
        //    int number = Convert.ToInt32(Console.ReadLine());
        //    int result = Check_Prime(number);

        //    if(result == 0)
        //    {
        //        Console.WriteLine("{0} is not a prime number", number);
        //    }
        //    else
        //    {
        //        Console.WriteLine("{0} is a prime number", number);
        //    }
        //    Console.ReadKey();
        //}

        //private static int Check_Prime(int number)
        //{
        //    int i;
        //    for(i = 2; i <= number-1; i++)
        //    {
        //        if (number % i == 0)
        //        {
        //            return 0;
        //        }
        //    }
        //    if(i == number)
        //    {
        //        return 1;
        //    }
        //    return 0;
        //}

        static void Main(string[] args)
        {
            Console.Write("Enter a Number : ");
            int number = int.Parse(Console.ReadLine());
            bool IsPrime = true;
            for (int i = 2; i < number / 2; i++)
            {
                if (number % i == 0)
                {
                    IsPrime = false;
                    break;
                }
            }
            if (IsPrime)
            {
                Console.Write("Number is Prime.");
            }
            else
            {
                Console.Write("Number is not Prime.");
            }
            Console.ReadKey();
        }
    }
}
