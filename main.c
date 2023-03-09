#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//    int a,b,c,d,e,f;
//    int W,Wx,Wy;
//    float x,y;
//    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//    printf("Zdefiniowales uklad rownan \n%d*x+%d*y-%d\n %d*x+%d*y-%d\n",a,b,c,d,e,f);
//    W=a*e-b*d;
//    Wx=c*e-b*f;
//    Wy=a*f-c*d;
//    if(W!=0) {
//        x=(float)(Wx/W);
//        y=(float)(Wy/W);
//        printf("Rozwiazaniem ukladu rownan jest x=%f,y=%f",x,y);
//    }
//    else if(Wx==0&&Wy==0) {
//        printf("uklad nieoznaczony");
//    }
//    else{
//        printf("uklad sprzeczny");
//    }

    int a,b,c,d;
    float x1,x2;

    scanf("%d %d %d", &a, &b, &c);
    if(a==1)
    {
        print("x^2");
    }
    else i(a==-1)
    {
        printf("-x^2");
    }
    else{
        printf("%d*x^2");
    }
    else{
        printf("%d*x^2");
    }
    if(b==1)
    {
        print("+x");
    }
    else if(b==-1)
    {
        printf("-x");
    }
    else if (b>0){
        printf("+%d*x",b);
    }
    else if (b<0){
        printf("%d*x",b);
    }



    if (a>0 && b>0 && c>0) {
        if (a!=1 && b!=1 && c!=1) {
            printf("Zdefiniowales rownanie \n%d*x^2+%d*x+%d=0\n",a,b,c);
        }
        if (a=1)
    }

    d=b*b-4*a*c;
    if (d>0)
    {
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf("Rozwiazaniem rownania sa x1=%f, x2=%f",x1,x2);
    }
    else if (d=0)
    {
        x1=(-b)/(2*a);
        printf("Rozwiazaniem rownania sa x1=%f",x1);
    }
    else{
        printf("Brak rozwiazan");
    }











    return 0;
}



//uklad 3 rownan z 3 niewiadomymi PD
//regula sarrusqa (12)) rozpisac
