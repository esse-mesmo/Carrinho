#define va 2 
#define m1A 3 
#define m2A 4 

void setup() {
  pinMode(va, OUTPUT); 
  pinMode(m1A, OUTPUT); 
  pinMode(m2A, OUTPUT); 

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
    }
  }
}
