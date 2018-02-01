#include <iostream>
#include <string>

using namespace std;

int main()
{
int b, c, f;
setlocale (LC_ALL, "RUS");
cout << "Введите число, не больше 99 и не меньше 10" << endl;
cin >> b;
if (b<99 && b>10) {
c = (b/10)%10;
f = b%10;
if (c>f) {
cout << c << " - большая цифра" << endl;
cout << f << " - меньшая цифра" << endl;
system("pause");
} else if (c==f) {
cout << "Числа одинаковые!" << endl;
} else {
cout << f << " - большая цифра" << endl;
cout << c << " - меньшая цифра" << endl;
system("pause");
}
} else {
cout << "Введите двухзначное число" << endl;
system("pause");
}

return 0;
}