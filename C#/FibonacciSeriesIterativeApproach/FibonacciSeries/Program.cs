using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine("Enter the number of elements to Print: ");
            int numberofElements = int.Parse(Console.ReadLine());

            int firstNumber = 0, secondNumber = 1;
            
            {
                if (numberofElements < 2)
                {
                    Console.WriteLine(firstNumber + " " + secondNumber + " ");
                }
                else
                {
                    Console.WriteLine(firstNumber + " " + secondNumber + " ");
                    for (int i = 2; i < numberofElements; i++)
                    {
                        int nextNumber = firstNumber + secondNumber;
                        Console.WriteLine(nextNumber + " ");
                        firstNumber = secondNumber;
                        secondNumber = nextNumber;
                    }
                    
                }
            }
            
            
        }
    }
}
