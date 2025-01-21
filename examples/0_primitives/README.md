# Primitives

## `int`
__Förklaring__
int håller heltal.

__Operator__ `+`, `-`, `*`, `/`
du kan addera, subtrahera, multiplicera och dividera.
OBS: Divition är heltalsdivition så den tar bort decimalerna som kan komma i slutet

__Exempel__
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


## Modifierare `unsigned`
__Förklaring__
unsigned gör så att typen inte kan vara negativ

__Exempel__
```c++
    bool is_true=true;
    bool is_false=false;
```
