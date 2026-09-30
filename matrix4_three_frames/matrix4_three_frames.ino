// matrix4_three_frames（LEDマトリクス：3枚の絵を順番に表示する例）
// 「animation.h」タブに、3枚の絵のデータ（矢印が右へ動く）が入っています。
// 3枚の絵を作って書き出した場合の書き方の例です（自由制作の絵の枚数は自由です）。
// 2枚しかないデータでは使いません。
// 絵の番号は 0 から始まります（3枚なら 0・1・2）。

#include "Arduino_LED_Matrix.h"   // LEDマトリクスを使うためのライブラリ
#include "animation.h"            // 絵のデータ（animation.h タブ）

// 絵が3枚ないときは、検証でこのメッセージのエラーになります。
static_assert(sizeof(animation) / sizeof(animation[0]) >= 3,
              "animation.h に絵が3枚ありません。エディターで3枚作ってから書き出してください。");

ArduinoLEDMatrix matrix;          // LEDマトリクスを使う準備

void setup() {
  matrix.begin();                 // LEDマトリクスを使い始める
}

void loop() {
  matrix.loadFrame(animation[0]); // 1枚目の絵を表示する
  delay(500);                     // 500ミリ秒（0.5秒）待つ
  matrix.loadFrame(animation[1]); // 2枚目の絵を表示する
  delay(500);
  matrix.loadFrame(animation[2]); // 3枚目の絵を表示する
  delay(500);
}
