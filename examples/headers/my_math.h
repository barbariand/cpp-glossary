// Vi kan använda '#pragma once' i många fall, men inte alla.
// Läs mer i wikin.
//
// #pragma once

#ifndef MY_MATH_H_
#define MY_MATH_H_

int add(int x, int y);

// This could be a violation of ODR (One definition rule).
// Gör inte detta, du vet inte hur din kod används, vilket
// är varför det är en warning. Se mer om varför i wikin.
//
// int add(int x, int y) {
//   return x + y;
// }

#endif
