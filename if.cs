using System;
using System.Globalization;

namespace Switch
{
    class Program
    {
        static void Main(string[] args)
        {
            int mesAtual = DateTime.Now.Month;
            int diaAtual = DateTime.Now.Day;

            DateTime dataCriacao = new DateTime(2022, 12, 08, 00, 32, 54);

            Console.WriteLine(dataCriacao);

            if (((mesAtual == dataCriacao.Month && diaAtual > dataCriacao.Day) || (mesAtual == dataCriacao.Month && diaAtual == dataCriacao.Day && dataCriacao.Hour == 0))
                        || (mesAtual > dataCriacao.Month && diaAtual < dataCriacao.Day) || (mesAtual > dataCriacao.Month && diaAtual < dataCriacao.Day && dataCriacao.Hour == 0))
            {
                Console.WriteLine("Passou!");
            }

            if (DateTime.Now > new DateTime(2022, 11, 07))
            {
                Console.WriteLine("Maior");
            }
        }
    }
}
