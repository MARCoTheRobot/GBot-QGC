/****************************************************************************
** Meta object code from reading C++ file 'QGeoServiceProviderPluginQGC.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGeoServiceProviderPluginQGC.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGeoServiceProviderPluginQGC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS = QtMocHelpers::stringData(
    "QGeoServiceProviderFactoryQGC"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS_t qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "QGeoServiceProviderFactoryQGC"
    },
    "QGeoServiceProviderFactoryQGC"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGeoServiceProviderFactoryQGCENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QGeoServiceProviderFactoryQGC::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGeoServiceProviderFactoryQGCENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGeoServiceProviderFactoryQGC, std::true_type>
    >,
    nullptr
} };

void QGeoServiceProviderFactoryQGC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGeoServiceProviderFactoryQGC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoServiceProviderFactoryQGC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGeoServiceProviderFactoryQGCENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGeoServiceProviderFactory"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.geoservice.serviceproviderfactory/6.0"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoServiceProviderFactoryQGC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_QGeoServiceProviderFactoryQGC[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x37,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'q',  't',  '.',  'g',  'e',  'o', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  '.', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  'p', 
    'r',  'o',  'v',  'i',  'd',  'e',  'r',  'f', 
    'a',  'c',  't',  'o',  'r',  'y',  '/',  '6', 
    '.',  '0', 
    // "className"
    0x03,  0x78,  0x1d,  'Q',  'G',  'e',  'o',  'S', 
    'e',  'r',  'v',  'i',  'c',  'e',  'P',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  'F',  'a', 
    'c',  't',  'o',  'r',  'y',  'Q',  'G',  'C', 
    // "MetaData"
    0x04,  0xa5,  0x6c,  'E',  'x',  'p',  'e',  'r', 
    'i',  'm',  'e',  'n',  't',  'a',  'l',  0xf4, 
    0x68,  'F',  'e',  'a',  't',  'u',  'r',  'e', 
    's',  0x82,  0x74,  'O',  'n',  'l',  'i',  'n', 
    'e',  'M',  'a',  'p',  'p',  'i',  'n',  'g', 
    'F',  'e',  'a',  't',  'u',  'r',  'e',  0x75, 
    'O',  'f',  'f',  'l',  'i',  'n',  'e',  'M', 
    'a',  'p',  'p',  'i',  'n',  'g',  'F',  'e', 
    'a',  't',  'u',  'r',  'e',  0x64,  'K',  'e', 
    'y',  's',  0x81,  0x68,  'q',  'g',  'c',  '-', 
    'm',  'a',  'p',  's',  0x68,  'P',  'r',  'o', 
    'v',  'i',  'd',  'e',  'r',  0x6e,  'Q',  'G', 
    'r',  'o',  'u',  'n',  'd',  'C',  'o',  'n', 
    't',  'r',  'o',  'l',  0x67,  'V',  'e',  'r', 
    's',  'i',  'o',  'n',  0x18,  0x65, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(QGeoServiceProviderFactoryQGC, QGeoServiceProviderFactoryQGC, qt_pluginMetaDataV2_QGeoServiceProviderFactoryQGC)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_QGeoServiceProviderFactoryQGC[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x37,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'q',  't',  '.',  'g',  'e',  'o', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  '.', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  'p', 
    'r',  'o',  'v',  'i',  'd',  'e',  'r',  'f', 
    'a',  'c',  't',  'o',  'r',  'y',  '/',  '6', 
    '.',  '0', 
    // "className"
    0x03,  0x78,  0x1d,  'Q',  'G',  'e',  'o',  'S', 
    'e',  'r',  'v',  'i',  'c',  'e',  'P',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  'F',  'a', 
    'c',  't',  'o',  'r',  'y',  'Q',  'G',  'C', 
    // "MetaData"
    0x04,  0xa5,  0x6c,  'E',  'x',  'p',  'e',  'r', 
    'i',  'm',  'e',  'n',  't',  'a',  'l',  0xf4, 
    0x68,  'F',  'e',  'a',  't',  'u',  'r',  'e', 
    's',  0x82,  0x74,  'O',  'n',  'l',  'i',  'n', 
    'e',  'M',  'a',  'p',  'p',  'i',  'n',  'g', 
    'F',  'e',  'a',  't',  'u',  'r',  'e',  0x75, 
    'O',  'f',  'f',  'l',  'i',  'n',  'e',  'M', 
    'a',  'p',  'p',  'i',  'n',  'g',  'F',  'e', 
    'a',  't',  'u',  'r',  'e',  0x64,  'K',  'e', 
    'y',  's',  0x81,  0x68,  'q',  'g',  'c',  '-', 
    'm',  'a',  'p',  's',  0x68,  'P',  'r',  'o', 
    'v',  'i',  'd',  'e',  'r',  0x6e,  'Q',  'G', 
    'r',  'o',  'u',  'n',  'd',  'C',  'o',  'n', 
    't',  'r',  'o',  'l',  0x67,  'V',  'e',  'r', 
    's',  'i',  'o',  'n',  0x18,  0x65, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QGeoServiceProviderFactoryQGC, QGeoServiceProviderFactoryQGC)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
