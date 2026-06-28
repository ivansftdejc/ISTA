/*
 * ============================================================
 * ECO-MONITOR - FASE 1
 * ============================================================
 * 
 * Estrutura base com LCD 16x2 I2C
 * 
 * Conexões:
 * - LCD I2C: VCC→5V, GND→GND, SDA→A4, SCL→A5
 * 
 * ============================================================
 */

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD I2C (endereço 0x27, 16 colunas, 2 linhas)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  Serial.println("=== ECO-MONITOR - FASE 1 ===");
  Serial.println("Inicializando LCD...");
  
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  // Mensagem de boas-vindas
  lcd.setCursor(2, 0);
  lcd.print("ECO-MONITOR");
  lcd.setCursor(0, 1);
  lcd.print("Inicializando...");
  
  Serial.println("LCD inicializado!");
  Serial.println("Fase 1 concluída!");
}

void loop() {
  // Mantém a mensagem na tela
  delay(1000);
}