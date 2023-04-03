#include <QtWidgets>

class MainWindow : public QMainWindow {
    public:
        MainWindow();
    private:
        QLabel *textLabel1;
        QLabel *textLabel2;
        int redColor;
        int greenColor;
};

MainWindow::MainWindow() {
    resize(900,500);
    setWindowTitle("Main win v6.1");
    textLabel1 = new QLabel(this);
    textLabel1->setText("Text QLabel");
    QFont fontLabel("Time", 32, QFont::Bold);
    textLabel1->setFont(fontLabel);
    textLabel1->setGeometry(0, 0, 800, 300);
    textLabel2 = new QLabel(this);
    textLabel2->setText("Text QLabel");
    textLabel2->setFont(fontLabel);
    textLabel2->setGeometry(0, 300, 800, 300);
    redColor = 255;
    greenColor = 127;
    QString strRedColor = QString::number(redColor);
    textLabel1->setText(strRedColor);
    QString strGreenColor = QString::number(greenColor);
    textLabel2->setText(strGreenColor);
}
int main (int argc, char *argv[]) {
    QApplication app (argc, argv);
    MainWindow *mainWin;
    mainWin = new MainWindow(); 
    mainWin->show();
    return app.exec();
}
