#include<iostream>
using namespace std;
int main(){
	
	//DETA SARI ASLINA (2217051117)
	
	float celcius;
    float reamur, fahreinhet, kelvin;
    
    cout<<"---------------------------------------------"<<endl;
    cout<<"...........     KONVERSI SUHU    ............"<<endl;
    cout<<endl;
    
    cout<<"masukan derajat celcius : ";
    cin>>celcius;
    
    reamur = 4.0/5.0 * celcius;
 	fahreinhet = 9.0/5.0 * celcius + 32;212;
 	kelvin = celcius + 273;
 	
 	cout<<"Reamur : "<<reamur<<endl;
	cout<<"Fahreinhet : "<<fahreinhet<<endl;
 	cout<<"Kelvin : "<<kelvin<<endl;

return 0;
}
