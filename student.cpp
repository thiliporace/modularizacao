#include "student.h"
#include <iostream>

Estudante CriarEstudante(std::string matricula, std::string nome, float n1,
                         float n2, float sub, float pf) {
  Estudante novo = {
      matricula, nome, n1, n2, sub, pf,
  };
  return novo;
}

void Atualizarn1(Estudante estudante, float n1) { estudante.n1 = n1; }

void Print(const Estudante &estudante) {
  std::cout << "Matricula: " << estudante.matricula;
  std::cout << "Nome: " << estudante.nome;
  std::cout << "N1: " << estudante.n1;
}