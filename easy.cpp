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
///////////////////////6
bool itc_iseven(int num){
if (num%2 == 0){
    return true ;
}
else{
    return false;
}

}
/////////////////////////7
int itc_max(int num, int num2){
if  (num>num2) return num;
else return num2;
}
//////////////////////////8
int itc_min(int num, int num2){
if  (num>num2) return num2;
else return num;
}
////9
double itc_fmax(double num, double num2) {
if  (num>num2) return num;
else return num2;
}
/////////////10
double itc_fmin(double num, double num2){
if  (num>num2) return num2;
else return num;
}
///////////////11
int itc_sqrt(int num){
int root (0);
while (root*root<=num){
if (root*root==num){
    return root;
}
root++;

}
return -1;




}
/////////////////////////12
int itc_skv(int num){
if (num <= 0){
    return -1;
}
else return num*num;
}
//////////////////////13
int itc_spr(int a, int b){
if (a&&b<= 0){
     return -1;
}
else return a * b;

}




