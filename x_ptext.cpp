#include <../x_PText.hh>

PText::PText(string name){
    fileName=name;
}

void PText::print(int x,int y){
    string test="Let's test the string";
    ofstream f;
    f.open(fileName);
    f<<'/'<<"/Times-Roman findfont 20 scalefont setfont"<<x<<' '<<y<<' '<<"moveto"<<" ("<<test<<") show";
}
