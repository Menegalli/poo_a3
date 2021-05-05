#ifndef Empresa_hpp
#define Empresa_hpp

#include "Time.hpp"
#include <vector>
#include <string>
using namespace std;

class Empresa
{

public:
	
	Empresa(string nome);

	string getNome();
	void setNome(string n);
	
	void consultaDeJogador(string nome);
	
	void listaDeJogadores();
	void relatorioFinanceiro();
	void adicionaTime(Time time);
	
	

private:

	string nome;
	double static total_salarios;
	double static total_inss;
	double static total_impostos;
	
	vector <Time> times;
	Time time;
};

#endif /* Empresa_hpp */
