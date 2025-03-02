# Global Scope

Gällande __global scope__ så finns det två koncept som arbetar samtidigt: Compilerns läsning av filer och exekvering av koden. Dessa två koncept definierar funktionalitet gällande __global scope__. Grundläggande är allt som är definierat i __global scope__, tillgänglig i hela programmet. Det finns ett motstridande koncept som är att C++ blir exekverat rad för rad. Den huvudsakliga filen, där `main` [[funktionen|Functions]] är definierad, i programmet är den filen som kontrollerar i vilken ordning saker kommer att bli definierade. Om saker inte finns definierade innan de är kallade i huvudfilen, anses de inte vara i __global scope__. Om saker är definierade, enligt i huvud-programmets exekvering, finns de i __global scope__. Förutsatt att de är definierade utanför något annat scope, såsom `main`-funktionen.

```cc
int C = 2;                       // -------------+- 'c
                                 //              |
int main() {                     //              |
  // C finns tillgängligt        //              |
  // A finns inte tillgängligt   //              |
}                                //              |
                                 //              |
int A = 3;                       // --------+-'a |
                                 //         |    |
                                 //         |    |
```

När en variabel blir definierad i __global scope__ är standarden att skriva variabel namnet i SCREAMING_SNAKE_CASE.

```cc
int MY_GLOBAL_VARIABLE = 0;
```
