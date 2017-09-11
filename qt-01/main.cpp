#include <QApplication>
#include <QMessageBox>

#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //QMessageBox::information(0, "Emscripten", "Hello World!");

    QMainWindow w;
    w.show();

    return app.exec();
}
