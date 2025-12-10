import random

class World:
    def __init__(self, lights, start_pos=0):
        self.lights = list(lights)
        self.pos = start_pos % len(self.lights)

    def isLightOn(self):
        return self.lights[self.pos]

    def toggleLight(self):
        self.lights[self.pos] = not self.lights[self.pos]

    def moveNext(self):
        self.pos = (self.pos + 1) % len(self.lights)

    def movePrev(self):
        self.pos = (self.pos - 1) % len(self.lights)

world: World

def isLightOn() -> bool:
    return world.isLightOn()


def toggleLight() -> None:
    world.toggleLight()


def moveNext() -> None:
    world.moveNext()


def movePrev() -> None:
    world.movePrev()


def countRooms() -> int:
    """
    TODO: Implementovat
    """
    return 0


def run_test(n: int, lights=None, start_pos: int = 0):
    global world
    world = World(lights, start_pos)

    result = countRooms()
    ok = (result == n)
    print(f"Test n={n}, start={start_pos}, lights={lights} -> "
          f"countRooms()={result}  [{'OK' if ok else 'FAIL'}]")
    return ok


if __name__ == "__main__":
    all_ok = True
    all_ok &= run_test(3, [True, False, True], 0)
    all_ok &= run_test(5, [False, True, True, False, True], 2)
    # Přidej další testy

    if not all_ok:
        print("Některé testy selhaly – opravte countRooms().")
    else:
        print("Všechny testy prošly.")
