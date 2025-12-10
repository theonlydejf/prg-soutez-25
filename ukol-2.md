# Trezor

Představ si, že jsi hlavní vývojář v tajné laboratoři.
Dostal jsi za úkol vytvořit **chytrý elektronický trezor**, který si vygeneruje vlastní tajný čtyřsymbolový kód.
Bohužel, místní vědci mají špatnou paměť a nejsou si schopni kombinaci do trezoru zapamatovat. Trezor jim tedy musí pomoct na tajný kód přijít.

Trezor pracuje se speciální sadou symbolů:

- `@`
- `#`
- `&`
- `~`
- `*`

Tvým úkolem je **naprogramovat sejf**, který:

1. si vygeneruje tajný čtyřsymbolový kód,  
2. přijímá vědcovi pokusy,  
3. a vrací mu chytré nápovědy.

## Jak trezor funguje

Trezor má **4 pozice**, které zaplní náhodně vybranými symboly.  
V základní verzi se **symboly neopakují** -> každá pozice obsahuje jiný symbol.

Příklad tajného kódu:  
```@ ~ * #```

Vědec zadává své tipy a trezor je vyhodnocuje.

## Jak mají vypadat rady sejfu

Po každém tipu trezor musí pro **každou ze čtyř pozic** vědcova tipu napsat jednu ze tří možností:

1. **Symbol se v kódu nevyskytuje vůbec**  
2. **Symbol v kódu je, ale patří na jinou pozici**  
3. **Symbol je správný a na správném místě**

Sejf se otevře, když vědec uhodne všechny 4 pozice správně.

## Příklad: jak trezor komunikuje s vědcem

Tajný kód (odhalený jen pro ukázku):  
`@ ~ & *`

```
Vitejte! Trezor si vytvoril svuj tajny kod.
Pouzivane symboly: @ # & ~ *

Zadejte svuj tip

Pozice 1: @
Pozice 2: @
Pozice 3: #
Pozice 4: #
Rada:
  Pozice 1: SPRAVNE
  Pozice 2: tento symbol se v kodu nenachazi
  Pozice 3: tento symbol se v kodu nenachazi
  Pozice 4: tento symbol se v kodu nenachazi

Pozice 1: @
Pozice 2: #
Pozice 3: &
Pozice 4: @
Rada:
  Pozice 1: SPRAVNE
  Pozice 2: tento symbol se v kodu nenachazi
  Pozice 3: SPRAVNE
  Pozice 4: symbol se v kodu vyskytuje, ale na jinem miste

Pozice 1: @
Pozice 2: ~
Pozice 3: &
Pozice 4: *
Rada:
  Pozice 1: SPRAVNE
  Pozice 2: SPRAVNE
  Pozice 3: SPRAVNE
  Pozice 4: SPRAVNE

Trezor se otevira.
```

## Bonus – 3 Bonusove body

### Varianta trezoru s opakovatelnými symboly

Vytvořte verzi trezoru, který generuje kód, kde se symboly **mohou opakovat**.

Tajné kombinace pak mohou vypadat například:

- `@ @ ~ *`
- `& & * &`
- `# ~ # @`

V této variantě musí sejf pracovat správně i s více výskyty jednoho symbolu při vyhodnocování nápovědy.

## Shrnutí úkolu
Tvým úkolem je naprogramovat trezor, který:

- **vytvoří vlastní náhodný kód** ze symbolů `@ # & ~ *`,
- **přijímá od vědce jeho tipy**,
- **vyhodnotí každý tip po jednotlivých pozicích**,  
- **vypisuje rady** podle pravidel (špatně / správný symbol špatné místo / správné místo),
- **rozpozná vítězný tip**,
- **'otevře' trezor**, jakmile vědec kód správně uhodne.
- **BONUS:** V tajném kódu se mohou symboly opakovat
