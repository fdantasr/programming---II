#### PROGRAMA PRINCIPAL – QUESTÃO 1
```
int main() {
Compra c1;
Compra c2(100, "Restaurante", 1, 22, 10, 2022, 12, 57);
c1.print();
c2.print();
//20% da nota até aqui
c1.setLocal("Oficina");
c1.setValor(600.0);
c1.setParcela(3);
c1.setData(23,10,2022);
c1.setHora(15,45);
c1.print();
//+ 40% da nota até aqui
FaturaCartao f;
f.add(c1);
f.add(c2);
Compra c3(700,"Loja",2,24,10,2022,11,32);
f.add(c3);
f.fechaFatura();
//+ 40% da nota até aqui
}
```

#### SAÍDA ESPERADA – QUESTÃO 1
```
Compra Realizada
Data-Hora: 10/10/2010 - 10:10
Local: ---
Valor: R$ 0
--------------------------------
Compra Realizada
Data-Hora: 22/10/2022 - 12:57
Local: Restaurante
Valor: R$ 100
--------------------------------
Compra Realizada
Data-Hora: 23/10/2022 - 15:45
Local: Oficina
Valor: 3x R$ 200
--------------------------------
|| Fatura Fechada ||
23/10/2022|R$ 200|Oficina
22/10/2022|R$ 100|Restaurante
24/10/2022|R$ 350|Loja
Total Fatura: R$ 650
```
#### PROGRAMA PRINCIPAL – QUESTÃO 2
```
int main() {
Pessoa pe("João","123.456.789-00");
Professor pf1("José","012.234.567-89", 2744102);
Aluno al1("Maria","234.567.890-12", 2020122);
Professor pf2("Antônio","345.567.789-10", 1740120);
Aluno al2("Jorge","456.789.012-34", 2721132);
//30% da nota até aqui
vector<Pessoa*> pp;
pp.push_back(&pe);
pp.push_back(&pf1);
pp.push_back(&al1);
pp.push_back(&pf2);
pp.push_back(&al2);
//+ 30% da nota até aqui
for (auto p : pp){
p->print();
}
//+ 30% da nota até aqui
}
```

#### SAÍDA ESPERADA – QUESTÃO 2
```
--------------
Nome: João
CPF: 123.456.789-00
--------------
Nome: José
CPF: 012.234.567-89
Categoria: Professor
SIAPE: 2744102
--------------
--------------
Nome: Maria
CPF: 234.567.890-12
Categoria: Estudante
RGA: 2020122
--------------
--------------
Nome: Antônio
CPF: 345.567.789-10
Categoria: Professor
SIAPE: 1740120
--------------
--------------
Nome: Jorge
CPF: 456.789.012-34
Categoria: Estudante
RGA: 2721132
--------------
```
