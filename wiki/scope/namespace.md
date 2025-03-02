# Namespaces

__Namespaces__ är till för att dela upp global scope. Eftersom vi refererar till saker via namn så finns det en risk att vi definierar saker flera gånger. __Namespace__ är liksom en prefix för att lägga ytterligare distinktion till vad för något blir refererat. Samma namn riskerar att referera till flera _olika_ saker.

Man kan likna __namespaces__ till ett virtuellt scope som inte påverkar _lifetimes_ men som tydliggör referenser till definitionerna.


## Creation

För att skapa ett nytt __namespace__ har vi liknande syntax som att definiera ett nytt __scope__.

```cc
namespace X {
  int Y = 0; // Y finns nu inuti namespace X
}
int Z = 1; // Z är utanför namespace X
```


## Accessing

För att komma åt en variabel eller annat som finns inuti ett __namespace__ refererar vi till namnet på vårt __namespace__ och namnet på vår __identifier__ (variabel namnet t.ex.).

```cc
namespace X {
  // Y finns nu inuti namespace X och i global scope
  int Y = 0;                        // ----+- 'y
}                                   //     |
int main() {                        //     |
   std::cout << X::Y << std::endl;  //     |
}                                   //     |
```


## Global scope access

Som standard har vi syntax för att gå in i __namespaces__, men i vissa fall vill vi gå ut ur __namespaces__ för att referera någonting. Specifikt är detta användbart med name conflict med en variabel i global scope och nuvarande __namespace__.

```cc
int X = 0;
namespace Y {
  int X = 2;
  …
    X // 2
    ::X // 0
  …
}
```

Vi använder syntaxen för att komma åt ett __namespace__, utan något namn, för att referera till global scope. Det är liksom en negation mot vår __namespace__ nesting.
