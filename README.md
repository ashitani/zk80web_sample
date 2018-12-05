# zk80web_sample

sample program and Makefile for [zk-80 web(TK80 clone)](http://hp.vector.co.jp/authors/VA016157/zk80web04/zk80web.html)

# requirement

- z88dk(z80asm)
- python3

# sample program

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

![screenshot](./image/screenshot.png)
