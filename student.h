#include <iostream>

#ifndef __STUDENT_H__
#define __STUDENT_H__

struct Estudante {
  std::string matricula;
  std::string nome;
  float n1, n2, sub, pf;
};
void Print(const Estudante& estudante);
#endif