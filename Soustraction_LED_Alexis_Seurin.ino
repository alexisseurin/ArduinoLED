const float Gee = 6674.2; // Constante globale

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  bool success;
 
    //appel de la fonction
    Soustraction();
    
    Serial.println("Valeur de success : ");
    Serial.print(success);
    //affichage de la valeur de la variable principale
  
  success=Soustraction();
  
  while(success){
    Serial.println("Allumage de la LED");
    digitalWrite(13, HIGH);
    //allumage de la LED de la carte (pin 13)
    
  }
  delay(1000);
}

bool Soustraction(){ // Fonction
  //La fonction prend une variable en paramètre
  // et va réaliser l'opération
  bool success;
  float Operation;
  int Gravitation = INT8_MAX; // Variable locale INT8_MAX
  
  // Paramètre - Constante
  Operation = (float)Gravitation - Gee;
  Serial.println(Operation);
  
  if(Operation < 1){
    success = 1;
  }
  else{
    success = 0;
  }
  
  return success;
}