# fstream
När vi ska läsa och skriva från och till filer vill vi använda detta bibliotek:
```cpp
#include <fstream>
```

I detta exempelprojekt kommer vi att göra följande:

1. Generera ett unikt filnamn med `rand` funktionen
1. Se om en filen existerar
1. Skriva till filen
1. Läsa från filen
1. Skriva ut filens innehåll med `<iostream>`
1. Radera filen från filsystemet med hjälp av `std::delete`

---
`std::ifstream` är en förkortning för "input file stream". Detta är klassen som innehåller massvis av hjälpmetoder för att läsa data från en fil. Man kan även använda `<<` och `>>` med `ifstream` liksom man gör i `<iostream>`.

Följande exempel läser data från en fil fram till ett mellanrum och lägger den i variabeln `buffer`:
```cpp
std::ifstream in;
std::string buffer;
in.open(filename);
in >> buffer;
in.close();
```
---
`std::ofstream` är en förkortning för "output file stream". Detta är klassen som innehåller massvis av hjälpmetoder för att skriva data från en fil. Man kan även använda `<<` och `>>` med `ofstream` liksom man gör i `<iostream>`.

Följande exempel skriver strängen "Hello world!" till en fil.
```cpp
std::ofstream out;
out.open(filename);
out << "Hello world!";
out.close();
```
---
Metoden `good` är till för att kolla om några fel-flaggor som är kopplade till läsningen eller skrivande till en fil. Detta är även hur vi kollar om en fil existerar eftersom `std::ifstream` kommer få en fel-flagga om filen vi försöker läsa från inte existerar. Exempel på att kolla om en fil existerar:
```cpp
std::ifstream in(filename);
if (!in.good) {
    std::cout << "Filen finns inte!";
}
```
---
För att radera en fil frå filsystemet finns en funktion i `std` som heter `delete`. Denna funktion är dock lite speciell då den kräver en C-style sträng. Detta betyder att vi inte kan avnända `std::string` i funktionen utan behöver en `char*` variabel. Vi kan däremot få tillgång till en sådan variabel då den underliggande datatypen för `std::string` är `char*` genom metoden `c_str`. Exempel:
```cpp
std::string filename = "min_fil.txt";
std::delete(/* char* */filename.c_str())
```
