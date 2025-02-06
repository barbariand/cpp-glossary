# Condition

[Condition](https://en.cppreference.com/w/cpp/language/if#Condition) kan vara två saker: _expression _eller _simple declaration _(läs varningen). [Expression](https://en.cppreference.com/w/cpp/language/expressions) är saker som evalueras till något, och även assignments som evalueras till det satta värdet.

[Condition](https://en.cppreference.com/w/cpp/language/if#Condition) ger ett värde som bestämmer vilken __branch__ som programmet exekverar. På grund av att [condition](https://en.cppreference.com/w/cpp/language/if#Condition) kan innehålla så många olika saker så kan detta se ut på olika sätt. Vi kan ta några exempel:

```admonish warning
__Warning__:
[Simple declaration](https://en.cppreference.com/w/cpp/language/declarations#Simple_declaration) är en initialisering av en ny variabel (eller annan identifier). Vilket är möjligt att göra i en [Condition](https://en.cppreference.com/w/cpp/language/if#Condition) men är oftast __väldigt dumt__. Det finns anledningar till att detta är möjligt, men ni behöver inte oroa er om detta. Läs mer på [cppreference](https://en.cppreference.com/w/cpp/language/if#Declaration).
```
En kort sammanfattning av viktiga symboler att ha koll på:



* `==` betyder “lika med”
* `!=` betyder “inte lika med”
* `<` betyder “mindre än”
* `>` betyder “större än”
* `<=` betyder “mindre eller lika med”
* `>=` betyder “större eller lika med”
* `&&` betyder “båda måste vara true för att evaluera true”
* `||` betyder “någon måste vara true för att evaluera true”

Det går att hitta fler symboler under [expressions](https://en.cppreference.com/w/cpp/language/expressions).

```cc
4 == 4; // true
4 != 4; // false
4 == 3 || 2 == 2; // true eftersom “||” betyder “or”
// false or true vilket är true
4 == 4 && 2 != 2; // false eftersom “&&” betyder “and”
// false and true vilket är true
```
