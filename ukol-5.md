# Místnosti

Představ si, že jsi **průzkumník** uvězněný v podivné **kruhové chodbě** staré laboratoře.  
Všude kolem jsou stejné **místnosti bez oken**, jen dveře a jedno světlo na stropě.

Nikdo ti neřekl, **kolik těch místností je**.  
Nevidíš ven, nemáš mapu, jen se můžeš pohybovat mezi místnostmi a ovládat světla.

## Jak svět funguje

Máme kruh z `n` místností.

Každá místnost má **dvoje dveře**:
- jedny vedou do **předchozí** místnosti,
- druhé vedou do **následující** místnosti.

**Poslední místnost je spojena s první**, takže dohromady tvoří uzavřený kruh.

> Můžeš si to představit jako prstenec místností – když půjdeš pořád dopředu, po nějaké době se zase vrátíš tam, kde jsi začal.

## Světla

V každé místnosti je **světlo**, které můžeš:
- **rozsvítit**
- nebo **zhasnout**.

Na začátku jsou světla v místnostech **nastavena libovolně (náhodně)** –  
**nevíš**, která svítí a která ne.  
Tuhle počáteční konfiguraci sis nevybíral, prostě ji musíš přijmout.

## Tvoje mise

Tvým úkolem je napsat program (algoritmus), který **s absolutní jistotou** zjistí:

> **Kolik místností v kruhu je?**  
> Tedy zjistit přesné číslo `n`.

Musíš to dokázat, i když:

- neznáš **počáteční stav světel**,
- nevíš, **ve které místnosti jsi začal** (nemáš „místnost číslo 1“),
- můžeš **vždy vidět jen světlo v aktuální místnosti** (nevidíš za dveře).

## Co smíš dělat

Mezi místnostmi můžeš přecházet **kolikrát chceš** a **jakým směrem chceš**:

- můžeš chodit pořád dopředu,
- můžeš se vracet zpátky,
- můžeš si vymyslet jakýkoli postup, jak světla přepínat a jak se pohybovat.

Ale pořád platí:

- **v jeden okamžik jsi vždy jen v jedné místnosti**,  
- vidíš jen **její** světlo,
- světla v jiných místnostech můžeš ovlivnit **jenom tím**, že do nich vejdeš a přepneš je.

## Shrnutí úkolu
Vymysli algoritmus, který:

1. používá jen tyto „akce“:
   - zjistit, jestli je **aktuální světlo rozsvícené nebo zhasnuté**,
   - přepnout **aktuální světlo**,
   - přejít do **předchozí** nebo **následující** místnosti;

2. po **konečném počtu kroků** dokáže **vždy správně zjistit** počet místností `n`,
   bez ohledu na:
   - počáteční stav světel,
   - místo, odkud začneš.
