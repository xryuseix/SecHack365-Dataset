# SecHack365 盗作用ソースコード

## 盗作手順

ご協力ありがとうございます．以下の手順にしたがって盗作いただければと思います．注意点として，皆さんの盗作コードは予告なく公開する可能性があります．

1. [以下のフォルダ](./AtCoder/)から適当に1つ以上のソースコードを選んで，盗作してください．その際，ソースコードのURLも保管しておいてください．
2. google form(URLは別途typetalkに記載)にソースコードのURL，盗作したソースコードを記載の上，送信してください．

<img src="./images/form_all.png" width="320px">

何か不明点などがあればtypetalkなどでご連絡いただけると幸いです．

## Q&A

### 1. プログラムを実行したいです．

コンパイラは以下のものを使用しています．
`Apple clang version 11.0.3 (clang-1103.0.32.29)`
また，すべてのコードはこれでコンパイルできるはずです．一部，C++17が必要なコードも含まれます．

```sh
g++ -std=c++1z -fsanitize=address -D_GLIBCXX_DEBUG -fsanitize=undefined -D_GLIBCXX_DEBUG_PEDANTIC -o a.out -I . [ファイル名].cpp
```

ただし，ソースコード中に

```cpp
#include <atcoder/all>
using namespace atcoder;
```

が入っている場合，AtCoder Libraryを使用しています(ほんの一部のソースコードだと思われます)．環境がない場合は別のコードを盗作していただくか，[AtCoder公式ぺージ](https://atcoder.jp/posts/517)を参考に，AtCoder Libraryを導入してください(少し面倒です)．

### 2. プログラムがバグってます/謎の変な文字が入ってます

こちら側での加工/整形ミスだと思われます．報告していただけるとありがたいです．

### 3. 盗作に決まりはありますか？

AtCoderでそのまま提出すれば正解できるようにしていただきたいです．別に提出していただく必要はないのですが，以下の項目に気をつけてください(僕がチェックするので，あまり気にしないでいただいて結構です)．

* 1秒以上の無駄なsleep/waitはおやめください．
* ソースコードに長すぎる(計 50,000 文字以上の)無駄すぎる行を追加しないでください．単純に冗長にするのは大歓迎です．google formがエラーを出さなければOKです(5000文字です)．5,000 文字以上，50,000 文字以下で盗作した場合は僕にtypetalkのDMなどで送っていただければ幸いです．多少多くても構わないので，その際はご連絡いただければと思います．
* メモリの大量の無駄遣いはおやめください．1024 MBくらいにおさまるようお願いします．(故意で無駄にメモリを使用しない限り問題ありません．`int A[1000000000000];`みたいなものがやめて欲しいという意図です．)
* ソースコードの最初の方にコメントアウトで情報がついています(例は以下のコード)．盗作する際，これは消しても構わないのですが，できれば盗作前に「引用元：」には可能な限りアクセスしないようお願いします(盗作ではなく，自力で問題を解いてしまう可能性があるため)．

```cpp
/*
引用元：https://atcoder.jp/contests/abc018/tasks/abc018_3
C - 菱型カウント
// ソースコードの引用元 : https://atcoder.jp/contests/abc018/submissions/8330584
// 提出ID : 8330584
// 問題ID : abc018_3
// コンテストID : abc018
// ユーザID : xryuseix
// コード長 : 3094
// 実行時間 : 16
*/
```

### 4. 既に無駄なincludeが入ってます

すみませんが，競技プログラミングではコンテスト時間が決まっているので，あらかじめ必要そうなファイルをincludeしたり，マクロを定義したりすることがあります．他にも余計なコメントアウトや雑な変数名などがあり，非常に汚いと思うのですが，ご容赦ください．

### 5. どんな盗作が考えられますか？

以下の項目を参考にしてください．別に従う必要はありません．

1. インデント，スペース，改行などの変更
2. コメントの変更，追加，削除
3. 変数名，コメント，出力の自然言語を翻訳(英語から日本語など)
4. 変数名，定数名，関数名，クラス名などの識別子の名前を変更
5. 定数，最終変数，`enum`値などの値を変更
6. 並び順に違いがないコード行の並び替え
7. 使われていない，何もしていないコードを追加
8. 1 行のコード， 1 つのクラスや関数を複数に分割
9. 複数行のコード，複数個のクラスや関数を1つに結合
10. オペランドの順序を変更，論理演算を等価なものに変更，変数のスコープをローカルからグローバルに変更，クラスの`private`を`public`への変更，`float`から`double`へのデータ型の変更
11. 制御構造体のおきかえ (`for`の代わりに`while`を，`if`の代わりに`switch`など)
12. 不要なコード行の削除など，単純化
13. 大まかなロジックだけコピーして，残りは自分で書く
14. 関数やクラスなどをコピーしてオリジナルのコードと結合

### 6. 最終的に盗作ペアは目視でチェックしますか？

はい．