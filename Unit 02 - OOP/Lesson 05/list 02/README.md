### 1. Crie a classe ItemFatura, com os seguintes atributos:
```
 id : int 
 nome : String 
 qtd : int 
 precoUnit : float 
```
#### Sua classe deve conter: <br>
* Dois construtores: um default que inicialize o nome do produto com a ```string “Nome”``` e outro
que inicialize os atributos com todos os valores passados por parâmetro; 
* Métodos seletores e modificadores para cada um dos atributos da classe; 
* Um método ```totalItem()``` que retorna o valor total do produto em função de seu preço e
quantidade; 
* Um método ```imprime()``` que mostra na tela os dados do objeto e o seu total. 
#### No programa principal, realize os seguintes testes: 
* Instancie dois objetos da classe ItemFatura. Um inicializado pelo construtor default outro
que inicialize os atributos pelo construtor que espera parâmetros;
* Utilize o m´etodo de impressão criado para mostrar na tela o estado atual dos dois objetos,
observando as diferen¸cas na criação utilizando construtores distintos;
* Inicialize os atributos do objeto criado com o construtor default utilizando os métodos modificadores criados;
* Mostre o resultado na tela, utilizando o método de impressão;
* Modifique o pre¸co unitário do objeto instanciado pelo construtor com parâmetros 
* Exiba na tela o total da fatura antes e depois da modificação do preço deste objeto para
confirmar a alteração do atributo a partir do método invocado;

### 2. Crie a classe Fatura, contendo como ´unico atributo um ponteiro para um vetor que armazene objetos do tipo itemFatura.
#### Sua classe deve conter: 
* Um construtor que inicialize o vetor dinamicamente;
* Um destrutor que delete o vetor;
* Um método ```void addItem(itemFatura it) ``` que adicione o item ao vetor;
* Um método totalFatura(), que imprima a lista dos itens contidos na fatura e o total geral
da fatura.
#### No programa principal: <br>
* Instancie três objetos itemFatura e um objeto Fatura;
* Adicione os três itens ao objeto Fatura;
* Mostre o total da fatura na tela.
