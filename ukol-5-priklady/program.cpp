#include <iostream>
#include <vector>
struct World;

bool isLightOn();
void toggleLight();
void moveNext();
void movePrev();


int countRooms() {
    // TODO: Implementovat
    return 0;
}

// ===== Testovací prostředí =====

struct World {
    std::vector<bool> lights;
    int pos;

    World(const std::vector<bool>& l, int startPos)
        : lights(l)
    {
        int n = (int)lights.size();
        pos = ((startPos % n) + n) % n;
    }
};

static World* world = nullptr;

bool isLightOn() {
    return (*world).lights[world->pos];
}

void toggleLight() {
    (*world).lights[world->pos] = !(*world).lights[world->pos];
}

void moveNext() {
    int n = (int)world->lights.size();
    world->pos = (world->pos + 1) % n;
}

void movePrev() {
    int n = (int)world->lights.size();
    world->pos = (world->pos - 1 + n) % n;
}

bool runTest(int n, const std::vector<bool>& lights, int startPos) {
    World w(lights, startPos);
    world = &w;

    int result = countRooms();
    bool ok = (result == n);

    std::cout << "Test n=" << n << ", start=" << startPos << ", lights=[";
    for (size_t i = 0; i < lights.size(); ++i) {
        std::cout << (lights[i] ? '1' : '0');
        if (i + 1 < lights.size()) std::cout << ",";
    }
    std::cout << "] => countRooms()=" << result
              << "  " << (ok ? "OK" : "FAIL") << "\n";

    return ok;
}

int main() {
    bool allOk = true;
    allOk &= runTest(3, {true, false, true}, 0);
    allOk &= runTest(5, {false, true, true, false, true}, 2);
    // Přidej další testy

    if (!allOk)
        std::cout << "Některé testy selhaly – opravte countRooms().\n";
    else
        std::cout << "Všechny testy prošly.\n";

    return 0;
}
