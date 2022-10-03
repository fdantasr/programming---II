### 1. Crie a classe ItemFatura, com os seguintes atributos:
```
 id : int <br>
 nome : String <br>
 qtd : int <br>
 precoUnit : float <br>
```
Sua classe deve conter: <br>
a) Dois construtores: um default que inicialize o nome do produto com a string “None” e outro
que inicialize os atributos com todos os valores passados por parˆametro; <br>
b) M´etodos seletores e modificadores para cada um dos atributos da classe; <br>
c) Um m´etodo totalItem() que retorna o valor total do produto em fun¸c˜ao de seu pre¸co e
quantidade; <br> 
d) Um método imprime() que mostra na tela os dados do objeto e o seu total <br>
No programa principal, realize os seguintes testes: <br>
e) Instancie dois objetos da classe ItemFatura. Um inicializado pelo construtor default outro
que inicialize os atributos pelo construtor que espera parˆametros. <br>
f) Utilize o m´etodo de impress˜ao criado para mostrar na tela o estado atual dos dois objetos,
observando as diferen¸cas na cria¸c˜ao utilizando construtores distintos. <br>
g) Inicialize os atributos do objeto criado com o construtor default utilizando os m´etodos modificadores criados. <br>
h) Mostre o resultado na tela, utilizando o m´etodo de impressão <br>
i) Modifique o pre¸co unit´ario do objeto instanciado pelo construtor com parâmetros <br>
j) Exiba na tela o total da fatura antes e depois da modificação do preço deste objeto para
confirmar a altera¸c˜ao do atributo a partir do m´etodo invocado <br>

### 2. Crie a classe Fatura, contendo como ´unico atributo um ponteiro para um vetor que armazene objetos do tipo itemFatura.
#### Sua classe deve conter:
a) Um construtor que inicialize o vetor dinamicamente;
b) Um destrutor que delete o vetor;
c) Um m´etodo void addItem(itemFatura it) que adicione o item ao vetor;
d) Um m´etodo totalFatura(), que imprima a lista dos itens contidos na fatura e o total geral
da fatura.
No programa principal:
e) Instancie trˆes objetos itemFatura e um objeto Fatura;
f) Adicione os trˆes itens ao objeto Fatura
g) Mostre o total da fatura na tela
