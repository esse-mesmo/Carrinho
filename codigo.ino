#define va 2 
#define m1A 3 
#define m2A 4 
#define va2 5
#define me1 6
#define me2 7

void setup() {
  pinMode(va, OUTPUT); 
  pinMode(m1A, OUTPUT); 
  pinMode(m2A, OUTPUT); 
  pinMode(va2, OUTPUT);
  pinMode(me1, OUTPUT);
  pinMode(me2, OUTPUT);

  Serial.begin(9600); 
}

void loop() {
  if(Serial.available()>0){ 
    char valorRecebido = Serial.read(); 
    switch(valorRecebido){ 
      case 'F':
        digitalWrite(m1A, HIGH);
        digitalWrite(m2A, LOW); 
        digitalWrite(va, 255); 
      break; 
        
      case 'B':
        traz();
      break;
      
      case 'R':
        viraDireita();
      break;
        
      case 'L':
        viraEsquerda();
      break;
        
      case 'S':
        para();
      break;
    }
  }
}
