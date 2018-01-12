#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtWidgets>

class Converter {

public:
    Converter();
    QString convert(QString original_lang, QString target_lang);

private:
    QString original_str;
    QString converted_str;
};

#endif // CONVERTER_H
