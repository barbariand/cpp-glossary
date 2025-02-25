# Lifetimes

Vi kallar tiden variablen lever för en __lifetime__. Att leva och vara i scope är inte samma sak då lifetimen av en variable tar slut när den frigörs(free) eller när den förstörs( [[destrueras|Destructors]] ).

```cc

int A=1;                  // ----------------+-- 'a
int main() {              //                 |
    int b;                // ---------+-- 'b |
    {                     //          |      |
        int c = 5;        // -+-- 'c  |      |
        //more code       //  |       |      |
    }                     // -+       |      |
                          //          |      |
}                         // ---------+      |
                          //                 |

```

När minnet har tagits tillbaka har __lifetimen__ tagit slut. __Lifetimes__ definierar när vi har åtkomst till variabler och hur länge de existerar. I ovan exempel har vi 3 variabler som har __lifetimes__ inom 3 olika __scopes__. `A` finns åtkomligt i hela exemplet. `b` finns åtkomligt i hela [[funktionens|Functions]] __scope__. `c` finns endast i det lilla inre __scopet__.
