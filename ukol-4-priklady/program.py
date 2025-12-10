def burn_time(width: int, height: int, start_x: int, start_y: int) -> int:
    """
    TODO: Implementovat.
    """
    return 0

# ===== Testovací prostředí =====

def test(w, h, x, y, expected):
    result = burn_time(w, h, x, y)
    ok = (result == expected)
    status = "OK" if ok else "FAIL"
    print(f"{w}x{h}, start=({x},{y}) -> {result} (očekáváno {expected}) [{status}]")
    return ok


if __name__ == "__main__":
    all_ok = True

    all_ok &= test(3, 3, 1, 1, 2)
    all_ok &= test(4, 4, 0, 0, 6)
    all_ok &= test(6, 3, 0, 1, 6)
    # Přidej další testy

    if all_ok:
        print("Všechny testy prošly.")
    else:
        print("Některé testy NEPROŠLY – oprav funkci burn_time.")
