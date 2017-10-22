#include <iostream>
using namespace std;

int main(){
	double lr,p=1.87596,jbp,bp,bpp,a,b,jbph,tb;
	cout<<"luas rumah : ";
	cin>>lr;
	cout<<"jumlah box parket : ";
	cin>>jbp;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"luas rumah : "<<lr;cout<<" m2"<<endl;
	cout<<"luas 1 box parket : "<<p;cout<<" m2"<<endl;
	a=p*jbp;
	b+lr/a;
	jbph=b*105/100;
	cout<<"jumlah box parket : "<<jbph<<endl;
	bp=jbph*500;
	cout<<"biaya parket(Rp) : "<<bp<<endl;
	bpp=lr*20;
	cout<<"Biaya pasang (Rp) : "<<bpp<<endl;
	tb=bp+bpp;
	cout<<"total biaya (Rp) : "<<tb<<endl;
}
