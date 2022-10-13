#ifndef WORKCLASS_H
#define WORKCLASS_H

#include <QObject>
#include <QFile>
#include <QTextStream>

class WorkClass : public QObject
{
    Q_OBJECT

public:
    explicit WorkClass(QObject *parent = nullptr);
    ~WorkClass();
    Q_INVOKABLE
    bool saveWork();
    Q_INVOKABLE
    void setDay(int newDay);
    Q_INVOKABLE
    void setMonth(int newMonth);
    Q_INVOKABLE
    void setYear(int newYear);
    Q_INVOKABLE
    void setProcess(int newProcess);
    Q_INVOKABLE
    void setWorkName(const QString &newWorkName);
    Q_INVOKABLE
    int getCount() const;

signals:


private:
    int day, month, year, process;
    int count;
    QString WorkName;
    QFile *file;
};

#endif // WORKCLASS_H
