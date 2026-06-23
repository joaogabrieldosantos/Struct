#include <iostream>
using namespace std;

struct Data{
	
	int dia;
	int mes;
	int ano;
	
	string mes2;
};


int conc(Data &d){
	
	cout << "Me diga que dia quer: ";
	
	cin >> d.dia;
	
	if(d.dia <= 0){
		cout << " Nao existe dia Zero, nem negativo!! " << endl;
		return 0;
		
	}else if(d.dia >= 31){
		cout << " Nao existe como um mes ter mais de 30 dias " << endl;
		return 0;
		
	}
	
	cout << " " << endl;
	
	cout << "Me diga que mes quer: ";
	cin >> d.mes;
	
	if (d.mes <=0 ){
		cout << " Nao tem como ser mes negativo nem mes zero ne!!! " << endl;
		return 0;
		
	}else if(d.mes > 12){
		cout << " Nao existe como um ano ter mais de 12 meses!! " << endl;
		return 0;
		
	}
	
	switch(d.mes){
		
		case 1:
			
			d.mes2 = ' Janeiro ';
			
			break;
			
		case 2: 
		
		d.mes2 = ' Fevereiro ';
		
		break;
		
		case 3:
			
			d.mes2 = ' Marco ';
			
			break;
			
		case 4: 
		
		d.mes2 = ' Abril ';
	
		break;
		
		case 5:
			
			d.mes2 = ' Maio ';
		
			break;
			
		case 6: 
		
		d.mes2 = ' Junho ';
	
		break;
		
		case 7:
			
			d.mes2 = ' Julho ';
	
			break;
			
		case 8: 
		
		d.mes2 = 'Agosto';
	
		break;
		
		case 9:
			
			d.mes2 = ' Setembro ';
		
			break;
			
		case 10: 
		
		d.mes2 = ' Outubro ';
	
		break;
		
		case 11:
			
			d.mes2 = ' Novembro ';

			break;
			
		case 12: 
		
		d.mes2 = 'Desembro';

		break;
		
	}
	
	cout << " " << endl;
	
	cout << "Me diga que ano quer: ";
	
	cin >> d.ano;
	
	cout << " " << endl;
	
	
}

int verif(Data &d){
	
	if(d.dia <= 30){
		cout << d.dia << " de ";
		
	}else if(d.dia <= 0){
	
	return 0;
		
	}else if(d.dia >= 31){
		
	return 0;
		
	}
	
	cout << d.mes2 << " de ";
	
	if(d.ano <= 2026){
	    cout << d.ano << " depois de Cristo existe! " << endl;
	
	}else if(d.ano < 0){
		cout << d.ano << " antes de Cristo existe! " << endl;
		
	}else if(d.ano > 2027){
		cout << " Nao chegamos nesse ano ainda, por isso nao irei contabilizar, tente dnv " << endl;
	return 0;
		
	}
	
}

int main(){
	
	Data d1;
	
	conc(d1);
	
	verif (d1);
	
}
