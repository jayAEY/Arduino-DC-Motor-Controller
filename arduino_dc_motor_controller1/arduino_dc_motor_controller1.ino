unsigned char pb;

void setup() {
	DDRC=0x00;// push buttons
	DDRD=0xFF; //DC Motor
}

void loop() {
  	PORTD=0x00;
	pb=PINC & 0x07;
 	if (pb == 0x03){//%80 DC
    	PORTD = 0x01;
      	delay(80);
      	PORTD = 0x00;
      	delay(20);
	}
	if (pb == 0x05){//%50 DC
    	PORTD = 0x01;
      	delay(50);
      	PORTD = 0x00;
      	delay(50);
	}
	if (pb == 0x06){//%20 DC
    	PORTD = 0x01;
      	delay(20);
      	PORTD = 0x00;
      	delay(80);
	}
}
