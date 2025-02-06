# Switch

`switch` är till för att matcha ints eller Enums mot flera andra ints eller enums och exekvera kod utifrån det; läs mer på [cppreference](https://en.cppreference.com/w/cpp/language/switch). `switch` är fundamentalt olikt till `if` även om det representerar en lösning till samma problem. Exempelvis kan det se ut såhär:

```cc
switch (my_variable) {
  case 1:
    std::cout << 1 << std::endl;
  case 2:
    std::cout << 2 << std::endl;
    break;
  default:
    std::cout << “default” << std::endl;
}
```

`switch` matchar variabeln tills att den hittar en match annars använder den default. När _control _ser en match för `my_variabel` så kommer den att börja exekvera därifrån och fortsätta genom nästa `case` tills att den träffar `break;`.

Om vi ansätter 1 i variabeln `my_variable` hade vi sett output:en

```
1
2
```

Vi ser här att vi exekverar både fallet när `my_variable` är lika med 1 men efteråt även 2. Vi ser dock inte fallet `default` bli exekverat. Det är på grund av `break`, som avbryter exekveringen i fallet 2.

Om vi istället ansätter 2 i variabeln `my_variable` hade vi sett output:en

```
2
```

Här ser vi endast att fallet där `my_variable` är lika med 2 exekvera.

Om vi ansätter någonting annat, t.ex. 3 i variabeln `my_variable` hade vi sett output:en

```
default
```

`default` är till för att matcha allt, oavsett vad som stoppas in i `switch`. Lägg märke till att annat blir matchat istället för `default`. Det är bra att alltid lägga `default` sist så att man kan läsa igenom alla fall och sedan se vad som sker i resten.
