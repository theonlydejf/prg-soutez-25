using System;
using System.Collections.Generic;

public static class Program
{
    private static World world;

    public static bool isLightOn() => world.IsLightOn();
    public static void toggleLight() => world.ToggleLight();
    public static void moveNext() => world.MoveNext();
    public static void movePrev() => world.MovePrev();

    public static int countRooms()
    {
        // TODO: Implementovat
        return 0;
    }

    private static bool RunTest(int n, bool[] lights, int startPos)
    {
        world = new World(lights, startPos);
        int result = countRooms();
        bool ok = result == n;

        Console.WriteLine($"Test n={n}, start={startPos}, lights=[{string.Join(",", lights)}] " +
                          $"=> countRooms()={result}  {(ok ? "OK" : "FAIL")}");
        return ok;
    }

    public static void Main()
    {
        bool allOk = true;
        allOk &= RunTest(3, new[] { true, false, true }, 0);
        allOk &= RunTest(5, new[] { false, true, true, false, true }, 2);
        // Přidej další testy

        if (!allOk)
            Console.WriteLine("Některé testy selhaly – opravte countRooms().");
        else
            Console.WriteLine("Všechny testy prošly.");
    }
}

public class World
{
    private List<bool> lights;
    private int pos;

    public World(bool[] initialLights, int startPos)
    {
        lights = new List<bool>(initialLights);
        pos = ((startPos % lights.Count) + lights.Count) % lights.Count;
    }

    public bool IsLightOn() => lights[pos];

    public void ToggleLight() => lights[pos] = !lights[pos];

    public void MoveNext() => pos = (pos + 1) % lights.Count;

    public void MovePrev() => pos = (pos - 1 + lights.Count) % lights.Count;
}
