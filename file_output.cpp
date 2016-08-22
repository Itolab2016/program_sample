//ファイルへの出力のサンプル

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	char filename[] ="test.txt";//開きたいファイル名を文字列配列変数filenameに設定
  char outstr[255];
	std::ofstream fs(filename);//ファイルを開く

  double pitch,ax,gz;

  pitch=1.2;
  ax=2.1;
  gz=0.123;

   sprintf(outstr,"%lf %lf %lf",pitch,ax,gz);

  //ここからファイルに書き込む
	fs << outstr << std::endl;
	fs << "456" << std::endl;
	fs << "789" << std::endl;
	
	fs.close();//ファイルを使用し終わったので閉じる

	return 0;
	

}
