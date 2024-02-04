#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QStack>
#include <QLCDNumber>
#include <QPushButton>
#include <QGridLayout>
#include <mainwindow.h>

class Calculator : public QWidget
{
    Q_OBJECT
public:
    Calculator(MainWindow *pwgt);
    QPushButton* createButton(const QString& str);
    void calculate();

public slots:
    void slotButtonClicked();

private:
    QLCDNumber      *m_plcd;
    QStack<QString> m_stk;
    QString         m_strDisplay;
};

#endif // CALCULATOR_H
