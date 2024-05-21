#include <iostream>
using namespace std;

int main()
{
    int sucursal, cliente;
    float saldo;

    /// GENERAL
    int contRegistros = 0;

    /// PTO A
    int total1=0, total2=0, total3=0, total4=0;
    int may1=0, may2=0, may3=0, may4=0, maxSuc;
    float porc1, porc2, porc3,porc4, maxPorc=0;

    /// PTO B
    float maxSaldo = 0;
    int maxCliente, maxSucursal;

    /// PTO C
    float saldo1=0, saldo2=0, saldo3=0, saldo4=0;


    cout << "Sucursal: ";
    cin >> sucursal;

    while( sucursal != 10)
    {
        cout << "Cliente: ";
        cin >> cliente;

        cout << "Saldo: ";
        cin >> saldo;

        cout << "-------" << endl;
        cout << endl;

        ///
        contRegistros++;

        /// PTO A
        if(sucursal==1)
        {
            total1++;
            if(saldo>20000)
            {
                may1++;
            }
        }
        else if(sucursal==2)
        {
            total2++;
            if(saldo>20000)
            {
                may2++;
            }
        }
        else if (sucursal==3)
        {
            total3++;
            if(saldo>20000)
            {
                may3++;
            }
        }
        else
        {
            total4;
            if(saldo>20000)
            {
                may4++;
            }
        }
        /// PTO B
        if(saldo > maxSaldo)
        {
            maxCliente = cliente;
            maxSucursal = sucursal;
            maxSaldo = saldo;
        }

        /// PTO C
        if(sucursal==1)
        {
            saldo1+=saldo;
        }
        else if(sucursal==2)
        {
            saldo2+=saldo;
        }
        else if(sucursal==3)
        {
            saldo3+=saldo;
        }
        else
        {
            saldo4+=saldo;
        }

        ///
        cout << "Sucursal: ";
        cin >> sucursal;
    }

    /// PTO A
    porc1 = (float)(may1*100)/total1;
    porc2 = (float)(may2*100)/total2;
    porc3 = (float)(may3*100)/total3;
    porc4 = (float)(may4*100)/total4;
    if(porc1>maxPorc)
    {
        maxPorc=porc1;
        maxSuc = 1;
    }
    if( porc2 > maxPorc)
    {
        maxPorc=porc2;
        maxSuc = 2;
    }
    if( porc3 > maxPorc)
    {
        maxPorc=porc3;
        maxSuc = 3;
    }
    if( porc4 > maxPorc)
    {
        maxPorc=porc4;
        maxSuc = 4;
    }

    if(contRegistros >0)
    {
    cout << endl;
    cout << endl;
    cout << "PTO A) Sucursal de mayor porcentaje: " << maxSuc << endl;
    /// PTO B
    cout << endl;
    cout << endl;
    cout << "PTO B) Cliente mayor saldo: " << maxCliente<< " de la sucursal: " << maxSucursal << endl;

    /// PTO C
    cout << endl;
    cout << endl;
    cout << "PTO C) Sucursal 1 $: " << saldo1 << endl;
    cout << "PTO C) Sucursal 2 $: " << saldo2 << endl;
    cout << "PTO C) Sucursal 3 $: " << saldo3 << endl;
    cout << "PTO C) Sucursal 4 $: " << saldo4 << endl;

    }
    else{
        cout << "No se ingresaron registros" << endl;
    }

    return 0;

}
