
const int ledPinA = 2;
const int ledPinB = 3;
const int ledPinC = 4;
const int ledPinD = 5;
const int ledPinE = 6;
const int ledPinG = 7;
const int ledPinF = 8;

void setup()
{
    // put your setup code here, to run once:

    pinMode(ledPinA, OUTPUT);
    pinMode(ledPinB, OUTPUT);
    pinMode(ledPinC, OUTPUT);
    pinMode(ledPinD, OUTPUT);
    pinMode(ledPinE, OUTPUT);
    pinMode(ledPinF, OUTPUT);
    pinMode(ledPinG, OUTPUT);
}

void loop()
{

    //number zero, this needs everything apart from the middle led
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinC, HIGH); //botttom right led
    digitalWrite(ledPinD, HIGH); // bottom led
    digitalWrite(ledPinE, HIGH); //bottom left led
    digitalWrite(ledPinF, HIGH); //top lef led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle led

    //this is the number one led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinC, HIGH); //botttom right led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle leD

    //this is the number two led
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinG, HIGH); //middle led
    digitalWrite(ledPinD, HIGH); // bottom led
    digitalWrite(ledPinE, HIGH); //bottom left led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle led

    //this is number three led
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinG, HIGH); //middle led
    digitalWrite(ledPinD, HIGH); // bottom led
    digitalWrite(ledPinC, HIGH); //botttom right led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle

    //number four
    digitalWrite(ledPinC, HIGH); //botttom right
    digitalWrite(ledPinC, HIGH); //botttom right
    digitalWrite(ledPinG, HIGH); //middle
    digitalWrite(ledPinB, HIGH); //top right
    digitalWrite(ledPinF, HIGH); //top lef led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle

    //number five
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinF, HIGH); //top lef
    digitalWrite(ledPinG, HIGH); //middle
    digitalWrite(ledPinC, HIGH); //botttom right led
    digitalWrite(ledPinD, HIGH); // bottom led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle

    //number 6
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinF, HIGH); //top lef
    digitalWrite(ledPinG, HIGH); //middle
    digitalWrite(ledPinE, HIGH); //bottom left led
    digitalWrite(ledPinC, HIGH); //botttom right led
    digitalWrite(ledPinD, HIGH); // bottom led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //middle

    //number 7
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right
    digitalWrite(ledPinC, HIGH); //botttom right led
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //

    //number 8

    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinC, HIGH); //botttom right led
    digitalWrite(ledPinD, HIGH); // bottom led
    digitalWrite(ledPinE, HIGH); //bottom left led
    digitalWrite(ledPinF, HIGH); //top lef led
    digitalWrite(ledPinG, HIGH); //
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //

    //number 9
    digitalWrite(ledPinA, HIGH); //top led
    digitalWrite(ledPinB, HIGH); //top right led
    digitalWrite(ledPinC, HIGH); //botttom right led
    digitalWrite(ledPinD, HIGH); // bottom led
    digitalWrite(ledPinF, HIGH); //top lef led
    digitalWrite(ledPinG, HIGH); //
    delay(1000);
    digitalWrite(ledPinA, LOW); //top led
    digitalWrite(ledPinB, LOW); //top right led
    digitalWrite(ledPinC, LOW); //botttom right led
    digitalWrite(ledPinD, LOW); // bottom led
    digitalWrite(ledPinE, LOW); //bottom left led
    digitalWrite(ledPinF, LOW); //top lef led
    digitalWrite(ledPinG, LOW); //

    // put your main code here, to run repeatedly:
}