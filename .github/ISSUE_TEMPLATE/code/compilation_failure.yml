---
name: "Build Failure"
description: "Report an example failing to compile"
title: "[Build]: "
labels: ["building", "bug"]
assignees: ''
body:
  - type: markdown
    value: |
      Tack för att du rapporterar ett byggfel! Fyll i informationen nedan så att vi kan undersöka.  Se vår [C++-wiki]() för mer information.

  - type: input
    id: compiler
    label: Kompilator Använd
    description: Vilken kompilator använder du (t.ex. GCC, Clang, MSVC)? Inkludera versionen om möjligt.
    placeholder: t.ex. GCC 11.2.0
    required: true

  - type: input
    id: os
    label: Operativsystem
    description: Vilket operativsystem använder du?
    placeholder: t.ex. Ubuntu 20.04, Windows 10, macOS Monterey
    required: true

  - type: input
    id: code-file
    label: Länk till kodfil
    description: Vänligen tillhandahåll en länk till en fil som innehåller ett minimalt, självständigt exempel som visar byggfelet. Ju mindre exemplet är, desto bättre.
    placeholder: t.ex. https://gist.github.com/<username>/<hash>
    required: true

  - type: textarea
    id: build-output
    label: Byggutdata
    description: Klistra in den fullständiga byggutmatningen, inklusive eventuella felmeddelanden.
    placeholder: // Din byggutdata här
    value:
    rows: 10
    required: true

  - type: textarea
    id: steps-to-reproduce
    label: Steg för att återskapa
    description: Hur kan vi återskapa byggfelet?
    placeholder: 1. Klona repot...
    rows: 5
    required: true

  - type: textarea
    id: additional-context
    label: Ytterligare information (valfritt)
    description: Lägg till annan information som kan vara användbar.
    rows: 5
---
