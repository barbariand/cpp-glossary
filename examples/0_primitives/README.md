# Primitives

## `int`
__Förklaring__
int håller heltal.

__Operator__ `+`, `-`, `*`, `/`
du kan addera, subtrahera, multiplicera och dividera.
obs: divition är heltalsdivition så den tar bort decimalerna som kan komma i slutet

__exempel__
```c++
    int one = 1;
    int two = 2;
    int addition = one + two; // 3
    int subtraction = var - other; // -1
    int mutltiplikation = var * other; // 2
    int divition = var / other; // 0 då den tar bort de sista .5
```


## `float`
__Förklaring__
float håller decimal tal. Den är relativt liten och har inte super bra precision
__Operator__ `+`, `-`, `*`, `/`
du kan addera, subtrahera, multiplicera och dividera.

__Exempel__
```c++
    float one = 1;
    float two = 2;
    float addition = one + two; // 3
    float subtraction = var - other; // -1
    float mutltiplikation = var * other; // 2
    float divition = var / other; // 0.5 ish
```

## `double`
__Förklaring__
double håller decimal tal. Den är dubblet så stor som float och har bra precision

__Operator__ `+`, `-`, `*`, `/`
du kan addera, subtrahera, multiplicera och dividera.

__Exempel__
```c++
    double one = 1;
    double two = 2;
    double addition = one + two; // 3
    double subtraction = var - other; // -1
    double mutltiplikation = var * other; // 2
    double divition = var / other; // 0.5 ish
```


## `bool`
__Förklaring__
bool kan vara antingen `true` eller `false`.
du kan använda 1 och 0 för att skriva bools men igentligen är allt som inte är 0 true och det som är 0 är false.
Men är igentligen bara en int så den konverteras till int om du försöker göra någon operation.
Modifiers fungerar inte på denna.

__Exempel__
```c++
    bool is_true=true;
    bool is_false=false;
```

## `char`
__Förklaring__
char håller ett tecken så som ett nummer eller en bokstav

__Exempel__
```c++
    char one = '1';
    char two = '2';
    char a = 'a';
```

## `long` och `short`
__Förklaring__
`long` och `short` är båda types och modifierare, denna delen beskriver hur de fungerar som typer.
`long` som en typ expanderar till `long int`.
`short` som en typ expanderar till `short int`.

__Exempel__
```c++
    long correct = 1;// same as
    long int correct = 1;
    short correct = 1;// same as
    short int correct = 1;
```
## Modifierare:
### Modifierare `long`
__Förklaring__
gör så att typer tar mer minne och kan hålla större mängder


__Fungerar på__:
- int
- char
- double
- long

__Exempel__
```c++
    long int correct = 1;
    long char correct = 'a';
    long double correct = 1.0;
    // Long can be used twise on ints to make them even bigger
    long long int also_correct = 1;
    long long also_correct = 1;// this expands to the same as above
```

### Modifierare `short`
__Förklaring__
gör så att typer tar mindre minne och kan hålla minder mängder

__Fungerar på__:
- int

__Exempel__
```c++
     short int correct = 1;
```

### Modifierare `unsigned`
__Förklaring__
unsigned gör så att typen inte kan vara negativ och kan då hålla mer positiva värden

__Fungerar på__:
- int
- char
- och alla kominationer med long och short för typerna ovan

__Exempel__
```c++
    unsigned int correct = 1;
    unsigned int also_correct = 0;
    // This will not give a compiler error
    // but instead often be 2^32 - 1 wich means it is undefined behaviour
    unsigned int incorrect=-1;
```
### Modifierare `signed`
__Förklaring__
signed gör så att typen kan vara negativ explicit

__Fungerar på__:
- int
- char
- och alla kominationer med long och short för typerna ovan

__Exempel__
```c++
    signed int correct = 1;
    signed int also_correct = 0;
    signed int negative_correct=-1;
```
