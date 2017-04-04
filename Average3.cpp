#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N1, N2, N3, N4, media, n_exame;
    cin >> N1 >> N2 >> N3 >> N4;

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;

    cout << setiosflags(ios::fixed) << setprecision(1) << "Media: " << media << endl;

        if(media >= 7.0)
            cout << "Aluno aprovado." << endl;
        else if(media <= 4.9)
            cout << "Aluno reprovado." << endl;
        else {

            cout << "Aluno em exame." << endl;

            cin >> n_exame;
            cout << "Nota do exame: " << n_exame << endl;

            media = (media + n_exame) / 2;

                if(media >= 5.0)
                    cout << "Aluno aprovado." << endl;
                else
                    cout << "Aluno reprovado." << endl;

            cout << setiosflags(ios::fixed) << setprecision(1) << "Media final: " << media << endl;
        }
}
