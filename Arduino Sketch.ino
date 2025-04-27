#include <Mouse.h>

void setup() {
  Serial.begin(9600); // Инициализация COM-порта
  Mouse.begin();      // Инициализация мыши
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read(); // Читаем команду от Python
    if (command == 'C') {         // Если команда "C" (click)
      Mouse.click(MOUSE_LEFT);   // Кликаем ЛКМ
    }
  }
}