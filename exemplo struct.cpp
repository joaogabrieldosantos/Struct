#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	char sexo;
	int idade;
	bool temBigode;
	bool usaOculos;
	
};

void preencher(Pessoa &P){
	
	cout << "Me diga seu nome" << endl;
	cin >> P.nome;
	
	cout << "Qual seu sexo? " << endl;
	cin >> P.sexo;
	
	cout << "Me diga sua idade?" << endl;
	cin >> P.idade;
	
	cout << "Tem bigode? (0 = nao e 1 = sim)" << endl;
	cin >> P.temBigode;
	
	cout << "Ele usa oculos? (0 = nao e 1 = sim)" << endl;
	cin >> P.usaOculos;
	
	if (P.temBigode == true && P.usaOculos == true){
		
		
	}else if(P.temBigode == false && P.usaOculos == true){
		
		
	}else if (P.temBigode == true && P.usaOculos == false){
		
		
	}else if (P.temBigode == false && P.usaOculos == false){
		
		
	}
	
}

string verif (bool b){
	if (b == true){
		return "Sim";
		
	}else{
		return "Nao";
	}
}

int main(){
	
	Pessoa p1;
	preencher(p1);
	
	Pessoa p2;
	preencher(p2);
	
	Pessoa p3;
	preencher(p3);
	
	cout << "O nome da primeira pessoa eh: " << p1.nome << endl;
	
	cout << "De sexo: " << p1.sexo << endl;
	
	cout << "Tem " << p1.idade << " anos" << endl;
	
	cout << "Possui bigode? " << verif(p1.temBigode) << endl;
	
	cout << "Usa oculos? " << verif (p1.usaOculos) << endl;
	
	//-------------------------------------------------------------------------
	
	cout << "O nome da primeira pessoa eh: " << p2.nome << endl;
	
	cout << "De sexo: " << p2.sexo << endl;
	
	cout << "Tem " << p2.idade << " anos" << endl;
	
	cout << "Possui bigode? " << verif (p2.temBigode) << endl;
	
	cout << "Usa oculos? " << verif (p2.usaOculos) << endl;
	
	//--------------------------------------------------------------------------
	
	cout << "O nome da primeira pessoa eh: " << p3.nome << endl;
	
	cout << "De sexo: " << p3.sexo << endl;
	
	cout << "Tem " << p3.idade << " anos" << endl;
	
	cout << "Possui bigode? " << verif (p3.temBigode) << endl;
	
	cout << "Usa oculos? " << verif (p3.usaOculos) << endl;
	
}
