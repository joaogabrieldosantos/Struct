#include <iostream>
using namespace std;

struct Aluno{
	
	int matri;
	
	float medi;
	
	string nome;
	
	float *vet;
	
	vet = new float[notas];
	
};

void notas(Aluno &n){
	cout << "Me diga seu nome: " << endl;
	cin >> n.nome;
	
	cout << "Qual seu numero de matricula? " << endl;
	cin >> n.matri;
	
	cout << "Me diga suas notas: " << endl;
	cin >> notas[1];
	
	cout << "Me diga suas nota2: " << endl;
	cin >> notas[2];
	
}

void media(Aluno &n){
	
	n.medi = n.vet[1] + n.vet[2]/ 2;
	
	cout << "Seu nome eh: " << n.nome << endl;
	cout << "Sua matricula eh: " << n.matri << endl;
	cout << "Suas notas sao: " << n.vet[1] << " e " << n.vet[2] << endl;
	cout << "Sua media eh: " << n.medi << endl;

}

int main(){
	Aluno n;
	
	notas[n1];
	
	notas[n2];

}
