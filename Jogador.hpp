#ifndef Jogador_hpp
#define Jogador_hpp
#include <string>
using namespace std;

class Jogador{

public:
	
	Jogador(){};
	Jogador(string n, int dnasc, string nacio, string cat, double sb);
	
	int getId();
	
	string getNome();
	string getNacionalidade();
	string getCategoria();
	double getSalarioBruto();
	double getSalarioLiquido();
	
	int getDataNascimento();
	int calcularIdade();
	void mostrarIdade();
	int getIdade();
	void tempoAposentadoria();
	void imprimir();
	
	void setNome(string n);
	void setDataNascimento(int dnasc);
	void setNacionalidade(string nacio);
	void setCategoria(string cat);
	void setSalarioBruto(double sb);

private:
	
	int id;
	int static ultimoId;
	int geraId();
	
	string nome;
	int dataNascimento;
	int idade;
	string nacionalidade;
	string categoria;
	double salarioBruto;

};

#endif /* Jogador_hpp */
