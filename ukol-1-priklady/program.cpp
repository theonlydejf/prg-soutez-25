#include <iostream>
#include <string>

using namespace std;

int compute(const std::string& expression)
{
    // TODO: Implementovat
    return 0;
}

// ===== Testovací prostředí =====

bool test(const std::string& expr, int expected)
{
    int result = compute(expr);
    bool ok = (result == expected);
    cout << expr << " -> " << result
         << " (očekáváno " << expected << ") ["
         << (ok ? "OK" : "FAIL") << "]\n";
    return ok;
}

int main()
{
    bool allOk = true;

    allOk &= test("1+1=", 2);
    allOk &= test("5-3=", 2);
    allOk &= test("1+2-1=", 2);
    allOk &= test("10+99-9=", 100);
    allOk &= test("5-10=", -5);
    allOk &= test("123=", 123);
    allOk &= test("0+0-0=", 0);
    // Přidej další testy

    if (allOk)
        cout << "Všechny testy prošly.\n";
    else
        cout << "Některé testy NEPROŠLY – oprav funkci compute.\n";

    return 0;
}
