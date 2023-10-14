#include<iostream>
using namespace std;

int main()
{
	float uts,uas,quis,tugas,projek,rata_rata;
    int total,rata;
    
    cout<<"======================================="<<endl;
	cout<<"||  menghitung jumlah dan rata-rata  ||"<<endl;
	cout<<"======================================="<<endl;
	cout<<" masukkan nilai uts =";
	cin>>uts;
	cout<<" masukkan nilai uas =";
	cin>>uas;
	cout<<" masukkan nilai tugas =";
	cin>>tugas;
	cout<<" masukkan nilai quis =";
	cin>>quis;
	cout<<" masukkan nilai projek =";
	cin>>projek;
   
    cout<<"======================================="<<endl;
    cout<<" seluruh nilai"<<endl;
    cout<<"======================================="<<endl;
    total=uts+uas+quis+tugas+projek;
    cout<<" nilai jumlah ="<<total<<endl;
    rata=total/3;
    cout<<" nilai rata-rata ="<<rata<<endl;
    
    if(rata >=90)
    {
    	cout<<" predikat nilai A"<<endl;
	}
	else if(rata >= 80)
	{
		cout<<" predikat nilai B"<<endl;
	}
	else if(rata >= 70)
	{
		cout<<" predikat nilai C"<<endl;
	}
	else if(rata >= 50)
	{
		cout<<" predikat nilai D"<<endl;
	}
	else
	{
		cout<<" belajar lagiii"<<endl;
	}
	
}
