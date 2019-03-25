//Academicos: 
//Jackson Henrique Mota Teixeira
// Erick Henrique Mota Teixeira

int condicaoAND(int inputA, int inputB){
  return (inputA && inputB);
}

int condicaoOR(int inputA, int inputB){
  return (inputA || inputB);
}

int condicaoNAND(int inputA, int inputB){
  return !(inputA && inputB);
}

int condicaoNOR(int inputA, int inputB){
  return !(inputA || inputB);
}

int condicaoXOR(int inputA, int inputB){
  return (inputA ^ inputB);
}

int condicaoXNOR(int inputA, int inputB){
  return !(inputA ^ inputB);
}

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{  
  int linhas = 4;
  int colunas = 2;
  int possibilidades[4][2] = {
    {0,0},
    {0,1},
    {1,0},
    {1,1}
  };
  
  int i=0;
  while(i!=-1){
    int inputA = possibilidades[i][0];
    int inputB = possibilidades[i][1];

    digitalWrite(13, inputA);
    digitalWrite(12, inputB); 
    
    /* DEFINE A CONDIÇÃO A SER UTILIZADA PARA RETORNAR
    O VALOR BOOLEANO */
    int result = condicaoAND(inputA,inputB);
    //int result = condicaoOR(inputA,inputB);
    //int result = condicaoNAND(inputA,inputB);
    //int result = condicaoNOR(inputA,inputB);
    //int result = condicaoXOR(inputA,inputB);
    //int result = condicaoXNOR(inputA,inputB);
    
    // mostra o resultado através do led verde
    digitalWrite(11, result);

    delay(1000);
    
    if(i > linhas)
      i=-1;
    i++;
  }

}