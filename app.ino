// Prepare initialization for the fist time
void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    // Try to bright up from 0 (no light) to 255 (max brightnes)
    for( int brightness = 0 ; brightness <= 255 ; brightness = brightness + 1 ) {
        analogWrite(9, brightness); // Analog write range [0...255]
        delay(2);
    }
    // Try to bright up from 255 (max brightness) to 0 (no light)
    for( int brightness = 255 ; brightness >= 0 ; brightness = brightness - 1 ) {
        analogWrite(9, brightness); // Analog write range [0...255]
        delay(2);
    }
}

