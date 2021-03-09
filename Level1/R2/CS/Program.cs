using System;

namespace CS
{
    class Program
    {
        static void Main(string[] args)
        {
            int r1, s, r2;

            string line = Console.ReadLine();
            string[] split = line.Split(new char[] {' '}, StringSplitOptions.None);
            r1 = Int32.Parse(split[0]);
            s =  Int32.Parse(split[1]);

            r2 = (2 * s) - r1;

            Console.WriteLine(r2);
        }
    }
}
