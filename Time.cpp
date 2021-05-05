#include "Time.hpp"
#include <string>
#include <iostream>
using namespace std;

int Time::ultimoId = 0;

Time::Time(string nome, string categoria)
{
	this->id = geraId();
	this->nome = nome;
	this->categoria = categoria;
}


void Time::adicionaJogador(string nome, int dnasc, string nacio, string cat, double sb)
{
	conjuntoDeJogadores.push_back(Jogador(nome, dnasc, nacio, cat, sb));
}

void Time::relatorioGeral()
{
	cout << "\n//=======================================================//\n" << endl;
	cout << "\n\t Time: " << nome << endl;
	cout << "\n=======================================================\n" << endl;
	for(int i=0; i < conjuntoDeJogadores.size(); i++)
	{
		//imprime o nome dos jogadores
		cout << "\n\t Jogador " << i+1 << ":\n" << endl;
		conjuntoDeJogadores[i].imprimir();
	}
	cout << "//=======================================================//" << endl;
}

void Time::relatorioFinanceiro()
{
	cout << "$=======================================================$" << endl;
	cout << "\n\n\t Relatorio Financeiro do Time: " << nome << "\n\n" << endl;
	for(int i=0; i < conjuntoDeJogadores.size(); i++)
	{
		cout << "\n\n\t Nome: " << conjuntoDeJogadores[i].getNome() << " \n\t " << "Sal. Bruto: " << std::to_string(conjuntoDeJogadores[i].getSalarioBruto()) << " \n\t " << "Sal. Liquido: " << std::to_string(conjuntoDeJogadores[i].getSalarioLiquido()) << endl;
	}
	cout << "$=======================================================$" << endl;
}



void Time::getJogador(int id)
{
	cout << "a=======================================================" << endl;
	for(int i=0; i < conjuntoDeJogadores.size(); i++)
	{
		if(conjuntoDeJogadores[i].getId()==id)
			 cout << "\n\t Time: " << nome << ":\n\n\t " << "Nome: " << conjuntoDeJogadores[i].getNome() << " \n\t " << "Idade: " << conjuntoDeJogadores[i].getIdade() << " \n\t "  << "Sal. Bruto: " << std::to_string(conjuntoDeJogadores[i].getSalarioBruto()) << " \n\t " << "Sal. Liquido: " << std::to_string(conjuntoDeJogadores[i].getSalarioLiquido()) << endl;
	}
	cout << "b=======================================================" << endl;
}

int Time::geraId()
{
	ultimoId++;
	return ultimoId;
}

int Time::getId()
{
	return id;
}

string Time::getNome()
{
	return nome;
}

string Time::getCategoria()
{
	return categoria;
}

void Time::setNome(string n)
{
	nome = n;
}

void Time::setCategoria(string cat)
{
	categoria = cat;
}
