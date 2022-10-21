#include "easy.h"
using namespace std;

/////////////////////////////////////////1
void itc_name(){
 cout << "Efim"<< endl;
}

/////////////////////////////////////////2
void itc_fio(){
cout << "Romanov"<<endl;
itc_name();
cout << "Dmitrievich"<<endl;
}

/////////////////////////////////////////3
int itc_abs(int num){
  if (num >= 0){
    return num;
  }
  else{
        return (- num );
  }
 }
/////////////////////////////////////////4
double itc_fabs(double num){
   if (num >= 0){
    return num;
  }
  else{
        return (- num );
  }
}
///////////////////////////5
int itc_revnbr(int num){
    int a,b,c;
    a = num % 10 ;
    num = num / 10;
    b = num % 10;
    c = num / 10;
return a * 100 + b * 10 + c * 1 ;
}
