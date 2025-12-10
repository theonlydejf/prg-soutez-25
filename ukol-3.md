# Piškvorky bez hranic

Představ si, že hraješ piškvorky na **nekonečném papíře**, který nemá žádné okraje.  
Hráči mohou pokládat `X` a `O` **kamkoli**, na libovolné souřadnice.  
Tvůj úkol je vytvořit program, který tuto hru umožní hrát **dvěma hráčům**.

## Pravidla hry

- Hrají **dva hráči**: jeden za `X`, druhý za `O`.
- Hráči se **střídají**.
- Hráč v každém tahu zadá souřadnice v následujícím formátu:
  - `1 2` - Dvě čísla oddělená práve jednou mezerou. První z nich je souřadnice ve vodorovné ose, druhé ve svislé.
- Vyhrává ten, kdo jako první vytvoří **3 stejné symboly v řadě**:
  - vodorovně,
  - svisle,
  - nebo diagonálně.

## Nekonečné hrací pole

Deska je teoreticky **nekonečná**.  
Na začátku je úplně prázdná.

To znamená:
- neexistuje předem daná velikost,
- program musí umět uložit každý tah někam do paměti,
- **jakým způsobem hrací pole reprezentuješ, je jen na tobě**.

Možné způsoby:
- ukládat jen obsazená pole pomocí slovníku (např. `[(x,y)] = 'X'`),
- dynamicky rozšiřovat tabulku,
- použít vlastní struktury.

Hodnotí se jak časová, tak i paměťová náročnost programu.

## Příklad průběhu hry
```
Vitejte ve hre Piskvorky bez hranic!
Hraje hrac X proti hraci O.
Vyhrava ten, kdo ma 3 symboly v rade.

Hrac X je na tahu.
Zadej souradnice tahu (x y): 1 1
Tah prijat: hrac X hraje na (1, 1).

Hrac O je na tahu.
Zadej souradnice tahu (x y): 0 1
Tah prijat: hrac O hraje na (0, 1).

Hrac X je na tahu.
Zadej souradnice tahu (x y): 1 1
Chyba: Pole (1, 1) je uz obsazene.

Hrac O je na tahu.
Zadej souradnice tahu (x y): a b
Chyba: Musis zadat dve cele ciselne souradnice.

Hrac X je na tahu.
Zadej souradnice tahu (x y): 2 2
Tah prijat: hrac X hraje na (2, 2).

Hrac O je na tahu.
Zadej souradnice tahu (x y): 0 0
Tah prijat: hrac O hraje na (0, 0).

Hrac X je na tahu.
Zadej souradnice tahu (x y): 2 1
Tah prijat: hrac X hraje na (2, 1).

Hrac O je na tahu.
Zadej souradnice tahu (x y): 0 2
Tah prijat: hrac O hraje na (0, 2).

Hrac X je na tahu.
Zadej souradnice tahu (x y): 2 3
Tah prijat: hrac X hraje na (2, 3).

Kontrola vyhry...
Vyhrava hrac X!
Konec hry.
```

## Bonus – 3 bonusové body

### Zobrazení aktuálního stavu hrací plochy

Můžete si sami zvolit, **jakým způsobem budete hrací plochu zobrazovat** – může to být:

- **textový výpis v konzoli**,  
- **grafické rozhraní (GUI)**.

Důležité je, aby šlo o **robustní a spolehlivý systém**, který:

- umožní hráčům kdykoliv zobrazit **aktuální stav herní desky**,  
- funguje **za všech podmínek** (bez ohledu na velikost nebo množství odehraných tahů),  
- dokáže přehledně ukázat, kde se nacházejí všechna pole se symboly `X` nebo `O`.

Konkrétní podoba zobrazení je na vaší kreativitě – hodnotí se funkčnost a přehlednost.


## Shrnutí úkolu
Vytvořit program, který:

- umožní střídavé hraní dvou hráčů (`X`, `O`),
- přijímá souřadnice tahů,
- hlídá korektnost vstupů,
- umí zjistit **výhru při 3 symbolech v řadě**,
- nevyžaduje žádnou pevnou velikost hrací plochy,
- **BONUS:** zobrazovat hrací plochu.
