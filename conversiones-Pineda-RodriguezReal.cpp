#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int repetir=0;
do{
	int a=0,b=0,num=0,c=0,d=0,e=0;
	string binario=" ", octal=" ", hexadecimal=" ";

	cout<<endl<<endl<<"Digite el numero en decimal para hacer la conversion ";
	cin>>num;

//BINARIO
	a=num;
	while(a>0){
		if(a%2==0){
			binario ="0"+binario;
		}
		if(a%2!=0){
			binario ="1"+binario;
		}	
		a/=2;
	}
//OCTAL
	b=num;
	while(b>0){
		c=b%8;
		switch(c){
			case 1:
				octal="1"+octal;
				break;
			case 2:
				octal="2"+octal;
				break;
			case 3:
				octal="3"+octal;
				break;
			case 4:
				octal="4"+octal;
				break;
			case 5:
				octal="5"+octal;
				break;
			case 6:
				octal="6"+octal;
				break;
			case 7:
				octal="7"+octal;
				break;
			case 0:
				octal="0"+octal;
				break;
		}
		
		b/=8;
	}
//HEXADECIMAL
	d=num;
	while(d>0){
		e=d%16;
		switch(e){
			case 0:
				hexadecimal="0"+hexadecimal;
				break;
			case 1:
				hexadecimal="1"+hexadecimal;
				break;
			case 2:
				hexadecimal="2"+hexadecimal;
				break;
			case 3:
				hexadecimal="3"+hexadecimal;
				break;
			case 4:
				hexadecimal="4"+hexadecimal;
				break;
			case 5:
				hexadecimal="5"+hexadecimal;
				break;
			case 6:
				hexadecimal="6"+hexadecimal;
				break;
			case 7:
				hexadecimal="7"+hexadecimal;
				break;
			case 8:
				hexadecimal="8"+hexadecimal;
				break;
			case 9:
				hexadecimal="9"+hexadecimal;
				break;
			case 10:
				hexadecimal="A"+hexadecimal;
				break;
			case 11:
				hexadecimal="B"+hexadecimal;
				break;
			case 12:
				hexadecimal="C"+hexadecimal;
				break;
			case 13:
				hexadecimal="D"+hexadecimal;
				break;
			case 14:
				hexadecimal="E"+hexadecimal;
				break;
			case 15:
				hexadecimal="F"+hexadecimal;
				break;

		}
		
		d/=16;
	}
	
	cout<<"El numero "<<num<< " en diferentes bases es: "<<endl;
	cout<< "Binario (base 2): "<<binario <<endl;
	cout<< "Octal (base 8): "<<octal <<endl;
	cout<< "Hexadecimal (base 16): "<<hexadecimal<<endl<<endl<<endl;
	cout<< "Necesita convertir otro numero. Digite"<<endl<<"1.SI"<<endl<<"2.NO"<<endl;
	cin>>repetir;
}
		while(repetir==1);
	return 0;
}
