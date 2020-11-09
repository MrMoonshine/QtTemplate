#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <iostream>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QImage myImage;
    myImage.load("resources/pet.png");
    QLabel pet;
    pet.setPixmap(QPixmap::fromImage(myImage));

    QWidget *myWidget = new QWidget();
    QVBoxLayout *vlay = new QVBoxLayout();

    QLabel *myLabel = new QLabel("Polyethylenterephtalate!");
    myLabel->setStyleSheet("color:yellow");

    vlay->setAlignment(Qt::AlignCenter);
    vlay->addWidget(myLabel);
    vlay->addWidget(&pet);
    std::cout << "Here 1" << std::endl;
    myWidget->setLayout(vlay);
    myWidget->show();
   
    std::cout << "Here 2" << std::endl;
    return a.exec();
}
