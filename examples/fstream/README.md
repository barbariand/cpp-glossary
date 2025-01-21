# fstream
__Inkludering__:
```c++
#include <fstream>
```
__Reexports:__
-  `std::string` from `<string>`

I detta exempelprojekt kommer vi att göra följande:

1. Generera ett unikt filnamn med `rand` funktionen
1. Se om en filen existerar
1. Skriva till filen
1. Läsa från filen
1. Skriva ut filens innehåll med `<iostream>`
1. Radera filen från filsystemet med hjälp av `std::delete`

## std::ifstream
__Förklaring:__ `std::ifstream` är en förkortning för "input file stream". Detta är klassen som innehåller massvis av hjälpmetoder för att läsa data från en fil.

__Operator `>>`:__ Operatorn `>>` läser karaktärer från en fil in i en buffer fram till ett blanksteg.

__Exempel__: Följande exempel läser data från en fil fram till ett mellanrum och lägger den i variabeln `buffer`
```c++
std::ifstream in;
std::string buffer;
in.open(filename);
in >> buffer;
in.close();
```
## std::ofstream
__Förklaring:__ `std::ofstream` är en förkortning för "output file stream". Detta är klassen som innehåller massvis av hjälpmetoder för att skriva data från en fil.

__Operator__ `<<`: Operatorn `<<` skriver en `std::string` till filen.

__Exempel__ Följande exempel skriver strängen "Hello world!" till en fil.
```c++
std::ofstream out;
out.open(filename);
out << "Hello world!";
out.close();
```
## close
__Förklaring:__ En väldigt viktig notis gällande denna funktion är att det inte bara är memory leaks som detta kan innefatta. Att läsa och skriva till filer kräver sys-calls, locks, och andra funktioner för att se till att filer inte blir korrupta. Därför är det väldigt viktigt att signalera till operativsystemet att du är färdig med filen.

__Exampel:__
```c++
std::ifstream in(filename);
in.close(); // Signalerar att vi är färdiga med filen
```
## good
__Förklaring:__ Metoden `good` är till för att kolla om några fel-flaggor som är kopplade till läsningen eller skrivande till en fil. Detta är även hur vi kollar om en fil existerar eftersom `std::ifstream` kommer få en fel-flagga om filen vi försöker läsa från inte existerar.

__Exempel:__ Kolla om en fil existerar
```c++
std::ifstream in(filename);
if (!in.good) {
    std::cout << "Filen finns inte!";
}
```
## std::delete
__Förklaring:__ För att radera en fil frå filsystemet finns en funktion i `std` som heter `delete`. Denna funktion är dock lite speciell då den kräver en C-style sträng. Detta betyder att vi inte kan använda `std::string` i funktionen utan behöver en `char*` variabel. Vi kan däremot få tillgång till en sådan variabel då den underliggande datatypen för `std::string` är `char*` genom metoden `c_str`.

__Exempel:__
```c++
std::string filename = "min_fil.txt";
std::delete(/* char* */filename.c_str())
```
