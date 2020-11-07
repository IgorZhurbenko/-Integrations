using System;
using NetCPPLibrary;


namespace SharpMathClient
{
    class Program
    {
        static void Main(string[] args)
        {
            var a = new NetCPPLibrary.CPPClass();
            Console.WriteLine($"{a.Constant}");
        }
    }
}
