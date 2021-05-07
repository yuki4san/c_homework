#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 命題：名前、年齢、性別を入力して表示するプログラムを作る
// 何人分でも入力できるようにする
// ①データは構造体で記憶する
// ②データの入力は専用の関数を作って行う
// ③データの表示は専用の関数を作って行う
// ④年齢に−1が入力されれば終了

typedef struct {
	char name[256];
	int age;
	int sex;
} People;
// typedefで新しい構造体型Peopleを宣言する

void InputPeople(People *data);
// 人のName、Age、Sexの情報をポインタ変数dataに格納する関数を宣言（プロトタイプ線g年）
void ShowPeople(People data);
// 人のName、Age、Sexの情報をターミナルに表示する関数を宣言（プロトタイプ線g年）

int main(void){
	int i, count, datasize;
	People *data;
	// dataはPeople型へのポインタ変数（People型へのポインタ型ともいう）

	datasize = 10;
	//必要なメモリのバイトサイズの初期値は10

	data = (People*)malloc(sizeof(People)*datasize);
	// 上記の式の意味：
	// ポインタ変数data =(People型のキャストオペレーター)malloc(必要なメモリのバイトサイズ);
	// メモ：
	// malloc()の戻り値はvoid *型ですが、これをPeople *型へと変換している(People*)を
	// キャスト演算子(cast operator)と呼ぶ

	count = 0;
	// countの初期化
	while(1){
	// 永遠に終了しないように書かれたループのことを「無限ループ」と呼ぶ
	// 例：while(1){無限ループ}
		InputPeople(&data[count]);
		// InputPeople関数の引数としてdataのアドレスを使用
		if (data[count].age == -1) break;
		// age=-1が入力されたらストップ！
		count++;
		// countに1を追加

		if (count >= datasize){
			//もし10人目以上の入力があったら以下の処理を行う
			datasize += 10;
			//datasizeに10を追加
			data = (People*)realloc(data, sizeof(People) * datasize);
			// 入力が10人目を超えたときの処理：すなわち、「必要なメモリのバイトサイズを200にする」
			// ポインタ変数data =(People型のキャストオペレーター)realloc(ポインタ変数data, 必要なメモリのバイトサイズ);
			// メモ：ポインタ変数dataには、malloc関数で確保したメモリのアドレスを指定します．
			// realloc関数は、中身を維持したまま、新しいサイズのメモリを確保します．
		}
	}

	for (i = 0; i < count; i++){
		// count（入力された人数）の数だけ以下の処理をループします
		ShowPeople(data[i]);
		// ポインタ変数に格納されたアドレス（例えば00x7ffffc12abc4のような）を引数として使用
		// dataの中には入力された人数分の「Name, Age, Sex」の情報が入っている
		// i=1なら一番目に入力された人の情報が引数の中身になります
	}

	free(data);
	return 0;
}

void InputPeople(People *data){
	// 人のName、Age、Sexの情報をポインタ変数dataに格納する関数
	printf("Name: ");
	//文字列を入力するときは配列名の前に＆を付けない。
	// 理由：配列名は配列の最初の要素のアドレスをアドレスを表している。
	// したがって、配列名を渡せば、配列の場所がわかるため、＆は不要。
	scanf("%s", data->name);
	printf("Age: ");
	scanf("%d", &data->age);
	printf("Sex (1=Male, 2=Female): ");
	scanf("%d", &data->sex);
	printf("\n");
}

void ShowPeople(People data){
	// 人のName、Age、Sexの情報をターミナルに表示する関数
	char sex[16];
	// 文字型の変数sexを定義; sexの要素数=16(0-15までの番号が振られている)
	printf("Name: %s\n", data.name);
	// 名前を表示
	printf("Age: %d\n", data.age);
	// 年齢を表示
	if (data.sex == 1) {
		// もし性別が1なら男性、それ以外なら女性とsex変数に代入
		strcpy(sex, "Male");
	} else {
		strcpy(sex, "Female");
	}
	printf("Sex: %s\n", sex);
	// 性別を表示
	printf("\n");
	// ひとりひとりの間にはスペース（行）を表示
}