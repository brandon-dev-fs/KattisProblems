using System;

namespace takeTwoStonesKattis
{
    class Program
    {
        static void Main(string[] args)
        {
            int stones;

            stones = Convert.ToInt32(Console.ReadLine());

            if(stones % 2 == 0) {
                Console.WriteLine("Bob");
            }
            else {
                Console.WriteLine("Alice");
                
            }
        }
    }
}