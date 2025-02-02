#include "LiquidCrystal_I2C.h"
#include "Keypad.h"

const byte Rows = 4;
const byte cols = 4;
String str = "";
int num1 = 0;
int num2 = 0;
int res=0;

char op = ' ';

char hexaKeys[Rows][cols] =
{
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'C', '0', '=', '/'}
};

byte rowpins[Rows] = {9, 8, 7, 6};
byte colpins[cols] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowpins, colpins, Rows, cols);
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(2, 0);
  lcd.print("Calculator");

  lcd.setCursor(0, 1);
  lcd.print("Wo7ooshElDigital");
  delay(5000);
  lcd.clear();
}


 void loop()
{
  char customKey = customKeypad.getKey();
  if ((customKey == '7') || (customKey == '8') || (customKey == '9') || (customKey == '5') || (customKey == '6') || (customKey == '4') || (customKey == '3') || (customKey == '2') || (customKey == '1'))
  {
    str = str + customKey;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(str);
  }
  else if ((customKey == '+') || (customKey == '-') || (customKey == '*') || (customKey == '/'))
  {
    op = customKey;
    res = 0;
    num1 = str.toInt();
    str = "";
    lcd.setCursor(0, 1);
    lcd.print(op);
  }
  else if (customKey == '=')
  {
    num2 = str.toInt();
    switch (op)
    {
      case '+':
        res = num1 + num2;
        break;
      case '-':
        res = num1 - num2;
        break;
      case '*':
        res = num1 * num2;
        break;
      case '/':
        res = num1 / num2;
        break;
    }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(res);
    num1 = 0;
    num2 = 0;
    res = 0;
    str = "";
  }
  else if (customKey == 'C')
  {
    str = "";
    lcd.clear();
  }
} 
