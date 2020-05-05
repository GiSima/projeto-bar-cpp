#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sexo;
    int beer, espeto, refri;
    double consumo, ingresso, total;
    cout << fixed << setprecision(2);
// Leitura  dos dados
    cout << "Sexo: "; cin >> sexo;
    cout << "Quantidade de cervejas: "; cin >> beer;
    cout << "Quantidade de refrigerantes: "; cin >> refri;
    cout << "Quantidade de espetinhos: "; cin >> espeto;

// Cálculo

    consumo = beer * 5 + refri * 3 + espeto * 7;
    if (sexo == "M"){ingresso = 10;}else if (sexo == "F"){ingresso = 8;}

// Relatório gerado

    cout << endl;
    cout << "RELATORIO" << endl;
    cout << "Consumo = R$ " << consumo << endl;
    if (consumo > 30){total = consumo + ingresso; cout << "Isento de Couvert" << endl;}
    else {total = consumo + ingresso + 4;cout << "Couvert = R$ 4.00" << endl;}
    cout << "Ingresso = R$ " << ingresso << endl;
    cout << endl;
    cout << "Valor a pagar = R$ " << total << endl;

    return 0;
}
