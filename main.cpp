#include <iostream>

using namespace std;

class MorseCode {
private:
    string A = ". -";
    string B = "- . . .";
    string C = "- . - .";
    string D = "- . .";
    string E = ".";
    string F = ". . - .";
    string G = "- - .";
    string H = ". . . .";
    string I = ". .";
    string J = ". - - -";
    string K = "- . -";
    string L = ". - . .";
    string M = "- -";
    string N = "- .";
    string O = "- - -";
    string P = ". - - .";
    string Q = "- - . -";
    string R = ". - .";
    string S = ". . .";
    string T = "-";
    string U = ". . -";
    string V = ". . . -";
    string W = ". - -";
    string X = "- . . -";
    string Y = "- . - -";
    string Z = "- - . .";
    string num1 = ". - - - -";
    string num2 = ". . - - -";
    string num3 = ". . . - -";
    string num4 = ". . . . -";
    string num5 = ". . . . .";
    string num6 = "- . . . .";
    string num7 = "- - . . .";
    string num8 = "- - - . .";
    string num9 = "- - - - .";
    string num0 = "- - - - -";
    string space = "       ";
public:
    string morseCodeConverter(string plainText)
    {
        string morseCode = "";
        for (int i = 0; i <= plainText.length(); i++)
        {
            if (plainText[i] == 'A' || plainText[i] == 'a')
            {
                morseCode += A;
                morseCode += "   ";
            } else
            if (plainText[i] == 'B' || plainText[i] == 'b')
            {
                morseCode += B;
                morseCode += "   ";
            } else
            if (plainText[i] == 'C' || plainText[i] == 'c')
            {
                morseCode += C;
                morseCode += "   ";
            } else
            if (plainText[i] == 'D' || plainText[i] == 'd')
            {
                morseCode += D;
                morseCode += "   ";
            } else
            if (plainText[i] == 'E' || plainText[i] == 'e')
            {
                morseCode += E;
                morseCode += "   ";
            } else
            if (plainText[i] == 'F' || plainText[i] == 'f')
            {
                morseCode += F;
                morseCode += "   ";
            } else
            if (plainText[i] == 'G' || plainText[i] == 'g')
            {
                morseCode += G;
                morseCode += "   ";
            } else
            if (plainText[i] == 'H' || plainText[i] == 'h')
            {
                morseCode += H;
                morseCode += "   ";
            } else
            if (plainText[i] == 'I' || plainText[i] == 'i')
            {
                morseCode += I;
                morseCode += "   ";
            } else
            if (plainText[i] == 'J' || plainText[i] == 'j')
            {
                morseCode += K;
                morseCode += "   ";
            } else
            if (plainText[i] == 'K' || plainText[i] == 'k')
            {
                morseCode += K;
                morseCode += "   ";
            } else
            if (plainText[i] == 'L' || plainText[i] == 'l')
            {
                morseCode += L;
                morseCode += "   ";
            } else
            if (plainText[i] == 'M' || plainText[i] == 'm')
            {
                morseCode += M;
                morseCode += "   ";
            } else
            if (plainText[i] == 'N' || plainText[i] == 'n')
            {
                morseCode += N;
                morseCode += "   ";
            } else
            if (plainText[i] == 'O' || plainText[i] == 'o')
            {
                morseCode += O;
                morseCode += "   ";
            } else
            if (plainText[i] == 'P' || plainText[i] == 'p')
            {
                morseCode += P;
                morseCode += "   ";
            } else
            if (plainText[i] == 'Q' || plainText[i] == 'q')
            {
                morseCode += Q;
                morseCode += "   ";
            } else
            if (plainText[i] == 'R' || plainText[i] == 'r')
            {
                morseCode += R;
                morseCode += "   ";
            } else
            if (plainText[i] == 'S' || plainText[i] == 's')
            {
                morseCode += S;
                morseCode += "   ";
            } else
            if (plainText[i] == 'T' || plainText[i] == 't')
            {
                morseCode += T;
                morseCode += "   ";
            } else
            if (plainText[i] == 'U' || plainText[i] == 'u')
            {
                morseCode += U;
                morseCode += "   ";
            } else
            if (plainText[i] == 'V' || plainText[i] == 'v')
            {
                morseCode += V;
                morseCode += "   ";
            } else
            if (plainText[i] == 'W' || plainText[i] == 'w')
            {
                morseCode += W;
                morseCode += "   ";
            } else
            if (plainText[i] == 'X' || plainText[i] == 'x')
            {
                morseCode += X;
                morseCode += "   ";
            } else
            if (plainText[i] == 'Y' || plainText[i] == 'y')
            {
                morseCode += Y;
                morseCode += "   ";
            } else
            if (plainText[i] == 'Z' || plainText[i] == 'z')
            {
                morseCode += Z;
                morseCode += "   ";
            } else
            if (plainText[i] == '1')
            {
                morseCode += num1;
                morseCode += "   ";
            } else
            if (plainText[i] == '2')
            {
                morseCode += num2;
                morseCode += "   ";
            } else
            if (plainText[i] == '3')
            {
                morseCode += num3;
                morseCode += "   ";
            } else
            if (plainText[i] == '4')
            {
                morseCode += num4;
                morseCode += "   ";
            } else
            if (plainText[i] == '5')
            {
                morseCode += num5;
                morseCode += "   ";
            } else
            if (plainText[i] == '6')
            {
                morseCode += num6;
                morseCode += "   ";
            } else
            if (plainText[i] == '7')
            {
                morseCode += num7;
                morseCode += "   ";
            } else
            if (plainText[i] == '8')
            {
                morseCode += num9;
                morseCode += "   ";
            } else
            if (plainText[i] == '0')
            {
                morseCode += num0;
                morseCode += "   ";
            } else
                if (plainText[i] == ' ')
                {
                    morseCode += space;
                }
        }
        return morseCode;
    }
};

int main()
{
    MorseCode MC;
    string text;
    cout << "Enter the sentence to convert to morse code:" << endl;
    getline(cin,text);
    cout << MC.morseCodeConverter(text);
    return 0;
}
