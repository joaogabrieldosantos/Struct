#include <iostream>
using namespace std;

struct Aluno{
	
	int matri;
	
	float medi;
	
	string nome;
	
	
	float vet[2];
	
};

void notas(Aluno &n){
	cout << "Me diga seu nome: " << endl;
	cin >> n.nome;
	
	cout << "Qual seu numero de matricula? " << endl;
	cin >> n.matri;
	
	cout << "Me diga sua primeira nota: " << endl;
	cin >> n.vet[0];
	
	cout << "Me diga sua segunda nota: " << endl;
	cin >> n.vet[1];
	
	n.medi = ((n.vet[0] + n.vet[1])/ 2);
	
}

void media(Aluno &n){
	
	cout << "Seu nome eh: " << n.nome << endl;
	cout << "Sua matricula eh: " << n.matri << endl;
	cout << "Suas notas sao: " << n.vet[0] << " e " << n.vet[1] << endl;
	cout << "Sua media eh: " << n.medi << endl;

}

int main(){
	Aluno n1;
	
	notas(n1);
	
	Aluno n2;
	
	notas(n2);
	
	cout << "---------------------------------------" << endl;
	
	media(n1);
	
	cout << "---------------------------------------" << endl;
	
	media(n2);
	
	cout << "---------------------------------------" << endl;

}
