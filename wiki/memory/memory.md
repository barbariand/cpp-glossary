# Memory

När en applikation startar får den en bit arbetsminne (__RAM__) som applikationen kan använda för att utföra sina uppgifter. Vad applikationen ser är egentligen bara en lång sekvens av ettor och nollor. Det är hur dessa ettor och nollor tolkas som gör att den kan spara och läsa information från arbetsminnet.

Vi delar upp sekvensen av ettor och nollor i andelar, dessa kallas __bits__ och __bytes__. __Bit__ är namnet på en av dessa ettor/nollor och kan endast vara noll eller ett. Genom att kombinera flera __bit__ kan vi få värden som är större än ett. Vi använder det [binära talsystemet](https://sv.wikipedia.org/wiki/Bin%C3%A4ra_talsystemet) för att uppnå detta. __Byte__ är en konvention som representerar åtta __bits__. Det är specifikt åtta __bits__ eftersom __ascii__ behövde storleken för att representera en karaktär i en sekvens av tecken. Det bara råkade vara så att det blev populärt.

När vi placerar flera nummer i minnet definierar vi storleken och läser från början till slut. Till exempel om vi har fyra nummer som är fyra __bits__ stora skulle vi kunna ha följande:

0001001000111000

Vilket ger talen:

0001|0010|0011|1000

0001 = 1

0010 = 2

0011 = 3

1000 = 15

Men som sagt så vet vi inte att det är fyra nummer utan att även veta storleken på de olika talen. Det skulle även kunna läsas som:

0001|00100011|1000

eller

0001|0010|00111000

Allt beror på hur vi väljer att definiera det i vårt program.
