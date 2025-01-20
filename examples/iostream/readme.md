# Iostream: in ut matning
När du vill göra fil grejer samt läsa eller skriva ut saker till terminalen så använder du detta.
Inkludering:
```cpp
#include <iostream>
```


## `std::cout`:
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
`std::cout` inte direkt skriver till terminalen utan väntar då det är långsamt att skriva till terminalen.
För att få den att faktiskt skriva ut den korrekt så skickar vi `std::endl`
Exempel:
```cpp
std::cout << "Hello World!" << std::endl;
```

