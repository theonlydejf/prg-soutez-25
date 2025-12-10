#include <iostream>
using namespace std;

int burn_time(int width, int height, int start_x, int start_y)
{
    // TODO: Implementovat
    return 0;
}

// ===== Testoyyvací prostředí =====

bool test(int w, int h, int x, int y, int expected)
{
    int result = burn_time(w, h, x, y);
    bool ok = (result == expected);

    cout << w << "x" << h << ", start=(" << x << "," << y << ")"
         << " -> " << result
         << " (očekáváno " << expected << ") ["
         << (ok ? "OK" : "FAIL") << "]\n";

    return ok;
}

int main()
{
    bool allOk = true;

    allOk &= test(3, 3, 1, 1, 2);
    allOk &= test(4, 4, 0, 0, 6);
    allOk &= test(6, 3, 0, 1, 6);
    // Přidej další testy

    if (allOk)
        cout << "Všechny testy prošly.\n";
    else
        cout << "Některé testy NEPROŠLY – oprav funkci burn_time.\n";

    return 0;
}
