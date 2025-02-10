# If

Som sagt ovan så är `if` ett enkelt sätt att ha en __branch__ i ett program. I _C++_ så har vi tre huvudsaker som man behöver hålla reda på när man använder `if`. `if` exekverar en annan bit kod utifrån en _condition_. `else` kan följa `if`-blocket för att exekvera en bit kod ifall villkoret inte uppfylls. [Condition](https://en.cppreference.com/w/cpp/language/if#Condition) är en bit kod som evalueras till ett värde som bestämmer vilken __branch__ som programmet ska gå till.


### If utan else

```cc
int main() {
  if (true) {
    // my code that will always execute
  }

  if (false) {
    // my code that will never execute
  }
}
```


### If med else

```cc
int main() {
  if (false) {
    // my code that will never execute
  } else {
    // my code that will always execute
  }

  if (false) {
    // my code that will never execute
  } else if (true) {
    // my code that will always execute
  } else {
    // my code that will never execute
  }
}
```
