/****************************************************************************
**
** Copyright (c) 2007 Trolltech ASA <info@trolltech.com>
**
** Use, modification and distribution is allowed without limitation,
** warranty, liability or support of any kind.
**
****************************************************************************/

#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QLineEdit>

class QToolButton;

class LineEdit : public QLineEdit
{
    Q_OBJECT

public:
    LineEdit(QWidget *parent);

signals:
    void sigEnter();
    void sigLeave();

protected:
    void resizeEvent(QResizeEvent *e);
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);

#ifndef QBT_USES_QT5
private slots:
    void updateCloseButton(const QString &text);
#endif

private:
    QToolButton *searchButton;
#ifndef QBT_USES_QT5
    QToolButton *clearButton;
#endif
};

#endif // LIENEDIT_H
