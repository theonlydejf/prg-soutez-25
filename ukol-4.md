# Hořící mapa

Prozkoumáváš starou dílnu dávného kartografa.  
Uprostřed místnosti objevíš velkou **mapu na pergamenu**, plnou poznámek, značek a tajemných symbolů.  
Jenže pergamen je velmi křehký – stačí malá jiskra, aby začal **pomalu žhnout a hořet**.

Jedno políčko mapy vzplane **už na začátku**, zbytek se postupně zapálí, jak se oheň šíří.  
Hoření probíhá překvapivě pravidelně: **každou vteřinu** přeskočí plamen na všechna políčka, která se dotýkají aspoň rohem.

Tvým úkolem je zjistit, **za jak dlouho shoří celá mapa**.

## Jak to funguje

Mapu si představ jako **mřížku `m * n` čtverečků**.

- na vstupu máš **souřadnice** čtverečků, které **hoří hned na začátku**,  
- ostatní jsou **zatím nehořící**.

Oheň postupuje takto:

- na začátku hoří jen první zapálená místa,
- v každém dalším kroku se oheň rozšíří na všechny čtverečky,
  které **sdílejí stranu** s nějakým hořícím čtverečkem.

To znamená, že plamen se šíří:

- **nahoru**
- **dolů**
- **doleva**
- **doprava**

Tvým cílem je zjistit, za kolik kroků začne hořet **celá mapa**.

## Příklad 1 – 3×3, zapálený střed

Na začátku:
```
...
.X.
...
```

Po jednom kroku:  
```
.X.
XXX
.X.
```

Po dvou krocích:  
```
XXX
XXX
XXX
```

Všechny čtverečky hoří po **2 krocích**.

---

## Příklad 2 – 4×4, zapálený levý horní roh

Na začátku:  
```
X...
....
....
....
```

Po jednom kroku:  
```
XX..
X...
....
....
```

Po dvou krocích:  
```
XXX.
XX..
X...
....
```

(šíření pokračuje dál)

Jakmile začne hořet i úplně poslední čtvereček, známe výsledek - v tomto případě **6 kroků**.

---

## Shrnutí úkolu

Naprogramuj simulaci, která:

1. zná velikost mapy a místa, která hoří na začátku,
2. šíří oheň vždy na sousední čtverečky, které sdílejí jednu stranu,
3. spočítá, **kolik kroků** zabere, než začne hořet **celá mapa**.

Výsledkem je **nejmenší počet kroků**, kdy už nezůstane žádné nehořící políčko.
