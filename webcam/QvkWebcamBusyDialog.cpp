
#include "QvkWebcamBusyDialog.h"

QvkWebcamBusyDialog::QvkWebcamBusyDialog( QString webcamName, QString Device, QString Busyby )
 {
    newDialog = new QDialog;
    newDialog->setModal( true );

    Ui_WebcamBusyDialog myUiDialog;
    myUiDialog.setupUi( newDialog );
    newDialog->show();  
     
    connect( myUiDialog.buttonBox, SIGNAL( accepted() ), this, SLOT( closeDialog() ) );
    myUiDialog.label_Name_Value->setText( webcamName );
    myUiDialog.label_Device_Value->setText( Device );
    myUiDialog.label_UsedBy_Value->setText( "<html><head/><body><p><span style=\" color:#ff0000;\">" + Busyby + "</span></p></body></html>" );
}


QvkWebcamBusyDialog::~QvkWebcamBusyDialog()
{
}


void QvkWebcamBusyDialog::closeDialog()
{
  newDialog->close();   
}

