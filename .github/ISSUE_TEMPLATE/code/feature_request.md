---
name: "Code Feature Request"
description: "Propose a new feature or improvement in the code."
title: "[Feature]: "
labels: ["enhancement", "code"]
body:
  - type: markdown
    value: |
      Tack för att du föreslår en ny funktion eller förbättring i koden! Fyll i informationen nedan så att vi kan utvärdera ditt förslag.

  - type: textarea
    id: description
    label: Beskriv funktionen/förbättringen
    description: Förklara tydligt vilken ny funktion du vill ha eller vilken förbättring du föreslår.
    placeholder: Beskriv funktionen/förbättringen här.
    rows: 5
    required: true

  - type: textarea
    id: motivation
    label: Motivering
    description: Förklara varför du anser att den här funktionen/förbättringen är viktig. Vilka problem löser den eller vilka fördelar ger den?
    placeholder: Motivera ditt förslag här.
    rows: 5
    required: true

  - type: textarea
    id: proposed-solution
    label: Föreslagen lösning (Valfritt)
    description: Beskriv hur du skulle implementera den här funktionen/förbättringen.  Detta är valfritt, men hjälper oss att förstå ditt förslag bättre.
    placeholder: Beskriv din föreslagna lösning här.
    rows: 5

  - type: textarea
    id: example-usage
    label: Exempelanvändning (Valfritt)
    description: Ge ett exempel på hur den nya funktionen/förbättringen skulle användas i praktiken.
    placeholder: Ge ett exempel här.
    rows: 5

  - type: input
    id: relevant-code
    label: Relevant kod (om tillämpligt)
    description: Om din funktion/förbättring relaterar till specifik kod i `barbariand/cpp-glossary`, ange filnamn och/eller relevanta rader.
    placeholder: t.ex. exempel/min_funktion.cpp, rad 10-20


  - type: textarea
    id: additional-context
    label: Ytterligare sammanhang (Valfritt)
    description: Lägg till annan information som kan vara användbar.
    rows: 5
assignees: ''
---
