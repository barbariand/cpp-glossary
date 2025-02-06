# Referance och dereferance

Två av termerna som kommer i användningen av pointers är “__reference__” och “__dereference__”. __Reference__ betyder att du håller ett värde och tar en __pointer__ till det värdet. __Dereference__ är motsatsen, att du har en pointer och får ett värde.


## Syntax

Det finns två sätt att se __pointer__ syntax, “types” och “values”. I _types_ beskriver syntaxen “när operationen har skett, får vi underliggande typen …”. I _values _så beskriver syntaxen det faktiska operationen som sker. Det kan göra det svårt att tolka __pointer__-syntax.

Gällande värden:



* `*` betyder “ __dereference__ ”
* `&` betyder “ __reference__ ”

```cc
value = *pointer; // Dereferencar pointer
pointer = &value; // Referencar value
```

Gällande typer där T är en type i C++:



* `*` betyder “underliggande värdet till __pointern__ har typen T när den är __dereferenced__ ”

```cc
int* pointer = &12; // Håller en pointer till ett värde av typen `int`
```

Det finns ytterligare syntax som används i andra områden som [[funktioner|Functions]] och [[klasser|Classes]]. Det är inte nödvändigt för att förstå __pointers __utan endast bygger på existerande funktionalitet.


## Example

__Pointers__ kommer _oftast_ att vara annorlunda varje gång som programmet exekveras. Vi behöver inte veta varför detta sker just nu det är för säkerhet.

```cc
int main() {
  int variable = 12;
  int* pointer_to_my_variable = &variable;

  std::cout << pointer_to_my_variable << std::endl;
  // output (något i stil med):
  // 0x7fffc9d3f9a4
  int dereferenced_pointer_to_my_variable = *pointer_to_my_variable;
  std::cout << dereferenced_pointer_to_my_variable << std::endl;
  // output:
  // 12
}
```
