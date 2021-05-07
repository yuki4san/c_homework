#include<stdio.h>       /* fprintf,perror   */
#include<stdlib.h>      /* exit             */
#include<unistd.h>      /* read,write,close */
#include<sys/types.h>   /* read             */
#include<fcntl.h>       /* open             */
#include<sys/uio.h>     /* read             */

//プロトタイプ宣言
// "simple_cat" "die"の関数のプロトタイプ宣言を行う。
// →　スクリプトの後半でそれぞれ関数の中身を書きます。
//
// static void: 外部変数や関数に対してstaticを使用することもできます。
// 通常外部変数や関数はプログラム全体のどこからでも見えるようになっています。
// しかし、staticを使って静的な記憶クラスで定義すると、その外部変数や関数は
// それが定義されたファイル(モジュール)以外からは参照することができなくなります。
//
// 変数や関数をファイル内のみで使用し、他に対しては公開したくない場合にこの方法をとります。
// const: 変数の値を変更せず定数として宣言する際に使う修飾子です。
// constが付くと変数は書き換えができなくなり、読み取り専用となります。
// 値を変更しようとするとコンパイルエラーが発生します。
static void simple_cat(const char *path);
static void die(const char *str);

int main(int argc, char *argv[])
{
    int i;

    if(argc < 2){
        fprintf(stderr, "%s: file name not given\n",argv[0]);
        exit(1);
    }
    for(i = 1;i < argc; i++)
        simple_cat(argv[i]);
    exit(0);
}

#define BUFSIZE 4096

static void simple_cat(const char *path)
{
    int fd;
    unsigned char buf[BUFSIZE];
    ssize_t cc;

    if((fd = open(path,O_RDONLY)) == -1)
        die(path);
    for(;;){
        cc = read(fd, buf, sizeof buf);
        if(cc == -1)
            die(path);
        if(cc == 0)
            break;
        if(write(STDOUT_FILENO, buf, cc) == -1)
            die(path);
    }
    if(close(fd) == -1)
        die(path);
}

static void die(const char *str)
{
    perror(str);
    exit(1);
}