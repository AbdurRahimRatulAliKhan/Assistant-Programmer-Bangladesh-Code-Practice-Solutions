using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Swappingtwonumbersusingathirdvariable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Before Swapping Number 1, The value is: ");
            int number1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Before Swapping Number 2, The value is: ");
            int number2 = int.Parse(Console.ReadLine());

            int temp = number1;
            number1 = number2;
            number2 = temp;

            Console.WriteLine($"After Swapping Number 1, The value is: {number1}");
            Console.WriteLine($"After Swapping Number 2, The value is: {number2}");
        }
    }
}
