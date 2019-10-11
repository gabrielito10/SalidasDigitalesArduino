void setup() {
  //ponemos los pines del 2 al 9 como salidas
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
    // creamos una variable "i" que recorrera desde el pin 2 al 9
  for (int i=2 ; i<=9 ; i++)
  {
    //ponemos en alto el pin indicado por "i"
    digitalWrite(i,HIGH);
    //esperamos 20 milisegundos
    delay(20);
    //ponemos en bajo el pin indicado por "i"
    digitalWrite(i,LOW);
    //esperamos 20 milisegundos
    delay(20);
  }
  //volvemos a repetir el mismo procediemiento anterior
  //solo que esta ves la variable "i" recoorrera del pin 8 al 3 en sentido contrario
  for(int i=8 ; i>=3 ; i--)
  {
    digitalWrite(i,HIGH);
    delay(20);
    digitalWrite(i,LOW);
    delay(20);
  }
}