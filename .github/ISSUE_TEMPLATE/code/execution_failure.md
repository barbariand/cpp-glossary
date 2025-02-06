---
name: "Execution Failure"
description: "Report an example not running as expected"
title: "[Execution]: "
labels: ["execution", "bug"]
body:
  - type: markdown
    value: |
      Tack för att du rapporterar ett exekveringsfel! Fyll i informationen nedan så att vi kan undersöka.

  - type: input
    id: program
    label: Program
    description: Vilket exempel upplever du problem med? (Namn eller beskrivning)
    placeholder: t.ex. MittProgram, TestSuite
    required: true

  - type: input
    id: os
    label: Operativsystem
    description: Vilket operativsystem använder du?
    placeholder: t.ex. Ubuntu 20.04, Windows 10, macOS Monterey
    required: true

  - type: input
    id: compiler
    label: Kompilator (om relevant)
    description: Vilken kompilator använde du om programmet är kompilerat? (t.ex. GCC, Clang, vs2022) Inkludera versionen om möjligt.
    placeholder: t.ex. GCC 11.2.0 (Lämna tomt om inte tillämpligt)

  - type: input
    id: code-file
    label: Länk till kodfil (om relevant)
    description: En självständig bit kod som ger motsvarande exekveringsfel (Om applicerbart till problemet).
    placeholder: t.ex. https://gist.github.com/<username>/<hash>

  - type: textarea
    id: input
    label: Indata (om relevant)
    description: Vilken indata använde du för programmet?
    placeholder: Skriv in indatan här.
    rows: 5

  - type: textarea
    id: actual-output
    label: Faktiskt resultat
    description: Vad var det faktiska resultatet av programmet?
    placeholder: Klistra in den faktiska utmatningen här.
    rows: 5
    required: true

  - type: textarea
    id: expected-output
    label: Förväntat resultat
    description: Vad var det förväntade resultatet av programmet?
    placeholder: Klistra in den förväntade utmatningen här.
    rows: 5
    required: true

  - type: textarea
    id: steps-to-reproduce
    label: Steg för att återskapa
    description: Hur kan vi återskapa exekveringsfelet?
    placeholder: 1. Kör programmet...
    rows: 5
    required: true

  - type: textarea
    id: additional-context
    label: Ytterligare sammanhang (Valfritt)
    description: Lägg till annan information som kan vara användbar.
    rows: 5
assignees: ''
---
