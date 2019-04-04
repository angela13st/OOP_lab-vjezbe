//3. Napisati klasu koja predstavlja metu.
//Meta je oblika pravokutnika i zadana je donjom lijevom tockom, sirinom i visinom.
//Ima dva stanja : pogodena i nepogodena
#include<conio.h>
#include <iostream>
#include<stdio.h>
#include "Meta.h"
using namespace std;


int main()
{
	Meta meta;
	meta.Stvaranje();
	double x, y;
	cout << "Unesi x:" << endl;
	cin >> x;
	cout << "Unesi y:" << endl;
	cin >> y;
	cout << "x i y su:" << x << y << endl;
	if ((x<meta.tockaax || x>meta.tockabx) || (y<meta.tockaay || y>meta.tockady))
	{
		meta.Nepogodeno = 1;
	}
	else
	{
		meta.Pogodeno = 1;
	
	}
	if(meta.Pogodeno==1)
		cout << "meta je pogodena" << endl;
	else
		cout << "meta nije pogodena" << endl;
	_getch();
}
