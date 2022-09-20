using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bubblesortimplement
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the Array Elements: ");
            int[] intArray = new int[5];
            for(int i = 0; i < intArray.Length; i++)
            {
                intArray[i] = int.Parse(Console.ReadLine());
            }

            for (int j = 0; j <= intArray.Length-2; j++)
             
            {
                for (int i = 0; i <= intArray.Length-2; i++)
                {
                    if (intArray[i] > intArray[i + 1])
                    {
                        Console.WriteLine($"Comparison value intArray[i]: {intArray[i]}");
                        Console.WriteLine($"Comparison value intArray[i + 1]: {intArray[i + 1]}");
                        //int temp = intArray[i];
                        //intArray[i] = intArray[i + 1];
                        //intArray[i + 1] = temp;

                        int temp = intArray[i + 1];
                        intArray[i + 1] = intArray[i];
                        intArray[i] = temp;

                        Console.WriteLine($"Comparison value intArray[i]: {intArray[i]}");
                        Console.WriteLine($"Comparison value intArray[i + 1]: {intArray[i + 1]}");
                    }
                    foreach (int item in intArray)
                    {
                        Console.WriteLine(item + " ");
                    }
                }
                    
            }

            Console.WriteLine("Final result: ");
            foreach (int item in intArray)
            {
                Console.WriteLine(item + " ");
            }
            Console.ReadKey();
        }
    }
}
