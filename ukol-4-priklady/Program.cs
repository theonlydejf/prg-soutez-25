using System;

class Program
{
    static int burn_time(int width, int height, int start_x, int start_y)
    {
        // TODO: Implementovat
        return 0;
    }

    // ===== Testoyyvací prostředí =====

    static bool Test(int w, int h, int x, int y, int expected)
    {
        int result = burn_time(w, h, x, y);
        bool ok = (result == expected);
        Console.WriteLine($"{w}x{h}, start=({x},{y}) -> {result} (očekáváno {expected}) [{(ok ? "OK" : "FAIL")}]");
        return ok;
    }

    static void Main()
    {
        bool allOk = true;

        allOk &= Test(3, 3, 1, 1, 2);
        allOk &= Test(4, 4, 0, 0, 6);
        allOk &= Test(6, 3, 0, 1, 6);
        // Přidej další testy

        if (allOk)
            Console.WriteLine("Všechny testy prošly.");
        else
            Console.WriteLine("Některé testy NEPROŠLY – oprav funkci burn_time.");
    }
}
