#include <iostream>
using namespace std;
/*int main() 
	
{
	int a;
	int* p = &a;
	cout<<"Enter a number :" ;
	cin >> a;
	cout << "address of the given number : "<<p ;
}
int main()
{  
     int a;
     int* p = & a;
     cout << "Enter a number : ";
     cin >> a;
     cout<< "address of the pointer : " << ;


int main()
{
	int a;
	int* p = &a;
	cout << "Enter a number";
	cin>> *p;
	cout << "address of the given number : "<< p;
}
int main()
{
     int a;
     cout <<"Enter a num" ;
     cin>> a;
     cout<< *(&a);
}
void point(int* p)
{
	cout << *p ;
}
int main()
{
	int p;
	cout << "Enter a number" << endl;
	cin >> p;
	int* q;
	q = &p;
	point(q);
}
 int main()
{
	int a,b,c;
	cout<< "enter two number : ";
	cin >>a>>b>>c;
	int* p = &a;
	int* q = &b;
	int* r = &c;
	if((*p) > (*q) | (*p)> (*r))
		cout<<" greatest " << *p;
	else if ((*q)>(*r))
		cout<< "greatest " << *q;
      	else(cout<< " greatest " << *r);
	if((*p) < (*q) | (*p) < (*r))
		cout<<" smallest " << *p;
	else if ((*q)<(*r))
		cout<< "smallest " << *q;
      	else(cout<< " smallest " << *r);
	
}
long factorial(int* a){

	long prod;
	prod = 1;
	while(*a != 0){
		prod *= *a ;
		*a = *a - 1 ;
	}
	return prod;
}

int main ()
{
	int a;
	cout << "Enter a number : ";
	cin>> a;
	int* p = &a;
	cout << "factorial: " <<  factorial(p) ;
} 

int main()
{
	int b[2][3] = {{1,2,3},{4,5,6}};
	int (*p)[3] = b;
	cout << "b: " << *b + 1 << endl;
	cout << "&b[0]: " << &b[0] << endl;
	cout << "b+1 : "<< b+1 << endl;
	cout << "*(b+1): " << *(b+1) << endl;
	cout << "*(*(b+1)): " << *(*(b+1)) << endl;
	cout << "*(b+1) + 2: " << *(b+1) + 2 << endl;
}
*/
int main()
{
	int a[3][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
	int (*p)[2][2] = a;
	cout << " Here *a gives us the following value: " << *(*a) << endl;
	cout << " The value of *(a[0][1] + 1) gives us the following value: " << *(a[0][1] + 1) << endl ;
 }
