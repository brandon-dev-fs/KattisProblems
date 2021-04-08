using System;

namespace greetingsKattis
{
    class Program
    {
        static void Main(string[] args)
        {
            string gretting = "", newgreeting ="";
            gretting = Console.ReadLine();

            for(int i = 0; i < gretting.Length; i++){
                if(gretting[i] == 'e')
                {
                    newgreeting += "ee";
                }
                else
                {
                    newgreeting += gretting[i];
                }
            }
            Console.WriteLine(newgreeting);
        }
    }
}