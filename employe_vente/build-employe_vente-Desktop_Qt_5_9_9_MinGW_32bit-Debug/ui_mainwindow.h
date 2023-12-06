/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label_cin_employe;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_age;
    QLabel *label_sante;
    QLineEdit *lineEdit_cin_employe;
    QLineEdit *lineEdit_nom_employe;
    QLineEdit *lineEdit_prenom_employe;
    QLineEdit *lineEdit_age_employe;
    QLineEdit *lineEdit_sante_employe;
    QPushButton *pushButton_ajouter_employe;
    QToolButton *toolButton;
    QLabel *label_heure;
    QLineEdit *lineEdit_heure_employe;
    QLabel *label_5;
    QLineEdit *lineEdit_sexe_employe;
    QPushButton *pushButton_modifier_employe;
    QPushButton *pushButton_supp_employe;
    QPushButton *pushButton_rechercher_employe;
    QPushButton *pushButton_statstique_employe;
    QPushButton *pushButton_tri_age_employe;
    QPushButton *pushButton_tri_id_employe;
    QLabel *label_6;
    QLineEdit *lineEdit_Habs_employe;
    QPushButton *pushButton_age_statistique_employe;
    QPushButton *pushButton_abs_statistique_employe;
    QPushButton *pushButton_heure_statistique_employe;
    QPushButton *pushButton_tri_nom_employe;
    QPushButton *pushButton_tri_prenom_employe;
    QLabel *label_3;
    QLineEdit *lineEdit_rfid_employe;
    QPushButton *pushButton_PDF_employe;
    QPushButton *pushButton_Word_employe;
    QTableView *table_employe;
    QTextEdit *textEdit_chat;
    QPushButton *pushButton_chat_employe;
    QLineEdit *lineEdit_chat;
    QPushButton *pushButton_OuvrirBlocNote_employe;
    QLabel *label_2;
    QPushButton *pushButton_employe_de_moit_employe;
    QLabel *mes2;
    QPushButton *pushButton_calculer_prime_employe;
    QPushButton *pushButton_showQuestions_employe;
    QPushButton *pushButton_disconnect;
    QLabel *us;
    QWidget *tab_3;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *le_id_vehicule;
    QLineEdit *le_nom_beneficiaire;
    QLineEdit *le_type;
    QLineEdit *le_model;
    QLineEdit *le_num_chassis;
    QLineEdit *le_prix_vente;
    QPushButton *pb_ajouter_vente;
    QPushButton *stat_vente;
    QPushButton *modifier_vente;
    QPushButton *rechercher_vente;
    QPushButton *tri_2_vente;
    QPushButton *supprimer_vente;
    QTableView *tab_vente;
    QPushButton *exporte_vente;
    QPushButton *historique_vente;
    QLabel *labelTime;
    QPushButton *arduino_2_vente;
    QPushButton *pushButton_disconnect_2;
    QWidget *page_2;
    QFrame *frame;
    QLabel *label_conn_2;
    QPushButton *pushButton_conn_2;
    QLineEdit *lineEdit_cin_login;
    QLineEdit *lineEdit_nom_login;
    QLabel *label_user_2;
    QLabel *label_pass_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2149, 1103);
        MainWindow->setStyleSheet(QLatin1String("\n"
"QMainWindow {\n"
"    background-color: #f0f0f0;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background-color: #e0e0e0;\n"
"}\n"
"\n"
"QToolBar {\n"
"    background-color: #d0d0d0;\n"
"}\n"
"\n"
"QStatusBar {\n"
"    background-color: #c0c0c0;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 2131, 1011));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, -20, 2001, 1021));
        QFont font;
        font.setPointSize(18);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::CrossCursor));
        tabWidget->setMouseTracking(false);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->setToolTipDuration(-1);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #3498db);\n"
"    margin: auto; /* Center the QTabWidget */\n"
"}\n"
"QTabWidget:tab-bar\n"
"{\n"
"	alignment:center;\n"
"}\n"
"QTabBar::tab {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #3498db);\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border: 2px solid #2980b9;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    text-align: center; /* Center the text within the tab */\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #1a5276);\n"
"    color: #000000; /* Black text color on hover and selected */\n"
"}\n"
"\n"
"QTabBar::tab:selected:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 "
                        "#1a5276);\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(90, 30));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 821, 711));
        groupBox->setStyleSheet(QStringLiteral(""));
        label_cin_employe = new QLabel(groupBox);
        label_cin_employe->setObjectName(QStringLiteral("label_cin_employe"));
        label_cin_employe->setGeometry(QRect(20, 10, 101, 51));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        label_cin_employe->setFont(font1);
        label_cin_employe->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_nom = new QLabel(groupBox);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(20, 80, 101, 51));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_nom->setFont(font2);
        label_nom->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_prenom = new QLabel(groupBox);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(20, 150, 121, 51));
        label_prenom->setFont(font2);
        label_prenom->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_age = new QLabel(groupBox);
        label_age->setObjectName(QStringLiteral("label_age"));
        label_age->setGeometry(QRect(20, 220, 91, 51));
        label_age->setFont(font2);
        label_age->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_sante = new QLabel(groupBox);
        label_sante->setObjectName(QStringLiteral("label_sante"));
        label_sante->setGeometry(QRect(20, 290, 101, 51));
        label_sante->setFont(font2);
        label_sante->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        lineEdit_cin_employe = new QLineEdit(groupBox);
        lineEdit_cin_employe->setObjectName(QStringLiteral("lineEdit_cin_employe"));
        lineEdit_cin_employe->setGeometry(QRect(170, 19, 191, 31));
        lineEdit_cin_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        lineEdit_cin_employe->setEchoMode(QLineEdit::Normal);
        lineEdit_nom_employe = new QLineEdit(groupBox);
        lineEdit_nom_employe->setObjectName(QStringLiteral("lineEdit_nom_employe"));
        lineEdit_nom_employe->setGeometry(QRect(170, 89, 191, 31));
        lineEdit_nom_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        lineEdit_prenom_employe = new QLineEdit(groupBox);
        lineEdit_prenom_employe->setObjectName(QStringLiteral("lineEdit_prenom_employe"));
        lineEdit_prenom_employe->setGeometry(QRect(170, 159, 191, 31));
        lineEdit_prenom_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        lineEdit_age_employe = new QLineEdit(groupBox);
        lineEdit_age_employe->setObjectName(QStringLiteral("lineEdit_age_employe"));
        lineEdit_age_employe->setGeometry(QRect(168, 230, 191, 31));
        lineEdit_age_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        lineEdit_sante_employe = new QLineEdit(groupBox);
        lineEdit_sante_employe->setObjectName(QStringLiteral("lineEdit_sante_employe"));
        lineEdit_sante_employe->setGeometry(QRect(168, 300, 191, 31));
        lineEdit_sante_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        pushButton_ajouter_employe = new QPushButton(groupBox);
        pushButton_ajouter_employe->setObjectName(QStringLiteral("pushButton_ajouter_employe"));
        pushButton_ajouter_employe->setGeometry(QRect(540, 20, 171, 41));
        pushButton_ajouter_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../Users/amin2/Downloads/189689.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ajouter_employe->setIcon(icon);
        pushButton_ajouter_employe->setIconSize(QSize(26, 26));
        pushButton_ajouter_employe->setAutoRepeatDelay(314);
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(800, 0, 23, 20));
        label_heure = new QLabel(groupBox);
        label_heure->setObjectName(QStringLiteral("label_heure"));
        label_heure->setGeometry(QRect(20, 370, 101, 51));
        label_heure->setFont(font2);
        label_heure->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        lineEdit_heure_employe = new QLineEdit(groupBox);
        lineEdit_heure_employe->setObjectName(QStringLiteral("lineEdit_heure_employe"));
        lineEdit_heure_employe->setGeometry(QRect(170, 379, 191, 31));
        lineEdit_heure_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 440, 101, 51));
        label_5->setFont(font2);
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        lineEdit_sexe_employe = new QLineEdit(groupBox);
        lineEdit_sexe_employe->setObjectName(QStringLiteral("lineEdit_sexe_employe"));
        lineEdit_sexe_employe->setGeometry(QRect(170, 449, 191, 31));
        lineEdit_sexe_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        pushButton_modifier_employe = new QPushButton(groupBox);
        pushButton_modifier_employe->setObjectName(QStringLiteral("pushButton_modifier_employe"));
        pushButton_modifier_employe->setGeometry(QRect(540, 70, 171, 41));
        pushButton_modifier_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../Users/amin2/Downloads/84380.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_modifier_employe->setIcon(icon1);
        pushButton_modifier_employe->setIconSize(QSize(26, 26));
        pushButton_supp_employe = new QPushButton(groupBox);
        pushButton_supp_employe->setObjectName(QStringLiteral("pushButton_supp_employe"));
        pushButton_supp_employe->setGeometry(QRect(540, 170, 171, 41));
        pushButton_supp_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../Users/amin2/Downloads/6861362.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_supp_employe->setIcon(icon2);
        pushButton_supp_employe->setIconSize(QSize(26, 26));
        pushButton_rechercher_employe = new QPushButton(groupBox);
        pushButton_rechercher_employe->setObjectName(QStringLiteral("pushButton_rechercher_employe"));
        pushButton_rechercher_employe->setGeometry(QRect(540, 120, 171, 41));
        pushButton_rechercher_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../Users/amin2/Downloads/search_102938.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_rechercher_employe->setIcon(icon3);
        pushButton_rechercher_employe->setIconSize(QSize(26, 26));
        pushButton_statstique_employe = new QPushButton(groupBox);
        pushButton_statstique_employe->setObjectName(QStringLiteral("pushButton_statstique_employe"));
        pushButton_statstique_employe->setGeometry(QRect(510, 550, 231, 41));
        pushButton_statstique_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../Users/amin2/Downloads/603148.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_statstique_employe->setIcon(icon4);
        pushButton_statstique_employe->setIconSize(QSize(30, 30));
        pushButton_tri_age_employe = new QPushButton(groupBox);
        pushButton_tri_age_employe->setObjectName(QStringLiteral("pushButton_tri_age_employe"));
        pushButton_tri_age_employe->setGeometry(QRect(540, 260, 171, 41));
        pushButton_tri_age_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../Users/amin2/Downloads/5930651.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tri_age_employe->setIcon(icon5);
        pushButton_tri_age_employe->setIconSize(QSize(26, 26));
        pushButton_tri_id_employe = new QPushButton(groupBox);
        pushButton_tri_id_employe->setObjectName(QStringLiteral("pushButton_tri_id_employe"));
        pushButton_tri_id_employe->setGeometry(QRect(540, 360, 171, 41));
        pushButton_tri_id_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../Users/amin2/Downloads/5231546.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tri_id_employe->setIcon(icon6);
        pushButton_tri_id_employe->setIconSize(QSize(26, 26));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 510, 101, 51));
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        lineEdit_Habs_employe = new QLineEdit(groupBox);
        lineEdit_Habs_employe->setObjectName(QStringLiteral("lineEdit_Habs_employe"));
        lineEdit_Habs_employe->setGeometry(QRect(168, 520, 191, 31));
        lineEdit_Habs_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        pushButton_age_statistique_employe = new QPushButton(groupBox);
        pushButton_age_statistique_employe->setObjectName(QStringLiteral("pushButton_age_statistique_employe"));
        pushButton_age_statistique_employe->setGeometry(QRect(510, 600, 231, 41));
        pushButton_age_statistique_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../Users/amin2/Downloads/5812980.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_age_statistique_employe->setIcon(icon7);
        pushButton_age_statistique_employe->setIconSize(QSize(40, 40));
        pushButton_abs_statistique_employe = new QPushButton(groupBox);
        pushButton_abs_statistique_employe->setObjectName(QStringLiteral("pushButton_abs_statistique_employe"));
        pushButton_abs_statistique_employe->setGeometry(QRect(510, 650, 231, 41));
        pushButton_abs_statistique_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../Users/amin2/Downloads/3588110.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_abs_statistique_employe->setIcon(icon8);
        pushButton_abs_statistique_employe->setIconSize(QSize(40, 40));
        pushButton_heure_statistique_employe = new QPushButton(groupBox);
        pushButton_heure_statistique_employe->setObjectName(QStringLiteral("pushButton_heure_statistique_employe"));
        pushButton_heure_statistique_employe->setGeometry(QRect(510, 500, 231, 41));
        pushButton_heure_statistique_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../Users/amin2/Downloads/1479651.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_heure_statistique_employe->setIcon(icon9);
        pushButton_heure_statistique_employe->setIconSize(QSize(30, 30));
        pushButton_tri_nom_employe = new QPushButton(groupBox);
        pushButton_tri_nom_employe->setObjectName(QStringLiteral("pushButton_tri_nom_employe"));
        pushButton_tri_nom_employe->setGeometry(QRect(540, 310, 171, 41));
        pushButton_tri_nom_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../Users/amin2/Downloads/sort_alphabetical_ascending_icon_135171.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tri_nom_employe->setIcon(icon10);
        pushButton_tri_nom_employe->setIconSize(QSize(26, 26));
        pushButton_tri_prenom_employe = new QPushButton(groupBox);
        pushButton_tri_prenom_employe->setObjectName(QStringLiteral("pushButton_tri_prenom_employe"));
        pushButton_tri_prenom_employe->setGeometry(QRect(540, 410, 171, 41));
        pushButton_tri_prenom_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../Users/amin2/Downloads/4598422.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tri_prenom_employe->setIcon(icon11);
        pushButton_tri_prenom_employe->setIconSize(QSize(26, 26));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 580, 101, 51));
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        lineEdit_rfid_employe = new QLineEdit(groupBox);
        lineEdit_rfid_employe->setObjectName(QStringLiteral("lineEdit_rfid_employe"));
        lineEdit_rfid_employe->setGeometry(QRect(170, 590, 191, 31));
        lineEdit_rfid_employe->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        pushButton_PDF_employe = new QPushButton(groupBox);
        pushButton_PDF_employe->setObjectName(QStringLiteral("pushButton_PDF_employe"));
        pushButton_PDF_employe->setGeometry(QRect(770, 660, 41, 41));
        pushButton_PDF_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../Users/amin2/Downloads/179483.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_PDF_employe->setIcon(icon12);
        pushButton_PDF_employe->setIconSize(QSize(34, 34));
        pushButton_Word_employe = new QPushButton(groupBox);
        pushButton_Word_employe->setObjectName(QStringLiteral("pushButton_Word_employe"));
        pushButton_Word_employe->setGeometry(QRect(770, 610, 41, 41));
        pushButton_Word_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../Users/amin2/Downloads/Microsoft-Word-Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Word_employe->setIcon(icon13);
        pushButton_Word_employe->setIconSize(QSize(60, 60));
        table_employe = new QTableView(tab_2);
        table_employe->setObjectName(QStringLiteral("table_employe"));
        table_employe->setGeometry(QRect(920, 60, 941, 421));
        table_employe->setFont(font);
        table_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}\n"
"QTableView {\n"
"    background-color: #f5f5f5; /* Set the background color */\n"
"    alternate-background-color: #e0e0e0; /* Set the alternate row background color */\n"
"    selection-background-color: #a8d8ea; /* Set the selection background color */\n"
"    selection-color: #333; /* Set the selection text color */\n"
"    gridline-color: #ccc; /* Set the color of gridlines */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4CAF50; /* Set the header background color */\n"
"    color: white; /* Set the header text color */\n"
"    padding: 5px; /* Add some padding to the header */\n"
"    border: 1px solid #ddd; /* Add a border to the header */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Add some padding to the table cells */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #a8d8ea; /* Set the background color of selected cells */\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
""
                        "    background-color: #d4e9f8; /* Set the background color of cells on hover */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 1px solid #ddd; /* Add a border to the vertical scrollbar */\n"
"    background: #f5f5f5; /* Set the background color of the scrollbar */\n"
"    width: 10px; /* Set the width of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #4CAF50; /* Set the color of the handle in the vertical scrollbar */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 1px solid #ddd; /* Add a border to the buttons in the vertical scrollbar */\n"
"    height: 10px; /* Set the height of the buttons in the vertical scrollbar */\n"
"    subcontrol-position: top; /* Position the buttons at the top of the vertical scrollbar */\n"
"    subcontrol-origin: margin; /* Set the origin of the buttons to the margin of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: 1px solid #ddd; /* Add a border to the horizontal"
                        " scrollbar */\n"
"    background: #f5f5f5; /* Set the background color of the scrollbar */\n"
"    height: 10px; /* Set the height of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #4CAF50; /* Set the color of the handle in the horizontal scrollbar */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #ddd; /* Add a border to the buttons in the horizontal scrollbar */\n"
"    width: 10px; /* Set the width of the buttons in the horizontal scrollbar */\n"
"    subcontrol-position: left; /* Position the buttons on the left side of the horizontal scrollbar */\n"
"    subcontrol-origin: margin; /* Set the origin of the buttons to the margin of the scrollbar */\n"
"}"));
        textEdit_chat = new QTextEdit(tab_2);
        textEdit_chat->setObjectName(QStringLiteral("textEdit_chat"));
        textEdit_chat->setGeometry(QRect(920, 500, 941, 311));
        textEdit_chat->setStyleSheet(QLatin1String("QTextEdit {\n"
"    background-color: #f5f5f5;\n"
"    border: 1px solid #ddd;\n"
"    padding: 8px;\n"
"    font-family: \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    color: #2c3e50; /* Dark blue text color */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border-color: #3498db; /* Border color on focus */\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 1px solid #ddd;\n"
"    background: #f5f5f5;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #3498db; /* Blue color for scrollbar handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 1px solid #ddd;\n"
"    height: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: 1px solid #ddd;\n"
"    background: #f5f5f5;\n"
"    height: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #3498db; /* Blue color for sc"
                        "rollbar handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #ddd;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        pushButton_chat_employe = new QPushButton(tab_2);
        pushButton_chat_employe->setObjectName(QStringLiteral("pushButton_chat_employe"));
        pushButton_chat_employe->setGeometry(QRect(1590, 820, 51, 41));
        pushButton_chat_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../../Users/amin2/Downloads/image_processing20210912-1047-9h5uc6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chat_employe->setIcon(icon14);
        pushButton_chat_employe->setIconSize(QSize(40, 40));
        lineEdit_chat = new QLineEdit(tab_2);
        lineEdit_chat->setObjectName(QStringLiteral("lineEdit_chat"));
        lineEdit_chat->setGeometry(QRect(930, 820, 641, 41));
        QFont font3;
        lineEdit_chat->setFont(font3);
        lineEdit_chat->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}"));
        pushButton_OuvrirBlocNote_employe = new QPushButton(tab_2);
        pushButton_OuvrirBlocNote_employe->setObjectName(QStringLiteral("pushButton_OuvrirBlocNote_employe"));
        pushButton_OuvrirBlocNote_employe->setGeometry(QRect(1730, 820, 41, 41));
        pushButton_OuvrirBlocNote_employe->setAutoFillBackground(false);
        pushButton_OuvrirBlocNote_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../../Users/amin2/Downloads/notepad_edit_regular_icon_203434.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_OuvrirBlocNote_employe->setIcon(icon15);
        pushButton_OuvrirBlocNote_employe->setIconSize(QSize(40, 40));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-80, -200, 2111, 1171));
        label_2->setCursor(QCursor(Qt::CrossCursor));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Users/amin2/Downloads/385544289_2684170265070802_1348536475762940896_n.png")));
        label_2->setScaledContents(true);
        pushButton_employe_de_moit_employe = new QPushButton(tab_2);
        pushButton_employe_de_moit_employe->setObjectName(QStringLiteral("pushButton_employe_de_moit_employe"));
        pushButton_employe_de_moit_employe->setGeometry(QRect(70, 780, 341, 81));
        pushButton_employe_de_moit_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../../Users/amin2/Downloads/3712572.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_employe_de_moit_employe->setIcon(icon16);
        pushButton_employe_de_moit_employe->setIconSize(QSize(36, 36));
        mes2 = new QLabel(tab_2);
        mes2->setObjectName(QStringLiteral("mes2"));
        mes2->setGeometry(QRect(100, 850, 731, 91));
        QFont font4;
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        font4.setKerning(false);
        mes2->setFont(font4);
        mes2->setLayoutDirection(Qt::LeftToRight);
        mes2->setStyleSheet(QLatin1String("/* QLabel Text Color Animation */\n"
"\n"
"QLabel {\n"
"    font-size: 24px;\n"
"}\n"
"\n"
"@keyframes colorChange {\n"
"    0% { color: #3498db; }\n"
"    25% { color: #e74c3c; }\n"
"    50% { color: #2ecc71; }\n"
"    75% { color: #f39c12; }\n"
"    100% { color: #3498db; }\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    animation: colorChange 2s infinite;\n"
"}"));
        mes2->setTextFormat(Qt::RichText);
        mes2->setScaledContents(true);
        mes2->setWordWrap(false);
        mes2->setOpenExternalLinks(false);
        pushButton_calculer_prime_employe = new QPushButton(tab_2);
        pushButton_calculer_prime_employe->setObjectName(QStringLiteral("pushButton_calculer_prime_employe"));
        pushButton_calculer_prime_employe->setGeometry(QRect(440, 780, 331, 81));
        pushButton_calculer_prime_employe->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../../Users/amin2/Downloads/6475938.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_calculer_prime_employe->setIcon(icon17);
        pushButton_calculer_prime_employe->setIconSize(QSize(36, 36));
        pushButton_showQuestions_employe = new QPushButton(tab_2);
        pushButton_showQuestions_employe->setObjectName(QStringLiteral("pushButton_showQuestions_employe"));
        pushButton_showQuestions_employe->setGeometry(QRect(1660, 820, 61, 41));
        pushButton_showQuestions_employe->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../../Users/amin2/Downloads/2645984.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_showQuestions_employe->setIcon(icon18);
        pushButton_showQuestions_employe->setIconSize(QSize(40, 40));
        pushButton_disconnect = new QPushButton(tab_2);
        pushButton_disconnect->setObjectName(QStringLiteral("pushButton_disconnect"));
        pushButton_disconnect->setGeometry(QRect(1680, 900, 211, 51));
        pushButton_disconnect->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../../Users/amin2/Downloads/3007340.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_disconnect->setIcon(icon19);
        pushButton_disconnect->setIconSize(QSize(30, 30));
        us = new QLabel(tab_2);
        us->setObjectName(QStringLiteral("us"));
        us->setGeometry(QRect(1030, 890, 511, 51));
        us->setStyleSheet(QStringLiteral(""));
        QIcon icon20;
        icon20.addFile(QStringLiteral("../../Users/amin2/Downloads/employe.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon20, QString());
        label_2->raise();
        groupBox->raise();
        table_employe->raise();
        textEdit_chat->raise();
        pushButton_chat_employe->raise();
        lineEdit_chat->raise();
        pushButton_OuvrirBlocNote_employe->raise();
        pushButton_employe_de_moit_employe->raise();
        mes2->raise();
        pushButton_calculer_prime_employe->raise();
        pushButton_showQuestions_employe->raise();
        pushButton_disconnect->raise();
        us->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 40, 1981, 911));
        QFont font5;
        font5.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font5);
        label->setCursor(QCursor(Qt::UpArrowCursor));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Users/amin2/Downloads/385544289_2684170265070802_1348536475762940896_n.png")));
        label->setScaledContents(true);
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 60, 941, 731));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 70, 181, 51));
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 180, 201, 51));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(25, 290, 201, 51));
        label_9->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 390, 221, 51));
        label_10->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 500, 191, 51));
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 610, 171, 51));
        label_12->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #4CAF50);\n"
"    border: 2px solid #45a049;\n"
"    color: #ffffff; /* White text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #45a049);\n"
"}"));
        le_id_vehicule = new QLineEdit(groupBox_2);
        le_id_vehicule->setObjectName(QStringLiteral("le_id_vehicule"));
        le_id_vehicule->setGeometry(QRect(320, 80, 191, 31));
        le_id_vehicule->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        le_nom_beneficiaire = new QLineEdit(groupBox_2);
        le_nom_beneficiaire->setObjectName(QStringLiteral("le_nom_beneficiaire"));
        le_nom_beneficiaire->setGeometry(QRect(320, 190, 191, 31));
        le_nom_beneficiaire->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        le_type = new QLineEdit(groupBox_2);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(320, 290, 191, 31));
        le_type->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        le_model = new QLineEdit(groupBox_2);
        le_model->setObjectName(QStringLiteral("le_model"));
        le_model->setGeometry(QRect(320, 400, 191, 31));
        le_model->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        le_num_chassis = new QLineEdit(groupBox_2);
        le_num_chassis->setObjectName(QStringLiteral("le_num_chassis"));
        le_num_chassis->setGeometry(QRect(320, 510, 191, 31));
        le_num_chassis->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        le_prix_vente = new QLineEdit(groupBox_2);
        le_prix_vente->setObjectName(QStringLiteral("le_prix_vente"));
        le_prix_vente->setGeometry(QRect(320, 620, 191, 31));
        le_prix_vente->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(230, 230, 230, 255));\n"
"    border: 1px solid #aaaaaa;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    box-shadow: 0 0 5px rgba(52, 152, 219, 0.7);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666666; /* Change the color of the placeholder text */\n"
"    font-style: italic; /* Make the placeholder text italic, if desired */\n"
"}"));
        pb_ajouter_vente = new QPushButton(groupBox_2);
        pb_ajouter_vente->setObjectName(QStringLiteral("pb_ajouter_vente"));
        pb_ajouter_vente->setGeometry(QRect(670, 110, 181, 41));
        pb_ajouter_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        pb_ajouter_vente->setIcon(icon);
        pb_ajouter_vente->setIconSize(QSize(26, 26));
        stat_vente = new QPushButton(groupBox_2);
        stat_vente->setObjectName(QStringLiteral("stat_vente"));
        stat_vente->setGeometry(QRect(670, 560, 181, 41));
        stat_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        stat_vente->setIcon(icon4);
        stat_vente->setIconSize(QSize(26, 26));
        modifier_vente = new QPushButton(groupBox_2);
        modifier_vente->setObjectName(QStringLiteral("modifier_vente"));
        modifier_vente->setGeometry(QRect(670, 200, 181, 41));
        modifier_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        modifier_vente->setIcon(icon1);
        modifier_vente->setIconSize(QSize(26, 26));
        rechercher_vente = new QPushButton(groupBox_2);
        rechercher_vente->setObjectName(QStringLiteral("rechercher_vente"));
        rechercher_vente->setGeometry(QRect(670, 290, 181, 41));
        rechercher_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        rechercher_vente->setIcon(icon3);
        rechercher_vente->setIconSize(QSize(26, 26));
        tri_2_vente = new QPushButton(groupBox_2);
        tri_2_vente->setObjectName(QStringLiteral("tri_2_vente"));
        tri_2_vente->setGeometry(QRect(670, 470, 181, 41));
        tri_2_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        tri_2_vente->setIcon(icon6);
        tri_2_vente->setIconSize(QSize(26, 26));
        supprimer_vente = new QPushButton(groupBox_2);
        supprimer_vente->setObjectName(QStringLiteral("supprimer_vente"));
        supprimer_vente->setGeometry(QRect(670, 380, 181, 41));
        supprimer_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        supprimer_vente->setIcon(icon2);
        supprimer_vente->setIconSize(QSize(26, 26));
        tab_vente = new QTableView(tab_3);
        tab_vente->setObjectName(QStringLiteral("tab_vente"));
        tab_vente->setGeometry(QRect(1170, 130, 621, 301));
        tab_vente->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}\n"
"QTableView {\n"
"    background-color: #f5f5f5; /* Set the background color */\n"
"    alternate-background-color: #e0e0e0; /* Set the alternate row background color */\n"
"    selection-background-color: #a8d8ea; /* Set the selection background color */\n"
"    selection-color: #333; /* Set the selection text color */\n"
"    gridline-color: #ccc; /* Set the color of gridlines */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4CAF50; /* Set the header background color */\n"
"    color: white; /* Set the header text color */\n"
"    padding: 5px; /* Add some padding to the header */\n"
"    border: 1px solid #ddd; /* Add a border to the header */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Add some padding to the table cells */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #a8d8ea; /* Set the background color of selected cells */\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
""
                        "    background-color: #d4e9f8; /* Set the background color of cells on hover */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 1px solid #ddd; /* Add a border to the vertical scrollbar */\n"
"    background: #f5f5f5; /* Set the background color of the scrollbar */\n"
"    width: 10px; /* Set the width of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #4CAF50; /* Set the color of the handle in the vertical scrollbar */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 1px solid #ddd; /* Add a border to the buttons in the vertical scrollbar */\n"
"    height: 10px; /* Set the height of the buttons in the vertical scrollbar */\n"
"    subcontrol-position: top; /* Position the buttons at the top of the vertical scrollbar */\n"
"    subcontrol-origin: margin; /* Set the origin of the buttons to the margin of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    border: 1px solid #ddd; /* Add a border to the horizontal"
                        " scrollbar */\n"
"    background: #f5f5f5; /* Set the background color of the scrollbar */\n"
"    height: 10px; /* Set the height of the scrollbar */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #4CAF50; /* Set the color of the handle in the horizontal scrollbar */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #ddd; /* Add a border to the buttons in the horizontal scrollbar */\n"
"    width: 10px; /* Set the width of the buttons in the horizontal scrollbar */\n"
"    subcontrol-position: left; /* Position the buttons on the left side of the horizontal scrollbar */\n"
"    subcontrol-origin: margin; /* Set the origin of the buttons to the margin of the scrollbar */\n"
"}"));
        exporte_vente = new QPushButton(tab_3);
        exporte_vente->setObjectName(QStringLiteral("exporte_vente"));
        exporte_vente->setGeometry(QRect(920, 800, 71, 81));
        exporte_vente->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border:none;\n"
"	\n"
"	font: 75 28pt \"Arial\";\n"
"\n"
"}"));
        exporte_vente->setIcon(icon12);
        exporte_vente->setIconSize(QSize(80, 80));
        historique_vente = new QPushButton(tab_3);
        historique_vente->setObjectName(QStringLiteral("historique_vente"));
        historique_vente->setGeometry(QRect(1180, 590, 621, 151));
        historique_vente->setFont(font3);
        historique_vente->setCursor(QCursor(Qt::ArrowCursor));
        historique_vente->setFocusPolicy(Qt::StrongFocus);
        historique_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon21;
        icon21.addFile(QStringLiteral("../../Users/amin2/Downloads/2340272.png"), QSize(), QIcon::Normal, QIcon::Off);
        historique_vente->setIcon(icon21);
        historique_vente->setIconSize(QSize(100, 100));
        labelTime = new QLabel(tab_3);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(270, 890, 551, 41));
        arduino_2_vente = new QPushButton(tab_3);
        arduino_2_vente->setObjectName(QStringLiteral("arduino_2_vente"));
        arduino_2_vente->setGeometry(QRect(370, 810, 301, 61));
        arduino_2_vente->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        QIcon icon22;
        icon22.addFile(QStringLiteral("../../Users/amin2/Downloads/3872279.png"), QSize(), QIcon::Normal, QIcon::Off);
        arduino_2_vente->setIcon(icon22);
        arduino_2_vente->setIconSize(QSize(40, 40));
        pushButton_disconnect_2 = new QPushButton(tab_3);
        pushButton_disconnect_2->setObjectName(QStringLiteral("pushButton_disconnect_2"));
        pushButton_disconnect_2->setGeometry(QRect(1670, 870, 211, 51));
        pushButton_disconnect_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #3498db);\n"
"    border: 2px solid #2980b9;\n"
"    color: #000000; /* Black text color */\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #2980b9);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #ecf0f1, stop:1 #21618c);\n"
"    border: 2px solid #1b4f72;\n"
"}"));
        pushButton_disconnect_2->setIcon(icon19);
        pushButton_disconnect_2->setIconSize(QSize(30, 30));
        QIcon icon23;
        icon23.addFile(QStringLiteral("../../Users/amin2/Downloads/icon-5355893_960_720.webp"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon23, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(720, 190, 420, 490));
        QFont font6;
        font6.setFamily(QStringLiteral("century gothic"));
        font6.setKerning(true);
        frame->setFont(font6);
        frame->setCursor(QCursor(Qt::CrossCursor));
        frame->setStyleSheet(QLatin1String(" *{\n"
"font-family:century gothic;\n"
"font-size:24px;}\n"
"QFrame{\n"
"background : rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        label_conn_2 = new QLabel(frame);
        label_conn_2->setObjectName(QStringLiteral("label_conn_2"));
        label_conn_2->setGeometry(QRect(150, 40, 171, 101));
        label_conn_2->setStyleSheet(QLatin1String("\n"
"QLabel{\n"
"color : white;\n"
"background:transparent;}"));
        pushButton_conn_2 = new QPushButton(frame);
        pushButton_conn_2->setObjectName(QStringLiteral("pushButton_conn_2"));
        pushButton_conn_2->setGeometry(QRect(40, 420, 341, 51));
        pushButton_conn_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background: #87CEEB;\n"
"color: white;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color: #333;\n"
"border-radius:15px;\n"
"background: #49ebff;}  "));
        lineEdit_cin_login = new QLineEdit(frame);
        lineEdit_cin_login->setObjectName(QStringLiteral("lineEdit_cin_login"));
        lineEdit_cin_login->setGeometry(QRect(40, 220, 341, 31));
        lineEdit_cin_login->setStyleSheet(QLatin1String("\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072\n"
"}"));
        lineEdit_nom_login = new QLineEdit(frame);
        lineEdit_nom_login->setObjectName(QStringLiteral("lineEdit_nom_login"));
        lineEdit_nom_login->setGeometry(QRect(40, 320, 341, 31));
        lineEdit_nom_login->setStyleSheet(QLatin1String("\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072\n"
"}"));
        lineEdit_nom_login->setEchoMode(QLineEdit::Password);
        label_user_2 = new QLabel(frame);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        label_user_2->setGeometry(QRect(40, 180, 231, 21));
        label_user_2->setStyleSheet(QLatin1String("\n"
"QLabel{\n"
"color : white;\n"
"background:transparent;}"));
        label_pass_2 = new QLabel(frame);
        label_pass_2->setObjectName(QStringLiteral("label_pass_2"));
        label_pass_2->setGeometry(QRect(40, 270, 231, 41));
        label_pass_2->setStyleSheet(QLatin1String("\n"
"QLabel{\n"
"color : white;\n"
"background:transparent;}"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-4, 13, 1891, 951));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Users/amin2/Downloads/3416659.jpg")));
        label_4->setScaledContents(true);
        stackedWidget->addWidget(page_2);
        label_4->raise();
        frame->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2149, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_cin_employe->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">CIN</span></p></body></html>", Q_NULLPTR));
        label_nom->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_prenom->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_age->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">Age</span></p></body></html>", Q_NULLPTR));
        label_sante->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">Sante</span></p></body></html>", Q_NULLPTR));
        lineEdit_cin_employe->setInputMask(QString());
        lineEdit_cin_employe->setText(QString());
        lineEdit_nom_employe->setText(QString());
        lineEdit_prenom_employe->setText(QString());
        lineEdit_age_employe->setText(QString());
        lineEdit_sante_employe->setText(QString());
        pushButton_ajouter_employe->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_heure->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">HCM</span></p></body></html>", Q_NULLPTR));
        lineEdit_heure_employe->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">SEXE</span></p></body></html>", Q_NULLPTR));
        lineEdit_sexe_employe->setText(QString());
        pushButton_modifier_employe->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        pushButton_supp_employe->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        pushButton_rechercher_employe->setText(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        pushButton_statstique_employe->setText(QApplication::translate("MainWindow", "STATSTIQUE SEXE", Q_NULLPTR));
        pushButton_tri_age_employe->setText(QApplication::translate("MainWindow", "TRI AGE", Q_NULLPTR));
        pushButton_tri_id_employe->setText(QApplication::translate("MainWindow", "TRI CIN", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">JAbs</span></p></body></html>", Q_NULLPTR));
        lineEdit_Habs_employe->setText(QString());
        pushButton_age_statistique_employe->setText(QApplication::translate("MainWindow", "STATSTIQUE D'AGE", Q_NULLPTR));
        pushButton_abs_statistique_employe->setText(QApplication::translate("MainWindow", "STATSTIQUE D'ABS", Q_NULLPTR));
        pushButton_heure_statistique_employe->setText(QApplication::translate("MainWindow", "STATSTIQUE HCM", Q_NULLPTR));
        pushButton_tri_nom_employe->setText(QApplication::translate("MainWindow", "TRI NOM", Q_NULLPTR));
        pushButton_tri_prenom_employe->setText(QApplication::translate("MainWindow", "TRI PRENOM", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">RFID</span></p></body></html>", Q_NULLPTR));
        lineEdit_rfid_employe->setPlaceholderText(QString());
        pushButton_PDF_employe->setText(QString());
        pushButton_Word_employe->setText(QString());
        pushButton_chat_employe->setText(QString());
        pushButton_OuvrirBlocNote_employe->setText(QString());
        label_2->setText(QString());
        pushButton_employe_de_moit_employe->setText(QApplication::translate("MainWindow", "EMPLOYE DE MOIT", Q_NULLPTR));
        mes2->setText(QString());
        pushButton_calculer_prime_employe->setText(QApplication::translate("MainWindow", "LE PRIME DE L'EMPLOYE DE MOIT", Q_NULLPTR));
        pushButton_showQuestions_employe->setText(QString());
        pushButton_disconnect->setText(QApplication::translate("MainWindow", "DECONNECTION", Q_NULLPTR));
        us->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "EMPLOYE", Q_NULLPTR));
        label->setText(QString());
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">ID VEHICULE</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">NOM BENEFICIAIRE</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">TYPE VEHICULE</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">MODEL VEHICULE</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">NUM CHASSIS</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">PRIX EN Dn</span></p></body></html>", Q_NULLPTR));
        le_id_vehicule->setPlaceholderText(QApplication::translate("MainWindow", "ID_VEHICULE", Q_NULLPTR));
        le_nom_beneficiaire->setPlaceholderText(QApplication::translate("MainWindow", "NOM_BENEFICIAIRE", Q_NULLPTR));
        le_type->setPlaceholderText(QApplication::translate("MainWindow", "TYPE \"avendre|alouer\"", Q_NULLPTR));
        le_model->setPlaceholderText(QApplication::translate("MainWindow", "MODEL_VEHICULE", Q_NULLPTR));
        le_num_chassis->setPlaceholderText(QApplication::translate("MainWindow", "NUM_CHASSIS", Q_NULLPTR));
        le_prix_vente->setPlaceholderText(QApplication::translate("MainWindow", "PRIX EN Dn", Q_NULLPTR));
        pb_ajouter_vente->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        stat_vente->setText(QApplication::translate("MainWindow", "STATSTIQUE", Q_NULLPTR));
        modifier_vente->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        rechercher_vente->setText(QApplication::translate("MainWindow", "RECHERCHER", Q_NULLPTR));
        tri_2_vente->setText(QApplication::translate("MainWindow", "TRI ID", Q_NULLPTR));
        supprimer_vente->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        exporte_vente->setText(QString());
        historique_vente->setText(QApplication::translate("MainWindow", "HISTORIQUE", Q_NULLPTR));
        labelTime->setText(QString());
        arduino_2_vente->setText(QApplication::translate("MainWindow", "ARDUINO", Q_NULLPTR));
        pushButton_disconnect_2->setText(QApplication::translate("MainWindow", "DECONNECTION", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "VENTE", Q_NULLPTR));
        label_conn_2->setText(QApplication::translate("MainWindow", "Connexion", Q_NULLPTR));
        pushButton_conn_2->setText(QApplication::translate("MainWindow", "Connecter", Q_NULLPTR));
        lineEdit_cin_login->setText(QString());
        lineEdit_cin_login->setPlaceholderText(QApplication::translate("MainWindow", "CIN de utilisateur", Q_NULLPTR));
        lineEdit_nom_login->setText(QString());
        lineEdit_nom_login->setPlaceholderText(QApplication::translate("MainWindow", "Nom de Utilisateur", Q_NULLPTR));
        label_user_2->setText(QApplication::translate("MainWindow", "Cin", Q_NULLPTR));
        label_pass_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
