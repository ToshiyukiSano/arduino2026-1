// matrix2_template（LEDマトリクス：自分の絵に差し替えるひな形）
// このタブ（matrix2_template）は変更しません。
//
// 自分の絵に変える方法：
//   「animation.h」タブの中身を「全部」消して、
//   LED Matrix Editor の画面右上の「</>」アイコン（コードの書き出し）で
//   書き出したファイルの中身を
//   そのまま貼り付けます。
//   （書き出したデータは const uint32_t animation[][4] = { ... }; の形です）

#include "Arduino_LED_Matrix.h"   // LEDマトリクスを使うためのライブラリ
#include "animation.h"            // 絵のデータ（animation.h タブ）

ArduinoLEDMatrix matrix;          // LEDマトリクスを使う準備

void setup() {
  matrix.begin();                 // LEDマトリクスを使い始める
  matrix.loadFrame(animation[0]); // 1枚目の絵を表示する
}

void loop() {
  // 表示した絵は、次に変えるまで表示されたままです。
}
