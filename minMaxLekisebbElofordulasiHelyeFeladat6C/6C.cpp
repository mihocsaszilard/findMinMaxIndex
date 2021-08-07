#include<iostream>
using namespace std;
int main()					//TOKELETESEN MUKODIK
{
	int n;
	cout<<"A tomb elemeinek a szama: ";
	cin>>n;
	int* t=new int [n];

	int maxindex=0;
	int max=t[0];

	for(int i=0;i<n;i++)
	{
		cout<<"A tomb "<<i+1<<". elem: ";
		cin>>t[i];
	}

	int min=t[0];
	int minindex=0;

	for(int j=0;j<n;j++)
	{
		if(t[j]>max)
		{
			max=t[j];
			maxindex=j+1;
		}
		else if(t[j]<min)
		{
			min=t[j];
			minindex=j+1;
		}
	}
	cout<<"A legnagyobb szam pozicioja: "<<maxindex<<endl;
	cout<<"A legnagyobb szam (ellenorzes): "<<max<<endl;
	cout<<endl;
	cout<<"A legkisebb szam pozicioja: "<<minindex<<endl;
	cout<<"A legkisebb szam (ellenorzes): "<<min<<endl;
	
	system ("pause");
	return 0;	
}