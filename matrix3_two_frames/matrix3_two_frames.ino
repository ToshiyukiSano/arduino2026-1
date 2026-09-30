// matrix3_two_frames（LEDマトリクス：2枚の絵を交互に表示する）
// 自分のアニメーションを作るときは、このスケッチを「名前を付けて保存」してから、
// 作った絵の枚数に合わせて「表示する命令」と「待つ命令」を追加します。
// 絵の番号は 0 から始まります（3枚なら animation[0]〜animation[2]）。
// 「animation.h」タブに、2枚以上の絵のデータが必要です。
// LED Matrix Editor で 2枚作ってから、画面右上の「</>」アイコン（コードの書き出し）で書き出し、
// animation.h タブの中身を「全部」入れ替えます。

#include "Arduino_LED_Matrix.h"   // LEDマトリクスを使うためのライブラリ
#include "animation.h"            // 絵のデータ（animation.h タブ）

// 絵が1枚しかないときは、検証でこのメッセージのエラーになります。
static_assert(sizeof(animation) / sizeof(animation[0]) >= 2,
              "animation.h に絵が2枚ありません。エディターで2枚作ってから書き出してください。");

ArduinoLEDMatrix matrix;          // LEDマトリクスを使う準備

void setup() {
  matrix.begin();                 // LEDマトリクスを使い始める
}

void loop() {
  matrix.loadFrame(animation[0]); // 1枚目の絵を表示する
  delay(1000);                    // 1000ミリ秒（1秒）待つ ← 数値を変えてみよう
  matrix.loadFrame(animation[1]); // 2枚目の絵を表示する
  delay(1000);                    // 1000ミリ秒（1秒）待つ ← 数値を変えてみよう
}
