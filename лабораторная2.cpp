#include <iostream>
#include <cstdlib>
#include <chrono>
#include <time.h>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"rus");
srand(time(0));
cout<<"Бережнов Н.А. 090301-ПАСа-О19"<<endl;

const int n=4096;

cout<<"Скорость вычесление по формуле линейной алгебры: ";
float *f=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
f[i*n+j]=(float)((rand()%100)*0,22);
}
}

float *s=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
s[i*n+j]=(float)((rand()%100)*0,22);
}
}

float *res=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
res[i*n+j]=0;
}
}

auto start=chrono::high_resolution_clock::now();
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
res[i*n+j]+=f[i*n+k]*s[k*n+j];
}
}
}
auto end=chrono::high_resolution_clock::now();
chrono::duration<double> dur=(end-start);
cout<<dur.count()<<" секунд"<<endl;

delete[]f;
delete[]s;
delete[]res;

cout<<"Мой метод: ";

float *fi=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
fi[i*n+j]=(float)((rand()%100)*0,22);
}
}

float *se=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
se[i*n+j]=(float)((rand()%100)*0,22);
}
}

float *re=new float[n*n];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
re[i*n+j]=0;
}
}

auto star=chrono::high_resolution_clock::now();
for(int i=0;i<n;i+=8){
for(int j=0;j<n;j+=8){
for(int k=0;k<n;k+=8){
re[i*n+j]+=fi[i*n+k]*se[k*n+j];
re[(i+1)*n+j+1]+=fi[(i+1)*n+k+1]*se[(k+1)*n+j+1];
re[(i+2)*n+j+2]+=fi[(i+2)*n+k+2]*se[(k+2)*n+j+2];
re[(i+3)*n+j+3]+=fi[(i+3)*n+k+3]*se[(k+3)*n+j+3];
re[(i+4)*n+j+4]+=fi[(i+4)*n+k+4]*se[(k+4)*n+j+4];
re[(i+5)*n+j+5]+=fi[(i+5)*n+k+5]*se[(k+5)*n+j+5];
re[(i+6)*n+j+6]+=fi[(i+6)*n+k+6]*se[(k+6)*n+j+6];
re[(i+7)*n+j+7]+=fi[(i+7)*n+k+7]*se[(k+7)*n+j+7];
}
}
}
auto en=chrono::high_resolution_clock::now();
chrono::duration<double> dura=(en-star);
cout<<dura.count()<<" секунд"<<endl;

delete[]fi;
delete[]se;
delete[]re;

return 0;

};
