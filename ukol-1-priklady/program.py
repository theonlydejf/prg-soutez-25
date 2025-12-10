def compute(expression: str) -> int:
    """
    TODO: Implementovat
    """
    return 0

# ===== Testovací prostředí =====

def test(expr: str, expected: int) -> bool:
    result = compute(expr)
    ok = (result == expected)
    status = "OK" if ok else "FAIL"
    print(f"{expr} -> {result} (očekáváno {expected}) [{status}]")
    return ok


if __name__ == "__main__":
    all_ok = True

    all_ok &= test("1+1=", 2)
    all_ok &= test("5-3=", 2)
    all_ok &= test("1+2-1=", 2)
    all_ok &= test("10+99-9=", 100)
    all_ok &= test("5-10=", -5)
    all_ok &= test("123=", 123)
    all_ok &= test("0+0-0=", 0)
    # Přidej další testy

    if all_ok:
        print("Všechny testy prošly.")
    else:
        print("Některé testy NEPROŠLY – oprav funkci compute.")
