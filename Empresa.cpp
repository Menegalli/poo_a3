#include "Empresa.hpp"
#include "Time.hpp"
#include "Jogador.hpp"
#include <string>
#include <iostream>
using namespace std;

double Empresa::total_salarios = 0.0;
double Empresa::total_inss = 0.0;
double Empresa::total_impostos = 0.0;

Empresa::Empresa(string nome)
{
	this->nome = nome;
}

void Empresa::adicionaTime(Time time)
{
	times.push_back(time);
}


void Empresa::consultaDeJogador(string nome)
{
	cout << "a=======================================================" << endl;
	for(int i=0; i < times.size(); i++)
	{
		for(int j=0; j < times[i].getConjuntoDeJogadores().size(); j++)
		{
			if(times[i].getConjuntoDeJogadores()[j].getNome()==nome)
				cout << "\n\t Time: " << times[i].getNome() << "\n\n\t " << "Nome: " << times[i].getConjuntoDeJogadores()[j].getNome() << " \n\t " << "Idade: " << times[i].getConjuntoDeJogadores()[j].getIdade() << " \n\t "  << "Sal. Bruto: " << std::to_string(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()) << " \n\t " << "Sal. Liquido: " << std::to_string(times[i].getConjuntoDeJogadores()[j].getSalarioLiquido()) << endl;
		}
	
	}
	cout << "b=======================================================" << endl;
}


void Empresa::listaDeJogadores()
{
	cout << "=======================================================" << endl;
	cout << "\n\n\t Lista de Jogadores da Empresa \n\n" << endl;
	for(int i=0; i < times.size(); i++)
	{
		for(int j=0; j < times[i].getConjuntoDeJogadores().size(); j++)
		{
			cout << " \n\t " << times[i].getConjuntoDeJogadores()[j].getNome() << endl;
		}
	}
	cout << "=======================================================" << endl;	
}

void Empresa::relatorioFinanceiro()
{
	cout << "=======================================================" << endl;
	cout << "tamanho: " << times[1].getConjuntoDeJogadores().size();
	for(int i=0; i < times.size(); i++)
	{
		cout << "\n\t Time: " << times[i].getNome() << endl;
		for(int j=0; j < times[i].getConjuntoDeJogadores().size(); j++)
		{
			total_salarios = total_salarios + times[i].getConjuntoDeJogadores()[j].getSalarioLiquido();
			if(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()  <= 1100.00)
			{
				total_inss = total_inss + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.075);
				
			} else if(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()  <= 2000.00)
			{
				total_inss = total_inss + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.09);
				total_impostos = total_impostos + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.075);
				
			}  else if(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()  <= 3100.00)
			{
				total_inss = total_inss + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.12);
				total_impostos = total_impostos + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.15);
				
			}  else if(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()  <= 4100.00)
			{
				total_inss = total_inss + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.14);
				total_impostos = total_impostos + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.22);
				
			}  else if(times[i].getConjuntoDeJogadores()[j].getSalarioBruto()  > 4100.00)
			{
				total_inss = total_inss + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.14);
				total_impostos = total_impostos + (times[i].getConjuntoDeJogadores()[j].getSalarioBruto() * 0.27);
				
			}
			
		}
		cout << "\n\t Valor total a ser pago em salarios: " << std::to_string(total_salarios) << "\n\t Valor total a ser destinado ao INSS: " << std::to_string(total_inss) << "\n\t Valor retido ao imposto de renda: " << std::to_string(total_impostos) << endl;
	}
	cout << "=======================================================" << endl;
}

string Empresa::getNome()
{
	return nome;
}

void Empresa::setNome(string n)
{
	nome = n;
}


