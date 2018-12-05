# zk80web_sample

[zk-80 web(TK80クローン)](http://hp.vector.co.jp/authors/VA016157/zk80web04/zk80web.html)
のサンプルプログラムとビルドスクリプトです。

zk-80 webの使い方は[こちら](http://hp.vector.co.jp/authors/VA016157/zk80web04/help/)。

# requirement

- [z88dk](https://github.com/z88dk/z88dk)(に含まれるz80asm)
- python3

# サンプルプログラム

```
ORG 0x8000

ld hl,hello_txt
ld de,0x83f8     ; 7seg buffer
ld bc,8          ; letters
ldir
halt

hello_txt:
defb 0x76,0x79,0x38,0x38,0x3f,0x00,0x00
```

0x83f8

# ビルド

```
cd hello
make
```

hello.binができます。冒頭にリトルエンディアンで開始アドレスを書くのがお作法のようなので、insert_addr.pyでその処理を行います。

# 実行

[エミュレータ](http://hp.vector.co.jp/authors/VA016157/zk80web04/zk80web.html)を開いて

- [ファイルを選択]にhello.binを指定
- [LOAD DATA]
- [RUN]

![screenshot](./image/screenshot.png)
