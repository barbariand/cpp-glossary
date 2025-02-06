---
name: "Wiki Feature Request"
description: "Suggest updates or additions to the Wiki."
title: "[Docs]: "
labels: ["enhancement", "wiki"]
body:
  - type: markdown
    value: |
      Tack för att du föreslår en uppdatering eller ett tillägg till wikin! Fyll i informationen nedan så att vi kan utvärdera ditt förslag.

  - type: textarea
    id: description
    label: Beskriv förslaget
    description: Förklara tydligt vilken uppdatering eller vilket tillägg du föreslår.
    placeholder: Beskriv ditt förslag här.
    rows: 5
    required: true

  - type: textarea
    id: motivation
    label: Motivering
    description: Förklara varför du anser att den här uppdateringen/tillägget är viktig. Vilka problem löser den eller vilka fördelar ger den?
    placeholder: Motivera ditt förslag här.
    rows: 5
    required: true

  - type: textarea
    id: proposed-content (Optional)
    label: Föreslaget innehåll
    description: Om du har ett utkast till det nya innehållet, klistra in det här. Detta är valfritt, men hjälper oss att förstå ditt förslag bättre.
    placeholder: Klistra in ditt föreslagna innehåll här.
    rows: 10

  - type: input
    id: relevant-page
    label: Relevant sida (om tillämpligt)
    description: Om ditt förslag relaterar till en specifik sida i wikin, ange sidans namn eller URL.
    placeholder: t.ex. https://github.com/barbariand/cpp-glossary/wiki/Någon-Sida

  - type: textarea
    id: additional-context
    label: Ytterligare sammanhang (Valfritt)
    description: Lägg till annan information som kan vara användbar.
    rows:
---
