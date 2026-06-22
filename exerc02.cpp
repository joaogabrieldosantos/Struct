#include <iostream>
using namespace std;

struct Retangulo{

	float largura;
	float altura;
	float area;
	float perimetro;
	
};

void area(Retangulo &a){
	cout << "Me de a altura do retangulo" << endl;
	cin >> a.altura;
	
	cout << "Me de a largura do retangulo" << endl;
	cin >> a.largura;
	
	a.area = a.altura * a.largura;
	
	a.perimetro = (2* a.altura) + (2* a.largura);
	
	cout << "------------------------------------------" << endl;
	
}

void preenche(Retangulo &a){
	cout << "Sua altura eh: " << a.altura << endl;
	
	cout << " " << endl;
	
	cout << "Sua largura eh: " << a.largura << endl;
	
	cout << " " << endl;
	
	cout << "Sua area ficou em: " << a.area << endl;
	
	cout << " " << endl;
	
	cout << "Seu perimetro ficou em: " << a.perimetro << endl;
	
	cout << "------------------------------------------" << endl;
}

int main(){
	Retangulo p1;
	
	area(p1);
	
	Retangulo p2;
	
	area(p2);
	
	Retangulo p3;
	
	area(p3);
	
	preenche(p1);
	
	preenche(p2);
	
	preenche(p3);
	
	return 0;
}
