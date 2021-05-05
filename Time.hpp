#ifndef Time_hpp
#define Time_hpp

#include "Jogador.hpp"
#include <vector>
#include <string>
using namespace std;

class Time
{

public:
	Time(){};
	Time(string nome, string categoria);
	
	void adicionaJogador(string nome, int dnasc, string nacio, string cat, double sb);
	void adicionaJogadores(int id);
	void relatorioGeral();
	void relatorioTeste();
	void relatorioFinanceiro();
	void getJogador(int id);
	
	int getId();
	string getNome();
	string getCategoria();
	
	void setNome(string n);
	void setCategoria(string cat);
	
	vector<Jogador> getConjuntoDeJogadores(){ return conjuntoDeJogadores;}
		
	
private:
	
	int id;
	int static ultimoId;
	int geraId();
	
	string nome;
	string categoria;
	
	vector <Jogador> conjuntoDeJogadores;
	vector<int> jg;

};

#endif /* Time_hpp */
