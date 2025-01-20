# Iostream: in ut matning
När du vill göra fil grejer samt läsa eller skriva ut saker till terminalen så använder du detta.
Inkludering:
```c++
#include <iostream>
```

## reexports:
`std::string` from `<string>`

## `std::cout`:

__Förklaring__:
`std::cout` är där du skriver text till terminalen.

__Operator__ `<<`:
Här kan du med operatorn `<<` skriva ut saker.

__Exempel__:
```c++
#include <iostream>
std::cout << "Hello World!";
```

## `std::cin`:

__Förklaring__:
`std::cin` är där du skriver text till terminalen.

__Operator__ `>>`:
Här kan du med operatorn `>>` hämta in variabler från terminalen saker.

__Exempel__:
```c++
std::cin >> variabel
```


## `std::endl`:

__Förklaring__:
`std::cout` skriver inte direkt till terminalen utan väntar då det är långsamt att skriva till terminalen.
För att få den att faktiskt skriva ut den direkt så skickar vi `std::endl`.
Den skriver även en \n

__Exempel__:
```c++
std::cout << "Hello World!" << std::endl;
```


## `std::getline`:

__Förklaring__:
`std::getline` tar in både en stream och en buffer och tar in all data från streamen och lägger in det i buffern.
Den ersätter allt som finns i buffern med det som är i streamen.
__Exempel__:
```c++
string buffer;
std::getline(std::cout, buffer);
```
