# Sčítačka a odčítačka

Představ si jednoduchou kalkulačku, která umí jen dvě operace:  
**sčítání** (`+`) a **odčítání** (`-`).

Na vstupu dostaneš **řetězec znaků**, který obsahuje:

- čísla (mohou být i vícemístná, např. `10`, `123`),
- znak `+`,
- znak `-`,
- a výraz je **ukončen znakem `=`**.

Tvým úkolem je tento výraz **vyhodnotit** a spočítat jeho **celý číselný výsledek**.

## Jak vstup vypadá

Příklady platného vstupu:

- `1+1=`
- `5-3=`
- `1+2-1=`
- `10+99-9=`
- `5-10=` → výsledek může být i **záporné číslo** (`-5`).

Můžeš předpokládat:

- žádné mezery,
- používají se jen číslice `0–9`, znaky `+`, `-` a na konci znak `=`,
- výraz se vyhodnocuje **zleva doprava** v pořadí, jak je napsaný.

## Shrnutí úkolu

Vytvoř program, který:

- načte výraz (například `10+99-9=`),
- spočítá jeho hodnotu (`100`),
- výsledek vypíše jako celé číslo.
