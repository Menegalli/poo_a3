#include <iostream>
#include "Empresa.hpp"
#include "Time.hpp"
#include "Jogador.hpp"

using namespace std;

/*
Nomes dos integrantes do grupo:

	1 - Leonardo Martins Menegalli
	2 - João Vitor da Silva Stefani
	3 - Vitoria Vieira da Silva
	
*/


int main()
{
	string empresa1;
	int escolha1, escolha2;
	string nome_time1, cat_time1;
	string nome_time2, cat_time2;
	string nome_j1, nome_j2, nome_j3, nome_j4, nome_j5, nome_j6;
	int dnasc_j1, dnasc_j2, dnasc_j3, dnasc_j4, dnasc_j5, dnasc_j6;
	string nacio_j1, nacio_j2, nacio_j3, nacio_j4, nacio_j5, nacio_j6;
	string cat_j1, cat_j2, cat_j3, cat_j4, cat_j5, cat_j6;
	double sal_j1, sal_j2, sal_j3, sal_j4, sal_j5, sal_j6;
	
	cout << "Digite o nome da empresa: ";
	cin >> empresa1;
	cout << endl;
	
	
	Empresa empresa(empresa1);
	
	cout << "Digite o nome do time 1: ";
	cin >> nome_time1;
	cout << endl;
	
	cout << "Categoria do time 1: \n\n";
	cout << "1 - Base / 2 - Profissional \n\n";
	cout << "Escolha a categoria do time 1: ";
	cin >> escolha1;
	cout << endl;
	
	if(escolha1 == 1){
		cat_time1 = "Base";
	} else if(escolha1 == 2){
		cat_time1 = "Profissional";
	} else {
		cat_time1 = "Sem categoria";
	}
	
	cout << "Digite o nome do time 2: ";
	cin >> nome_time2;
	cout << endl;
	
	cout << "Categoria do time 2: \n\n";
	cout << "1 - Base / 2 - Profissional \n\n";
	cout << "Escolha a categoria do time 2: ";
	cin >> escolha2;
	cout << endl;
	
	if(escolha2 == 1){
		cat_time2 = "Base";
	} else if(escolha2 == 2){
		cat_time2 = "Profissional";
	} else {
		cat_time2 = "Sem categoria";
	}
	
	Time t1(nome_time1, cat_time1);
	Time t2(nome_time2, cat_time2);
	
	// inicio get info jogador 1
	
	cout << "\n\n===============Jogador1===================\n" << endl;
	
	cout << "Digite o nome do jogador 1: ";
	cin >> nome_j1;
	cout << endl;
	
	cout << "Digite o ano de nascimento do jogador 1: ";
	cin >> dnasc_j1;
	cout << endl;
	
	cout << "Digite a nacionalidade do jogador 1: ";
	cin >> nacio_j1;
	cout << endl;
	
	cout << "Digite a categoria do jogador 1: ";
	cin >> cat_j1;
	cout << endl;
	
	cout << "Digite o salario bruto do jogador 1: ";
	cin >> sal_j1;
	cout << endl;
	
	cout << "\n\n===============FIM===================\n" << endl;
	
	// inicio get info jogador 2
	
	cout << "\n\n===============Jogador2===================\n" << endl;
	
	cout << "Digite o nome do jogador 2: ";
	cin >> nome_j2;
	cout << endl;
	
	cout << "Digite o ano de nascimento do jogador 2: ";
	cin >> dnasc_j2;
	cout << endl;
	
	cout << "Digite a nacionalidade do jogador 2: ";
	cin >> nacio_j2;
	cout << endl;
	
	cout << "Digite a categoria do jogador 2: ";
	cin >> cat_j2;
	cout << endl;
	
	cout << "Digite o salario bruto do jogador 2: ";
	cin >> sal_j2;
	cout << endl;
	
	cout << "\n\n===============FIM===================\n" << endl;
	
	// inicio get info jogador 3
	
	cout << "\n\n===============Jogador3===================\n" << endl;
	
	cout << "Digite o nome do jogador 3: ";
	cin >> nome_j3;
	cout << endl;
	
	cout << "Digite o ano de nascimento do jogador 3: ";
	cin >> dnasc_j3;
	cout << endl;
	
	cout << "Digite a nacionalidade do jogador 3: ";
	cin >> nacio_j3;
	cout << endl;
	
	cout << "Digite a categoria do jogador 3: ";
	cin >> cat_j3;
	cout << endl;
	
	cout << "Digite o salario bruto do jogador 3: ";
	cin >> sal_j3;
	cout << endl;
	
	cout << "\n\n===============FIM===================\n" << endl;
	
	
	Jogador j1(nome_j1, dnasc_j1, nacio_j1, cat_j1, sal_j1);	
	Jogador j2(nome_j2, dnasc_j2, nacio_j2, cat_j2, sal_j2);
	Jogador j3(nome_j3, dnasc_j3, nacio_j3, cat_j3, sal_j3);
	
	//metodos dos jogadores criados pelo usuario
	
	j1.mostrarIdade();
	j1.tempoAposentadoria();
	j1.getSalarioLiquido();
	
	j2.mostrarIdade();
	j2.tempoAposentadoria();
	j2.getSalarioLiquido();
	
	j3.mostrarIdade();
	j3.tempoAposentadoria();
	j3.getSalarioLiquido();
	
	//jogadores pré-definidos para o time 2
	
	Jogador j4("Taison", 1988, "Brasileiro", "Profissional", 760563.00);
	Jogador j5("Juan", 2003, "Colombiano", "Base", 4005.00);
	Jogador j6("Heitor", 1999, "Brasileiro", "Base", 3010.10);
	
	j4.mostrarIdade();
	j4.tempoAposentadoria();
	j4.getSalarioLiquido();
	
	j5.mostrarIdade();
	j5.tempoAposentadoria();
	j5.getSalarioLiquido();
	
	j6.mostrarIdade();
	j6.tempoAposentadoria();
	j6.getSalarioLiquido();
	
	// metodos dos times
	
	t1.adicionaJogador(j1.getNome(), j1.getDataNascimento(), j1.getNacionalidade(), j1.getCategoria(), j1.getSalarioBruto());
	t1.adicionaJogador(j2.getNome(), j2.getDataNascimento(), j2.getNacionalidade(), j2.getCategoria(), j2.getSalarioBruto());
	t1.adicionaJogador(j3.getNome(), j3.getDataNascimento(), j3.getNacionalidade(), j3.getCategoria(), j3.getSalarioBruto());
	
	t1.relatorioGeral();
	t1.relatorioFinanceiro();
	
	t2.adicionaJogador(j4.getNome(), j4.getDataNascimento(), j4.getNacionalidade(), j4.getCategoria(), j4.getSalarioBruto());
	t2.adicionaJogador(j5.getNome(), j5.getDataNascimento(), j5.getNacionalidade(), j5.getCategoria(), j5.getSalarioBruto());
	t2.adicionaJogador(j6.getNome(), j6.getDataNascimento(), j6.getNacionalidade(), j6.getCategoria(), j6.getSalarioBruto());

	t2.relatorioGeral();
	t2.relatorioFinanceiro();
	
	//metodos da empresa
	
	empresa.adicionaTime(t1);
	empresa.adicionaTime(t2);
	
	empresa.consultaDeJogador(j1.getNome());
	empresa.listaDeJogadores();
	empresa.relatorioFinanceiro();
	
	
	return 0;
}

