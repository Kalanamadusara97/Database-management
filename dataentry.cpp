#include "dataentry.h"
#include "ui_dataentry.h"
#include "qwidget.h"


DataEntry::DataEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataEntry)
{
    ui->setupUi(this);
}

DataEntry::~DataEntry()
{
    delete ui;
}

void DataEntry::on_pushButton_3_clicked()
{/*
    QPushButton* saveButton = new QPushButton("Save");
    connect(saveButton, &QPushButton::clicked, this, &QWidget::saveDataToDatabase);*/
}

