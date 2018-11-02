#ifndef SINGLISHMAIN_H
#define SINGLISHMAIN_H

#include <QMainWindow>

namespace Ui {
class SinglishMain;
}

class SinglishMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit SinglishMain(QWidget *parent = nullptr);
    ~SinglishMain();

private slots:
    void on_textSinglish_textChanged();
    void initializeWithChars();
    void updateSinhalaText();

private:
    Ui::SinglishMain *ui;

    const int vowelsCount = 26;
    const int specialConsonantCount = 6;
    const int consonantCount = 46;
    const int specialCharCount = 2;


    QString vowelsUni[26];
    QString vowels[26];
    QString vowelModifiersUni[26];
    QString specialConsonantsUni[6];
    QString specialConsonants[6];
    QString consonantsUni[46];
    QString consonants[46];
    QString specialCharUni[2];
    QString specialChar[2];

};

#endif // SINGLISHMAIN_H
