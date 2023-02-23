#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
//    printf("Hello world!\n");
//    printf("Bardzo\ndlugi\nnapis\n");
//    printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ $ & %%");
//    int x;
//    printf("\npodaj liczbe calkowita:");
//    scanf("%d",&x);
//    printf("Liczba = %d powtorzona to %d",x,x);
//
//    float w;
//    printf("\npodaj liczbe wymierna:");
//    scanf("%f",&w);
//    printf("Liczba wymierna = %.2f",w);
//    printf("\nnotacja = %e",w);
//
//    int a,b,c;
//    printf("\npodaj 3 liczby calkowite:");
//    scanf("%d %d %d",&a,&b,&c);
//    printf("liczby to: \n %d \n %d \n %d",a,b,c);

//    int liczba;
//    printf("\npodaj liczbe:");
//    scanf("%d",&liczba);
//    printf("Liczba = %d",liczba+1);

//    float srednia;
//    int d,e,f;
//    printf("\npodaj 3 liczby calkowite:");
//    scanf("%d %d %d",&d,&e,&f);
//    srednia = (d+e+f)/3.0;
//    printf("srednia to: %f",srednia);
//    printf("\nSrednia z liczb wynosi: \n (%d+%d+%d)/3=%f",d,e,f,(d+e+f)/3.); //3.0 lub 3.
//

//    float g;
//    printf("\npodaj liczbe wymierna:");
//    scanf("%f",&g);
//    printf("pierwiastek kwadratowy z liczby %f wynosi %f",g,sqrt(g));
//    printf("\npotega 1/2 z liczby %f wynosi %f",g,pow(g,0.5)); //lub 1./2

//    float h;
//    printf("\npodaj liczbe wymierna:");
//    scanf("%f",&h);
//    printf("wartosc bezwzgledna z liczby %f wynosi %f",h,fabs(h)); //dla intow abs

//    int i;
//    printf("\npodaj liczbe calkowita:");
//    scanf("%d",&i);
//    printf("Wartosc bezwzgledna z liczby %d wynosi ",i);
//    if(i>=0) {
//        printf("%d",i);
//    }
//    else {
//        printf("%d",-i);
//    }
//    int j;
//    printf("\npodaj liczbe calkowita:");
//    scanf("%d",&j);
//    printf("Znak (signum) z liczby %d wynosi ",j);
//    if(j>0) {
//        printf("1");
//    }
//    else if(j==0) {
//        printf("0");
//    }
//    else {
//        printf("-1");
//    }
//    int k,l;
//    printf("\npodaj 2 liczby calkowite:");
//    scanf("%d %d",&k,&l);
//    printf("maksimum z liczb %d i %d wynosi: ",k,l);
//    if(k>l) {
//        printf("%d",k);
//    }
////    else if(l>k) {
////        printf("%d",l);              wystarczy jeden else
////    }
//    else {
//        printf("%d",l);
//    }
//    int m,n,p;
//    printf("\npodaj 3 liczby calkowite:");
//    scanf("%d %d %d",&m,&n,&p);
//    printf("maksimum z liczb %d i %d i %d wynosi: ",m,n,p);
//    if(m>=n && m>=p) {
//        printf("%d",m);
//    }
//    else if(n>=p) {
//        printf("%d",n);
//    }
//    else {
//        printf("%d",p);
//    }
    int x,y,z;
    printf("\npodaj 3 liczby calkowite:");
    scanf("%d %d %d",&x,&y,&z);
    printf("srodkowa z liczb %d i %d i %d wynosi: ",x,y,z);
    if(((x>=y && (y>=z)) || ((x<=y) && (y<=z))) {
        printf("%d",x);
    }
    else if(x==y) {
        printf("%d",x);
    }
    else if(y==z) {
        printf("%d",z);
    }
    else if(y>=x && y<=z) {
        printf("%d",y);
    }
    else(z>=x && z<) {
        printf("%d",z);
    }

    return 0;
}
