 void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

int lastVal = 0;

void loop() {
    // put your main code here, to run repeatedly:
    int val = analogRead(A0);
    if (abs(val - lastVal) > 10) {
        lastVal = val;

        /*char btn = ' ';
        if (val < 100) {
            btn = 'o'; // v
        } else if (val < 200) {
            btn = '<'; // <
        } else if (val < 400) {
            btn = 'v'; // >
        } else if (val < 600) {
            btn = '^'; // ^
        } else if (val < 850) {
            btn = '>'; // o
        }*/

        char btn = ' ';
        if (val < 100) {
            btn = 'v'; // v
        } else if (val < 200) {
            btn = '<'; // <
        } else if (val < 400) {
            btn = '>'; // >
        } else if (val < 600) {
            btn = '^'; // ^
        } else if (val < 850) {
            btn = 'o'; // o
        }
        
        Serial.print(val);
        Serial.print(" ");
        Serial.println(btn);
    }
    delay(300);
}
