#include <iostream>

using namespace std;

int main()
{
    int vet[5]= {3,2,5,4,1}, vet2[5]={5,2,6,8,1};
    int i, j=0, aux, vetr[10];
    for(i=0;i<10;i++)
    {
        vetr[j]=vet[i];
        vetr[j+1]=vet2[i];
        j=j+2;
    }
    for(i=0; i<10; i++)
    {
        for(j=1;j<10; j++)
        {
            if (vetr[j]<vetr[j-1])
            {
                aux=vetr[j];
                vetr[j]=vetr[j-1];
                vetr[j-1]=aux;
            }
        }
    }
    for(j=0; j<10; j++)
    {
    cout<<" "<<vetr[j];
    }
    return 0;
}
