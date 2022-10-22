#include "easy.h"
using namespace std;

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
