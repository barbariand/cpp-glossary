# Core
Detta finns i C++ utan att du behöver inkludera något. Det är 'core features' till språket.


## Function
__Förklaring__:
Detta är en bit kod som har kallas från en annan del av koden. Det är väldigt användbart för läslighet samt abstraktion i C++.

När du definierar en __funktion__ måste du specificera en typ, namnet, __funktionens__ parametrar, och sedan själva kodblocket.
När du kallar på en funktion så skriver du __funktionens__ namn och sedan parametrarna inuti parentheser.

__Exempel__:
```c++
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
