#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        ~complex()
        {
            cout << "Destructor" << endl;
        }
};
void fun()
{
    complex c;
}
int main()
{
    fun();

    
    public:
	void set_data(int x ,int y)
	{
		a=x;
		b=y;
	}
	void show_dta()
	{
		cout<<"a= "<<a<<"b="<<b<<endl;
	}
	complex add(complex c)
	{
		complex t;
		t.a=a+c.a;
		t.b=b+c.b;
		return(t);
	}
};
