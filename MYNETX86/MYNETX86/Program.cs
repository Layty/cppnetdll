using System;
using DLLMYX86;
namespace MYNETX86
{
    class Program
    {
        static void Main(string[] args)
        {
            MyWrap a = new MyWrap(1);
            Console.WriteLine("Hello World!"+a.get().ToString());
        }
    }
}
