#ifndef I18N_H
#define I18N_H

#include <QDebug>
#include <QDir>
#include <QTranslator>
class I18n {
public:
    I18n();
    bool load(const QString& defaultLang);
    bool languageMatch(const QString& lang, const QString& country);
    QTranslator& getTranslator();
    QString locale;

protected:
    QTranslator translator;
};

#endif // I18N_H
