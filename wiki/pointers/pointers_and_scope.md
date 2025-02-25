# Scoped pointers

En pointer är en variabel och detta betyder att de har en lifetime och bara kan användas i scopet som variabeln finns i. När pointers går ut ur scope är det bara själva minnes addresen(nummret) som ges tillbaka till Operativsystemet och inte de underliggande värdet.
```cc

int* b;
{
    int* a = new int(1);
    b = a;
}   // a is deleted here but not the value behind a
int* c = b;
delete b;// b is deleted and here beacuse it is a pointer to an int when you explicitly delete it the value that is at the memory adress is delted aswell.
// std::cout << c; // this is dangerous and can lead to a segfault.
// c is deleted but not the value behind becuse it has already been `freed`
```

När vi deletar ett värde bakom en pointer kallar vi det att _free_ a värdet, för attt fatta hur att glöma detta blir problematiskt se [[./../]].
Detta gör saker enklare när du har stora saker som ska kunna ha åtkomst till på flera ställen.
