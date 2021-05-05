#include <string>
#include <iostream>
#include "Jogador.hpp"
using namespace std;

int Jogador::ultimoId = 0;

Jogador::Jogador(string n, int dnasc, string nacio, string cat, double sb)
{
	this->id = geraId();
	this->nome = n;
	this->dataNascimento = dnasc;
	this->idade = calcularIdade();
	this->nacionalidade = nacio;
	this->categoria = cat;
	this->salarioBruto = sb > 0 ? sb : 0.0;

}

int Jogador::geraId()
{
	ultimoId++;
	return ultimoId;
}

int Jogador::calcularIdade()
{
	idade = 2021 - dataNascimento;
	return idade;
}

void Jogador::mostrarIdade()
{
	cout << "\n\tO jogador " << nome << " tem " << idade << " anos\n\n";
}


void Jogador::tempoAposentadoria()
{
	cout << "=======================================================" << endl;
	if(idade == 40){
		cout << "\n\t O jogador " << nome << " vai se aposentar neste ano!\n" << endl;
	} else {
		cout << "\n\t Faltam " << (40-idade) << " anos para o jogador " << nome << " se aposentar!\n" << endl;
	}
	cout << "=======================================================" << endl;
}

void Jogador::imprimir()
{
	cout << "\n\n=======================================================\n\n" << endl;
	cout << "\n\t ID: " << id << " \n\t " <<"Nome: " << nome << " \n\t " << "Idade: " << idade << " \n\t " << "Nacionalidade: " << nacionalidade << " \n\t " << "Categoria: " << categoria << " \n\t " << "Sal. Bruto: " << salarioBruto << " \n\t " << "Sal. Liquido: " << std::to_string(getSalarioLiquido()) << endl; 
	cout << "\n\n=======================================================\n\n" << endl;
}

int Jogador::getId()
{
	return id;
}

string Jogador::getNome()
{
	return nome;
}

int Jogador::getDataNascimento()
{
	return dataNascimento;
}

string Jogador::getNacionalidade()
{
	return nacionalidade;
}

string Jogador::getCategoria()
{
	return categoria;
}

int Jogador::getIdade()
{
	return idade;
}

double Jogador::getSalarioBruto()
{
	return salarioBruto;
}

double Jogador::getSalarioLiquido()
{
	if(salarioBruto <= 1100.00){
		return salarioBruto - (salarioBruto * 0.075);
		
	} else if(salarioBruto <= 2000.00){
		return salarioBruto - ((salarioBruto * 0.09) + (salarioBruto * 0.075));
		
	} else if(salarioBruto <= 3100.00){
		return salarioBruto - ((salarioBruto * 0.12) + (salarioBruto * 0.15));
		
	} else if(salarioBruto <= 4100.00){
		return salarioBruto - ((salarioBruto * 0.14) + (salarioBruto * 0.22));
		
	} else if(salarioBruto > 4100.00){
		return salarioBruto - ((salarioBruto * 0.14) + (salarioBruto * 0.27));
		
	}
}

void Jogador::setNome(string n)
{
	nome = n;
}

void Jogador::setDataNascimento(int dnasc)
{
	dataNascimento = dnasc;
}

void Jogador::setNacionalidade(string nacio)
{
	nacionalidade = nacio;
}

void Jogador::setCategoria(string cat)
{
	categoria = cat;
}

void Jogador::setSalarioBruto(double sb)
{
	salarioBruto = sb;
}


