using System;
using System.Linq;

namespace CS
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = Convert.ToInt32(Console.ReadLine());
            for(int i = 0; i < cases; i++){
                int guests = Convert.ToInt32(Console.ReadLine());
                int answer = -1;
                
                var ticketnumber = Console.ReadLine().Split(' ').Select(Int32.Parse).ToList();
                
                for(int j = 0; j < guests; j++){
                    answer = ticketnumber[j];
                    for(int k = 0; k < ticketnumber.Count; k++){
                        if(answer == ticketnumber[k] && k != j){
                            answer = -1;
                            break;
                        }
                    }

                    if(answer > -1)
                        break;
                }
                Console.WriteLine($"Case #{i+1}: {answer}");
            }
        }
    }
}
