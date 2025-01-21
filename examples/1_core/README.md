# Core
Detta finns i C++ utan att du behöver inkludera något. Det är 'core features' till språket.


## If
__Förklaring__:
If är en grundläggande funktion i C++ som skapar förgreningar av logik. Det vill säga, om någonting är sant som kommer en del kod att exekveras annars kommer den hoppas över. `if` använder en _condition_ för att avgöra huruvida ett kodblock ska evalueras. _Condition_ kan vara en av två saker: En enkel deklaration eller en _expression_.

En enkel deklaration är definiering av en _identifier_, oftast en variabel.

En _expression_ är en sekvens av _operators_ och _operands_. Detta inkluderar aritmetiska operationer, _function calls_, logiska operationer och mer.

När kontrollern evaluerar _condition_ kommer _condition_ att ge ett boolskt värde som kontrollern använder för att välja vilken kod som kommer evalueras.

__Note:__ Allt som inte är `0` kommer ge det boolska värdert `false` annars kommer det ge `true`.

`else` är en keyword som används för att utnyttja den logiska förgreningen genom att säkerhetställa att den tidigare _condition_ har evaluerats till `false`. Man kan även sätta `if` efter `else` för att bygga ut logiken med en ytterligare _condition_.

__Exempel__:
```c++
int main() {
    if (int x = 0 && x == 0) {
        // Lite kod
    } else if (true) {
        // Lite annan kod
    } else {
        // Denna kod kommer aldrig köras
    }
}
```
## Function
__Förklaring__:
Detta är en bit kod som har kallas från en annan del av koden. Det är väldigt användbart för läslighet samt abstraktion i C++.

När du definierar en __funktion__ måste du specificera en typ, namnet, __funktionens__ parametrar, och sedan själva kodblocket. När du kallar på en funktion så skriver du __funktionens__ namn och sedan parametrarna inuti parentheser.

Funktionsdefinitioner definieras uppifrån och ner i filen. Detta betyder att du inte kan kalla på en funktion som är definierad under funktion som den kallas från.

För att komma runt detta har vi möjlighet att definiera funktionens utseende innan själva funktionaliteten. Detta kan vi göra genom att lämna ut själva kodblocket inom _curly braces_ och byta ut det mot ett semikolon.
__Exempel__:
```c++
int other(); // Detta krävs eftersom `other` är definierat efter den används

int main() {
    // Detta är huvudfunktionen som måste finnas i ett program
    // alla andra funktioner blir kallade här ifrån
    return other();
}

int other() {
    // Detta är en annan funktion
    // Denna funktion kommer INTE att kallas automatiskt utan du
    // måste specifiera den i någon annan funktion
    return 0;
}
```
## Namespace
__Förklaring__:
`namespace` är både ett koncept och nyckelord i C++. När du refererar till en variabel eller funktion använder du bokstäver och ofta ord från engelska ordboken. Detta betyder att namn kan bli samma, vilket då skulle göra det omöjligt för kompilatorn att veta vad du faktiskt vill referera till. Därav har vi namespaces.

"__Namespaces__" funktion är att skapa ett utrymme där namnet får leva, sedan får användaren av funktionerna välja att referera till funktionerna genom att specificera namnet på ditt `namespace` eller flytta ut referensen så att dem kan referera till dem direkt. Att flytta ut referensen är då ett val för att användaren att riskera att få dubbla namn till en och samma funktion, typ eller variabel.

Det mest kända exemplet av ett `namespace` i C++ är `std` där mestadelen av vanliga funktioner i C++ lever.

__Exempel:__ skapa och referera till ett namespace
```c++
namespace test {
    int my_great_function() {
        // Din kod här
    }
}

int main() {
    test::my_great_function();
    return 0;
}
```
__Exempel:__ skapa och referera till ett namespace
```c++
using namespace test;

int main() {
    my_great_function(); // Funktionen är nu uppflyttad så vi kan referera till den direkt
    return 0;
}

```
