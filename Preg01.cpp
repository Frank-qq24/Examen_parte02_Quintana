#include<iostream>

using namespace std;


int main(){
	int n=0;
	float suma=0;
	cout<<"Digite el numero de termino:";cin>>n;
	
	for(int i=1; i<=n;i++){
		float a=1;
		float b=1;
		
		for(int j=1; j<=2+i;j++){
			a= a*j;
		}
		
		for(int k=1; k<=5*i;k++){
			b= b*k;
		}
		suma= suma + (a/b);
		cout<<a<<"/"<<b<<" + ";
	}
	
	cout<<endl<<suma<<endl;
	return 0;
}