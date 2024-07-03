int button1 = A0;
int button2 = A1;
int button3 = A2;

// 버튼의 이전 상태를 저장하는 변수
bool lastButtonState1 = HIGH;
bool lastButtonState2 = HIGH;
bool lastButtonState3 = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUET_PULLUP):
  pinMode(button2, INPUET_PULLUP):
  pinMode(button3, INPUET_PULLUP):
  }
}

void loop() {
  bool currentButtonState1 = digitalRead(button1);
  bool currentButtonState2 = digitalRead(button2);
  bool currentButtonState3 = digitalRead(button3);

  if(currentButtonState1 == LOW && lastButtonState1 == HIGH)
  {
    Serial.println(1);
    delay(200);
    Serial.println(2);
    delay(200);
  }

  if(currentButtonState3 == LOW && lastButtonState3 == HIGH)
  {
    Serial.printlf('\n');
    delay(200);
  }

  lastButton1 = currentButtonState1;
  lastButton2 = currentButtonState2;
  lastButton3 = currentButtonState3;
}
