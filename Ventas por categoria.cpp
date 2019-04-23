#include <iostream>
using namespace std;

int main() {
  int a,b,c,n,con;
  float v, ta, tb, tc, tot;
  a=0, b=0, c= 0;
  ta=0, tb=0, tc=0, tot=0;
  con=1;
  cout<<"Ingrese el numero de ventas realizadas"<<endl;
  cin>>n;
  do{
    cout<<"Ingrese el monto de la venta"<<endl;
    cin>>v;
    if(v>1000){
      a=a+1;
      ta=ta+v;
    }
    else if(v>500){
      b=b+1;
      tb=tb+v;
    }
    else{
      c=c+1;
      tc=tc+v;
    }
    tot=tot+v;
    con=con+1;
  }while(con<=n);

  cout<<"Hubo "<<a<<" ventas mayores a $ 1000 con un total de: $ "<<ta<<endl;

  cout<<"Hubo "<<b<<" ventas menores o iguales a $ 1000 pero mayores a $ 500 con un total de: $ "<<tb<<endl;

  cout<<"Hubo "<<c<<" ventas menores o iguales a $ 500 con un total de: $ "<<tc<<endl;
  
  cout<<"El monto total de las ventas es de: $ "<<tot;

  return 0;
}
