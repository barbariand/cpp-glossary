# Iostream: in ut matning
När du vill göra fil grejer samt läsa eller skriva ut saker till terminalen så använder du detta.
Inkludering:
```cpp
#include <iostream>
```

## `std::string`:
reexported from `<string>`

## `std::cout`:

Förklaring:
`std::cout` är där du skriver text till terminalen.

Operator `<<`:
Här kan du med operatorn `<<` skriva ut saker.

Exempel:
```cpp
std::cout << "Hello World!";
```

## `std::cin`:

Förklaring:
`std::cin` är där du skriver text till terminalen.

Operator `>>`:
Här kan du med operatorn `>>` hämta in variabler från terminalen saker.

Exempel:
```cpp
std::cin >> variabel
```


## `std::endl`:

Förklaring:
`std::cout` skriver inte direkt till terminalen utan väntar då det är långsamt att skriva till terminalen.
För att få den att faktiskt skriva ut den direkt så skickar vi `std::endl`.
Den skriver även en \n

Exempel:
```cpp
std::cout << "Hello World!" << std::endl;
```


## `std::getline`:

Förklaring:
`std::getline` tar in både en stream och en buffer och tar in all data från streamen och lägger in det i buffern.

Exempel:
```cpp
string buffer;
std::getline(std::cout,buffer);
```
