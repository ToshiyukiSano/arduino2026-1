# Arduino入門講座 第1回「Arduinoで光をコントロールしよう」教材

Arduino UNO R4 WiFi で使うスケッチ（プログラム）一式です。

## ダウンロードのしかた（GitHubのアカウントやGitは不要）

1. このページの緑色の「Code」ボタンを押す
2. 「Download ZIP」を選ぶ
3. ダウンロードしたZIPを**展開**する（Windows：ZIPを右クリック →「すべて展開」）
4. 展開したフォルダーから、使うスケッチのフォルダーを開き、中の `.ino` ファイルを Arduino IDE で開く

ZIPの中を表示しただけの状態では開かないでください。必ず展開してから使います。

## フォルダーの内容

| フォルダー | 内容 |
|---|---|
| `blink_kansei` | Blink（内蔵LED「L」の点滅）の完成版 |
| `matrix1_sample` | LEDマトリクスにハートを表示するサンプル |
| `matrix2_template` | 自分の絵に差し替えるひな形 |
| `matrix3_two_frames` | 2枚の絵を交互に表示する（アニメーション制作のもと） |
| `matrix4_three_frames` | 3枚の絵を順番に表示する書き方の例 |
| `backup_pictures` | LED Matrix Editor が使えないときの絵のデータ |

## 使うときの注意

- マトリクス用のスケッチは、`.ino` と `animation.h` を同じフォルダーでいっしょに使います。フォルダーの構成を変えたり、`.ino` だけを別の場所へ移したりしないでください。
- 自分の絵は、LED Matrix Editor の画面右上の「</>」で書き出し、スケッチの `animation.h` タブの内容を更新して使います。
- 作品は Arduino IDE の「ファイル」→「名前を付けて保存」で、スケッチ全体を保存してください。元のZIPには自分の変更は入りません。
