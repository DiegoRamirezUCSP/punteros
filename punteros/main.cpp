#include <iostream>

using namespace std;
void swap_(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swapByPtr(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int pow(int *ptrbase, int *ptrexpo){
    int resultado = 1;
    for(int i = 0; i <*ptrexpo;i++){
        resultado *= (*ptrbase);
    }
return resultado;
}

bool bisiesto(int *ptrbi){
    return ((*ptrbi%4==0)&&((*ptrbi%100!=0)||(*ptrbi%400==0)))? "true" : "false";


}

bool isPrime(int *number){
            int e=0;
            for (int j=1; j<=*number;j++){
                if(*number%j==0)
                   e++;
            }
            return (e==2);
}

bool isPerfect(int *number){
    int suma = 0, i = 1;

    while(i <= *number){
        if(*number % i == 0){
        suma += i;
        i++;
        }
    }

    return (suma == *number);
        }

int main()
{
    int x=12, y = 2;
    int a=2016;
    int b=3;
    //swap_(x,y);
    //swapByPtr(&x,&y);
    //cout << x << " " << y << endl;
    cout << pow(&x,&y) << endl;
    cout << bisiesto(&a) << endl;
    cout << isPrime(&a) << endl;
    cout << isPerfect(&b) << endl;
    return 0;
}
