// matrix1_sample（LEDマトリクス：完成サンプル）
// ハートの絵を、UNO R4 WiFi の 12×8 LEDマトリクスに表示します。
// 絵のデータは「animation.h」タブに入っています。

#include "Arduino_LED_Matrix.h"   // LEDマトリクスを使うためのライブラリ
#include "animation.h"            // 絵のデータ（animation.h タブ）

ArduinoLEDMatrix matrix;          // LEDマトリクスを使う準備

void setup() {
  matrix.begin();                 // LEDマトリクスを使い始める
  matrix.loadFrame(animation[0]); // 1枚目の絵を表示する
}

void loop() {
  // 表示した絵は、次に変えるまで表示されたままです。
  // ここには何も書かなくてOKです。
}
