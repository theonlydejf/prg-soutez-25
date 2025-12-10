# Obecné pokyny k programátorské soutěži

## Povolné programovací jazyky

Své řešení můžete napsat v jednom z těchto jazyků:

- **Python**
- **C#**
- **C++**
- **Java**
- **C**

K úlohám mohou být navíc připraveny ukázkové testovací příklady v těchto jazycích:

- Python  
- C#  
- C++

Tyto příklady vám pomohou pochopit, jak funguje prostředí, ve kterém se úloha testuje.

## Pravidla soutěže

Aby byla soutěž férová a aby se programy chovaly bezpečně, platí tato pravidla:

### **1. Žádné spouštění dalších procesů**
Nesmíte:
- pouštět jiné programy,
- komunikovat s jinými procesy,
- používat systémové příkazy.

Zakázané jsou například:
- `os.system()`, `subprocess` (Python),
- `ProcessBuilder` (Java),
- `system()` (C, C++),
- `Process.Start()` (C#).

### **2. Nezasahovat do operačního systému**
Nesmíte číst ani zapisovat soubory, pracovat s diskem nebo konfiguračními soubory.

Zakázané je například:
- otevírání souborů (`open`, `fstream`, `File`, …),
- mazání, vytváření nebo přesouvání souborů,
- práce s cestami v OS.

Program musí fungovat **jen v paměti**, bez manipulace s OS.

### **3. Žádná kompilace nebo spouštění kódu za běhu**
Je zakázáno používat funkce, které interpretují nebo kompilují kód během běhu programu.

Například:
- `eval`, `exec` (Python),
- `CompileAssemblyFromSource` (C#),
- dynamický classloader (Java),
- JIT kompilace vlastního kódu,
- vytváření a spouštění skriptů.

### **4. Zakázaná síťová komunikace**
Program nesmí:
- odesílat nebo přijímat data,
- používat internet,
- vytvářet sockety,
- pingovat,
- komunikovat po síti jakýmkoli způsobem.

I lokální sockety jsou zakázané.

### **5. Povolené knihovny jsou pouze ty, které pracují s GUI**
A i z nich můžete používat **jen části týkající se zobrazování**.

Nesmíte používat:
- síťové části GUI frameworků,
- funkce pro práci se soubory nebo systémem,
- analytické nebo externí moduly, pokud nesouvisí s GUI.

Pouze vizuální prvky, například:
- vykreslení okna,
- canvas,
- jednoduché grafické prvky.

### **6. Žádná komunikace mezi soutěžícími programy**
Každé řešení musí běžet **samostatně**, bez sdílení paměti a bez předávání zpráv.

## Detaily hodnocení

Každý úkol je hodnocen až **15 body** + případnými **bonusovými body**.

### **1) Funkčnost — až 10 bodů**

Získáte podle toho, jak dobře váš program řeší zadaný úkol:

- **10 bodů** – program funguje správně ve všech testech  
- **7–9 bodů** – drobné chyby, ale většina funkcí funguje  
- **4–6 bodů** – řešení částečné nebo nespolehlivé  
- **0–3 body** – program problém neřeší nebo padá  

Testy mohou být:
- veřejné (v zadání),
- skryté (pro ověření krajních případů).

### **2) Čitelnost, struktura a dokumentace — až 5 bodů**

Hodnotíme, jak dobře se váš kód čte:

- srozumitelné názvy proměnných a funkcí,
- přehledná struktura programu,
- jednoduché a smysluplné komentáře,
- konzistentní odsazení a formátování.

Nemusíte psát romány – stačí, aby program dával smysl i člověku, který ho vidí poprvé.

### **3) Bonusové body — až 3 body**

Některé úlohy obsahují volitelné rozšíření.

Bonus lze získat **jen tehdy**, pokud základní úkol funguje správně.

### **4) Penalizace**

Body mohou být odečteny za:

- porušení pravidel soutěže,
- neetické chování (např. obcházení testů),
- použití zakázaných knihoven nebo funkcí.

V krajním případě může být řešení vyřazeno.
