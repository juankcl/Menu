#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int n,x;

double a,b,c;

void primo(int numero);
void cuadrada(double a, double b, double c);
void trichar();
double entero(double num);
double par( double num);
double positivo(double num);
double captura(double parametro1, double parametro2);

int main()
{
 do
 {
     do
     {
          cout << "MENU\n" << endl;
          cout << "1.Resolver Ec. Cuadratica \n";
          cout << "2.Saber si un num es primo \n";
          cout << "3   ";
          cout << "4. Caracteristicas enteras, positiva, par";
          cout << "5.Salir\n";
          cin>>n;
          cout << endl;

          if (n < 1 || n > 5)
          {
              system("cls");
              cout << endl << "\tFavor de ingresar una opcion valida" << endl << endl;
              system("pause");
          }

          system("cls");
     }
     while(n<1||n>5);

    if(n==1)
     {
       cout<<"Introduce tus valores\n";
       cin >> a>>b>>c;
       cuadrada(a,b,c);
     }
    else
      {
        if(n==2)
          {
              cout<<"Introduce un numero\n";
              cin >> x;
              cout << endl;
              primo(x);
              cout << endl << endl;
            system("pause");
          }
         else
            {
                if(n==3)
                {

                }
                else
                {
                    if(n==4)
                    {
                        trichar();
                    }
                }
            }

            }

      system("cls");
}
while (n != 5);

return 0;

}


void primo(int numero)
{
    for(int k=2;k<=(numero/2);k++)
    {
       if((numero%k)==0)
        {
                cout << "No es Primo";
        }
        else    cout << "Es Primo";
    }

return ;
}

void cuadrada(double a, double b, double c)

{
if(a,b,c)
{
double d,runo,rdos,i1,i2;

d=(pow(b,2))-(4*a*c);

if(d==0)
 {
  runo=-b/(2*a);
  i1=0;
  i2=i1;
 }
else
 {
  if(d>0)
    {
      runo=(-b+sqrt(d))/(2*a);
      rdos=(-b-sqrt(d))/(2*a);
      i1=0;
      i2=i1;
    }
  else
    {
      d=-d;
      runo=(-b)/(2*a);
      rdos=runo;
      i1=sqrt(d);
      i2=i1;
    }
 }


        cout<<runo<<"+"<<i1<<endl;
        cout<<rdos<<"-"<<i2<<endl;
}
system("pause");
return ;
}

void trichar()
{

 int opcion=0;

  do
  {
    double n=0;
    n=par(entero(positivo(captura(-1000,1000))));
    //cout<<n<<endl<<endl<<endl<<endl;
    cout<<"Quieres probar otro lince?"<<endl;
    cout<<"1.Si"<<endl;
    cout<<"2.No"<<endl<<endl;
    cin>>opcion;
    system("cls");
    //cin.ignore(256,'ln');
  }
  while(opcion==1);

return ;
}

double captura(double parametro1, double parametro2)
{
    double numi;
    do
    {
        system("cls");
        cout<<"Dame un valor entre: "<<parametro1<<" y "<<parametro2<<endl;
        cin>>numi;
    }
    while(numi<parametro1||numi>parametro2);
    {
        return numi;
    }
}
double positivo(double num)
{
    if(num>0)
    {
      cout<<"Es positivo"<<endl;
    }
    else cout<<"Es negativo"<<endl;

return num;
}
double par( double num)
{
   if(num==int(num))
   {
   int o=0;
   o=num;
     if(o%2)
    {
        cout<<"Es impar\n"<<endl;
    }
    else cout<<"Es par\n"<<endl;
   }
   else cout<<"La definici�n matematica de numero par o impar solo tiene sentido para numeros enteros"<<endl;
return num;
}
double entero(double num)
{
    if(num==int(num))
    {
        cout<<"Es entero"<<endl;
    }
    else cout<<"No es entero"<<endl;
    return num;
}
