using System;
using MyCpp;
namespace NetCmd
{
    class Program
    {
        static void Main(string[] args)
        {
            MyWrap a = new MyWrap(1);
            Console.WriteLine("CPP="+a.get().ToString());
        }
    }
}
