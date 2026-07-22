
//motor 1
#define in1 2
#define in2 4
#define ena 9

//motor 2
#define in3 8 
#define in4 3 
#define enb 10 


//sensor
#define pinoEV 13
#define pinoRE 12

long duracao;
float distanciaCm;




void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pinoEV, OUTPUT);
  pinMode(pinoRE, INPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

}


void sensor(){
  digitalWrite(pinoEV, LOW);
  delayMicroseconds(2);

  // Envia um pulso de 10 microssegundos
  digitalWrite(pinoEV, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoEV, LOW);

  // Lê o tempo de duração do eco (em microssegundos)
  duracao = pulseIn(pinoRE, HIGH);

  // Calcula a distância (velocidade do som é 343 m/s ou 0.0343 cm/us)
  distanciaCm = duracao * 0.0343 / 2;
}


void motor() {

 // Vira para a esquerda
  if (distanciaCm < 30) {

   
    analogWrite(ena, 120);
    analogWrite(enb, 255);

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

  } else {

    // Anda reto
    analogWrite(ena, 120);
    analogWrite(enb, 115);

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

  }
}


void loop() {

  sensor();
  Serial.print("Distancia: "); 
  Serial.print(distanciaCm); 
  Serial.println(" cm");
  delay(100);
 
  motor ();
}


