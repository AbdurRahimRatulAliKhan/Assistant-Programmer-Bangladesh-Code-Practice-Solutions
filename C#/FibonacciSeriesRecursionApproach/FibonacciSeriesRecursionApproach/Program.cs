using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FibonacciSeriesRecursionApproach
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number of elements to Print: ");
            int elementsofNumber = int.Parse(Console.ReadLine());
            fibonacciSeriesRecursiveMethod(0, 1, 1, elementsofNumber);
        }

        private static void fibonacciSeriesRecursiveMethod(int firstNumber, int secondNumber, 
            int counter, int elementsofNumber)
        {
            Console.WriteLine(firstNumber + " ");
            if (counter < elementsofNumber)
            {
                fibonacciSeriesRecursiveMethod(secondNumber, secondNumber + firstNumber, 
                    counter + 1, elementsofNumber);
            }
        }
    }
}
