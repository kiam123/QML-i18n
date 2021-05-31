#include "i18n.h"

I18n::I18n()
{
    locale = "en";
    translator.load(":/translations/" + locale + ".qm");
}

bool I18n::load(const QString& defaultLang)
{
    QString lang = defaultLang.split("_")[0];
    QString country = defaultLang.split("_")[1];

    return languageMatch(lang, country);
}

bool I18n::languageMatch(const QString& lang, const QString& country)
{
    if (lang == "zh" && country == "TW") {
        locale = "zh_TW";
    } else if (lang == "zh" && country == "CN") {
        locale = "zh_CN";
    } else if (lang == "ja") {
        locale = "ja";
    } else if (lang == "de") {
        locale = "de";
    } else if (lang == "ko") {
        locale = "ko";
    } else if (lang == "ru") {
        locale = "ru";
    } else if (lang == "fr") {
        locale = "fr";
    } else if (lang == "es") {
        locale = "es";
    } else if (lang == "pt") {
        locale = "pt";
    } else if (lang == "it") {
        locale = "it";
    } else if (lang == "tr") {
        locale = "tr";
    } else if (lang == "pl") {
        locale = "pl";
    }

    return translator.load(":/translations/" + locale + ".qm");
}

QTranslator& I18n::getTranslator()
{
    return translator;
}
