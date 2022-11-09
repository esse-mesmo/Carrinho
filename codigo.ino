#define VMA 2 
#define M1A 3 
#define M2A 4 
#define VMB 5
#define M1B 6
#define M2B 7

void setup() {
  pinMode(VMA, OUTPUT); 
  pinMode(M1A, OUTPUT); 
  pinMode(M2A, OUTPUT); 
  pinMode(VMB, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2B, OUTPUT);

  Serial.begin(9600); 
}

void loop() {
  if(Serial.available()>0){ 
    char valorRecebido = Serial.read(); 
    switch(valorRecebido){ 
      case 'F':
        digitalWrite(M1A, HIGH);
        digitalWrite(M2A, LOW); 
        digitalWrite(VMA, 255); 
        digitalWrite(M1B, HIGH);
        digitalWrite(M2B, LOW);
        digitalWrite(VMB, 255);
      break; 
        
      case 'B':
        digitalWrite(M1A, LOW);
        digitalWrite(M2A, HIGH); 
        digitalWrite(VMA, 255); 
        digitalWrite(M1B, LOW);
        digitalWrite(M2B, HIGH);
        digitalWrite(VMB, 255);
      break;
      
      case 'R': //direita
        digitalWrite(M1A, HIGH);
        digitalWrite(M2A, LOW); 
        digitalWrite(VMA, 255); 
        digitalWrite(M1B, LOW);
        digitalWrite(M2B, HIGH);
        digitalWrite(VMB, 255);
      break;
        
      case 'L': //esquerda
        digitalWrite(M1A, LOW);
        digitalWrite(M2A, HIGH); 
        digitalWrite(VMA, 255); 
        digitalWrite(M1B, HIGH);
        digitalWrite(M2B, LOW);
        digitalWrite(VMB, 255);
      break;
        
      case 'S':
        para();
      break;
    }
  }
}
