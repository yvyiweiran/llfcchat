
/**
 * @file        mainwindow.h
 * @brief       主窗口头文件
 *
 * @author      羽衣未染
 * @date        2024/06/27
 * @history
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

/**
 * @brief 主窗口类
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief       构造函数
     * @param[in]   parent 父对象指针
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
