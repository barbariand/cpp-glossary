# Static types och variabler

Variabler är bas för programmering, att kunna _hålla_ information, _mutera_ (ändra)_ _informationen och sedan _se_ vilken information som variabeln håller. Det finns två vitala sätt som variabler i _C++_ skiljer sig från andra språk som _Python_: __Static types__ och __lagring__.

__Static types__ betyder att vi explicit definierar vad som kommer att ligga i en variabel. Det betyder att vi måste explicit säga att variabeln `my_text` kommer innehålla en `string`. Det finns huvudsakligen två anledningar till detta: För att veta vilka handlingar som vi kan utföra på en typ. För att veta storleken på det som ska ligga i minnet, vilket för oss in på __lagring__.

__Lagring__ i detta fall betyder vilken storlek och position i minnet som en variabel tar upp. Eftersom _C++_ är ett systemspråk betyder det att det måste interagera direkt med minnet. Allt _C++_ vet är det som du berättar om hur memory ser ut, inget mer. Det gör att __Static types__ definierar ordningen och storleken på bitar i minnet.
