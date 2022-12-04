#pragma ones

#include <QMainWindow>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void on_pushButton_clicked();

    void problemProperties ();

    void hideMoreParams();

    double ctx[3];

private slots:
    void on_problemSt_activated(int index);

    void on_equationSt_activated(int index);

    void valumeCase();

    void temperatureCase();

    void pressureCase();

    void on_inputParam1_returnPressed();

    void on_inputParam2_returnPressed();

    void on_inputMu_returnPressed();

private:
    Ui::MainWindow *ui;
};
