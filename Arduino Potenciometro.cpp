int verde = 3, amarelo = 4, vermelho = 5, potenciometro = A0;

void setup() {
     pinMode(verde, OUTPUT); // LED -> VERDE
     pinMode(amarelo, OUTPUT); // LED -> AMARELO
     pinMode(vermelho, OUTPUT); // LED -> VERMELHO
     pinMode(potenciometro, INPUT); // POTENCIOMETRO
}

void loop() {
    if (analogRead(potenciometro) <= 250) {
        digitalWrite(verde, HIGH);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, LOW);
    } else if (analogRead(potenciometro) > 250 and analogRead(potenciometro) <= 350) {
        digitalWrite(verde, LOW);
        digitalWrite(amarelo, HIGH);
        digitalWrite(vermelho, LOW);
    } else {
        digitalWrite(verde, LOW);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, HIGH);
    }
}