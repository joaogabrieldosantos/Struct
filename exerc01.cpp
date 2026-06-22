#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int idade;
	float altura;
	
};

void preencher(Pessoa &p){
	cout << "Qual seu nome? " << endl;
	cin >> p.nome;
	
	cout << "Qual sua idade? " << endl;
	cin >> p.idade;
	
	cout << "Qual sua altura? " << endl;
	cin >> p.altura;
	
	cout << "________________________________________________" << endl;
	
}

void escrev(Pessoa &p){
	cout << "Seu nome eh: " << p.nome << endl;
	
	cout << "Sua idade eh: " << p.idade << endl;
	
	cout << "Sua altura eh: " << p.altura << endl;
}

int main(){
	Pessoa p1;
	preencher(p1);
	
	Pessoa p2;
	preencher(p2);
	
	Pessoa p3;
	preencher(p3);
	
	escrev(p1);
	
	cout << "--------//------" << endl;
	
	escrev(p2);
	
	cout << "--------//------" << endl;
	
	escrev(p3);
	
	cout << "--------//------" << endl;
	
}
