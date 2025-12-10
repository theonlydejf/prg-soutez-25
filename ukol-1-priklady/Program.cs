using System;

class Program
{
    static int Compute(string expression)
    {
        // TODO: Implementovat
        return 0;
    }

    // ===== Testovací prostředí =====

    static bool Test(string expr, int expected)
    {
        int result = Compute(expr);
        bool ok = (result == expected);
        string status = ok ? "OK" : "FAIL";
        Console.WriteLine($"{expr} -> {result} (očekáváno {expected}) [{status}]");
        return ok;
    }

    static void Main()
    {
        bool allOk = true;

        allOk &= Test("1+1=", 2);
        allOk &= Test("5-3=", 2);
        allOk &= Test("1+2-1=", 2);
        allOk &= Test("10+99-9=", 100);
        allOk &= Test("5-10=", -5);
        allOk &= Test("123=", 123);
        allOk &= Test("0+0-0=", 0);

        if (allOk)
            Console.WriteLine("Všechny testy prošly.");
        else
            Console.WriteLine("Některé testy NEPROŠLY – oprav funkci Compute.");
    }
}
