/********************************************************************************
** Form generated from reading UI file 'numbas-mobileaVnpHh.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NUMBAS_2D_MOBILEAVNPHH_H
#define NUMBAS_2D_MOBILEAVNPHH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QLCDNumber *lcdNumber;
    QFrame *line;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open_kb;
    QPushButton *down;
    QPushButton *up;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *keyboard;
    QGridLayout *gridLayout;
    QPushButton *key9;
    QPushButton *key4;
    QPushButton *backspace;
    QPushButton *key7;
    QPushButton *done;
    QPushButton *key3;
    QPushButton *key8;
    QPushButton *key0;
    QPushButton *key6;
    QPushButton *key2;
    QPushButton *key1;
    QPushButton *key5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(429, 733);
        Form->setMinimumSize(QSize(376, 311));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/Frame 80.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Form->setWindowIcon(icon);
        Form->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:1 rgba(85, 85, 85, 255));\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 34));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        verticalLayout->addWidget(pushButton_5);

        lcdNumber = new QLCDNumber(Form);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMaximumSize(QSize(16777215, 251));
        lcdNumber->setLineWidth(1);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(10);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
        lcdNumber->setProperty("intValue", QVariant(1));

        verticalLayout->addWidget(lcdNumber);

        line = new QFrame(Form);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line);

        frame_2 = new QFrame(Form);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 72));
        frame_2->setMaximumSize(QSize(16777215, 52));
        frame_2->setFrameShape(QFrame::Shape::NoFrame);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        open_kb = new QPushButton(frame_2);
        open_kb->setObjectName("open_kb");
        open_kb->setMinimumSize(QSize(0, 58));
        open_kb->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        horizontalLayout_2->addWidget(open_kb);

        down = new QPushButton(frame_2);
        down->setObjectName("down");
        down->setMinimumSize(QSize(0, 58));
        down->setMaximumSize(QSize(75, 16777215));
        down->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        down->setIcon(icon1);
        down->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(down);

        up = new QPushButton(frame_2);
        up->setObjectName("up");
        up->setMinimumSize(QSize(0, 58));
        up->setMaximumSize(QSize(75, 16777215));
        up->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        up->setIcon(icon2);
        up->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(up);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 97));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 73));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Frame 75.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(41, 41));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 73));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Frame 74.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(41, 41));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 73));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Frame 77.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(41, 41));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 73));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("Frame 76.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(41, 41));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addWidget(frame);

        keyboard = new QFrame(Form);
        keyboard->setObjectName("keyboard");
        keyboard->setMaximumSize(QSize(16777215, 16777215));
        keyboard->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        keyboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(47, 47, 47, 255));\n"
"color: rgb(255, 255, 255);"));
        keyboard->setFrameShape(QFrame::Shape::StyledPanel);
        keyboard->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(keyboard);
        gridLayout->setObjectName("gridLayout");
        key9 = new QPushButton(keyboard);
        key9->setObjectName("key9");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(key9->sizePolicy().hasHeightForWidth());
        key9->setSizePolicy(sizePolicy1);
        key9->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key9, 2, 2, 1, 1);

        key4 = new QPushButton(keyboard);
        key4->setObjectName("key4");
        sizePolicy1.setHeightForWidth(key4->sizePolicy().hasHeightForWidth());
        key4->setSizePolicy(sizePolicy1);
        key4->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key4, 1, 0, 1, 1);

        backspace = new QPushButton(keyboard);
        backspace->setObjectName("backspace");
        sizePolicy1.setHeightForWidth(backspace->sizePolicy().hasHeightForWidth());
        backspace->setSizePolicy(sizePolicy1);
        backspace->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        backspace->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(backspace, 3, 0, 1, 1);

        key7 = new QPushButton(keyboard);
        key7->setObjectName("key7");
        sizePolicy1.setHeightForWidth(key7->sizePolicy().hasHeightForWidth());
        key7->setSizePolicy(sizePolicy1);
        key7->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key7, 2, 0, 1, 1);

        done = new QPushButton(keyboard);
        done->setObjectName("done");
        sizePolicy1.setHeightForWidth(done->sizePolicy().hasHeightForWidth());
        done->setSizePolicy(sizePolicy1);
        done->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        done->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(done, 3, 2, 1, 1);

        key3 = new QPushButton(keyboard);
        key3->setObjectName("key3");
        sizePolicy1.setHeightForWidth(key3->sizePolicy().hasHeightForWidth());
        key3->setSizePolicy(sizePolicy1);
        key3->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key3, 0, 2, 1, 1);

        key8 = new QPushButton(keyboard);
        key8->setObjectName("key8");
        sizePolicy1.setHeightForWidth(key8->sizePolicy().hasHeightForWidth());
        key8->setSizePolicy(sizePolicy1);
        key8->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key8, 2, 1, 1, 1);

        key0 = new QPushButton(keyboard);
        key0->setObjectName("key0");
        sizePolicy1.setHeightForWidth(key0->sizePolicy().hasHeightForWidth());
        key0->setSizePolicy(sizePolicy1);
        key0->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key0->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key0, 3, 1, 1, 1);

        key6 = new QPushButton(keyboard);
        key6->setObjectName("key6");
        sizePolicy1.setHeightForWidth(key6->sizePolicy().hasHeightForWidth());
        key6->setSizePolicy(sizePolicy1);
        key6->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key6, 1, 2, 1, 1);

        key2 = new QPushButton(keyboard);
        key2->setObjectName("key2");
        sizePolicy1.setHeightForWidth(key2->sizePolicy().hasHeightForWidth());
        key2->setSizePolicy(sizePolicy1);
        key2->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key2, 0, 1, 1, 1);

        key1 = new QPushButton(keyboard);
        key1->setObjectName("key1");
        sizePolicy1.setHeightForWidth(key1->sizePolicy().hasHeightForWidth());
        key1->setSizePolicy(sizePolicy1);
        key1->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key1, 0, 0, 1, 1);

        key5 = new QPushButton(keyboard);
        key5->setObjectName("key5");
        sizePolicy1.setHeightForWidth(key5->sizePolicy().hasHeightForWidth());
        key5->setSizePolicy(sizePolicy1);
        key5->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        key5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout->addWidget(key5, 1, 1, 1, 1);


        verticalLayout->addWidget(keyboard);


        retranslateUi(Form);
        QObject::connect(pushButton, &QPushButton::clicked, lcdNumber, qOverload<>(&QLCDNumber::setDecMode));
        QObject::connect(pushButton_2, &QPushButton::clicked, lcdNumber, qOverload<>(&QLCDNumber::setBinMode));
        QObject::connect(pushButton_3, &QPushButton::clicked, lcdNumber, qOverload<>(&QLCDNumber::setHexMode));
        QObject::connect(pushButton_4, &QPushButton::clicked, lcdNumber, qOverload<>(&QLCDNumber::setOctMode));
        QObject::connect(done, &QPushButton::clicked, keyboard, qOverload<>(&QFrame::hide));
        QObject::connect(open_kb, &QPushButton::clicked, keyboard, qOverload<>(&QFrame::show));

        open_kb->setDefault(false);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Diginum", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "Close", nullptr));
        open_kb->setText(QCoreApplication::translate("Form", "1", nullptr));
        up->setText(QString());
        pushButton->setText(QCoreApplication::translate("Form", "DEC", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "BIN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "HEX", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "OCT", nullptr));
        key9->setText(QCoreApplication::translate("Form", "9", nullptr));
        key4->setText(QCoreApplication::translate("Form", "4", nullptr));
        backspace->setText(QCoreApplication::translate("Form", "<-", nullptr));
        key7->setText(QCoreApplication::translate("Form", "7", nullptr));
        done->setText(QCoreApplication::translate("Form", "Done", nullptr));
        key3->setText(QCoreApplication::translate("Form", "3", nullptr));
        key8->setText(QCoreApplication::translate("Form", "8", nullptr));
        key0->setText(QCoreApplication::translate("Form", "0", nullptr));
        key6->setText(QCoreApplication::translate("Form", "6", nullptr));
        key2->setText(QCoreApplication::translate("Form", "2", nullptr));
        key1->setText(QCoreApplication::translate("Form", "1", nullptr));
        key5->setText(QCoreApplication::translate("Form", "5", nullptr));

        #if QT_CONFIG(shortcut)
        pushButton_5->setShortcut(QCoreApplication::translate("Form", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        open_kb->setText(QCoreApplication::translate("Form", "1", nullptr));
#if QT_CONFIG(shortcut)
        down->setShortcut(QCoreApplication::translate("Form", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        up->setText(QString());
#if QT_CONFIG(shortcut)
        up->setShortcut(QCoreApplication::translate("Form", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("Form", "DEC", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "BIN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "HEX", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "OCT", nullptr));
        key9->setText(QCoreApplication::translate("Form", "9", nullptr));
#if QT_CONFIG(shortcut)
        key9->setShortcut(QCoreApplication::translate("Form", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        key4->setText(QCoreApplication::translate("Form", "4", nullptr));
#if QT_CONFIG(shortcut)
        key4->setShortcut(QCoreApplication::translate("Form", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        backspace->setText(QCoreApplication::translate("Form", "<-", nullptr));
#if QT_CONFIG(shortcut)
        backspace->setShortcut(QCoreApplication::translate("Form", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        key7->setText(QCoreApplication::translate("Form", "7", nullptr));
#if QT_CONFIG(shortcut)
        key7->setShortcut(QCoreApplication::translate("Form", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        done->setText(QCoreApplication::translate("Form", "Done", nullptr));
        key3->setText(QCoreApplication::translate("Form", "3", nullptr));
#if QT_CONFIG(shortcut)
        key3->setShortcut(QCoreApplication::translate("Form", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        key8->setText(QCoreApplication::translate("Form", "8", nullptr));
#if QT_CONFIG(shortcut)
        key8->setShortcut(QCoreApplication::translate("Form", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        key0->setText(QCoreApplication::translate("Form", "0", nullptr));
#if QT_CONFIG(shortcut)
        key0->setShortcut(QCoreApplication::translate("Form", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        key6->setText(QCoreApplication::translate("Form", "6", nullptr));
#if QT_CONFIG(shortcut)
        key6->setShortcut(QCoreApplication::translate("Form", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        key2->setText(QCoreApplication::translate("Form", "2", nullptr));
#if QT_CONFIG(shortcut)
        key2->setShortcut(QCoreApplication::translate("Form", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        key1->setText(QCoreApplication::translate("Form", "1", nullptr));
#if QT_CONFIG(shortcut)
        key1->setShortcut(QCoreApplication::translate("Form", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        key5->setText(QCoreApplication::translate("Form", "5", nullptr));
#if QT_CONFIG(shortcut)
        key5->setShortcut(QCoreApplication::translate("Form", "5", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NUMBAS_2D_MOBILEAVNPHH_H
