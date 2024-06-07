/****************************************************************************
** Meta object code from reading C++ file 'QGCFileDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCFileDialogController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCFileDialogController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS = QtMocHelpers::stringData(
    "QGCFileDialogController",
    "getFiles",
    "",
    "directoryPath",
    "nameFilters",
    "fullyQualifiedFilename",
    "filename",
    "fileExists",
    "deleteFile",
    "urlToLocalFile",
    "url",
    "fullFolderPathToShortMobilePath",
    "fullFolderPath"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[24];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[23];
    char stringdata6[9];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[15];
    char stringdata10[4];
    char stringdata11[32];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS_t qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QGCFileDialogController"
        QT_MOC_LITERAL(24, 8),  // "getFiles"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 13),  // "directoryPath"
        QT_MOC_LITERAL(48, 11),  // "nameFilters"
        QT_MOC_LITERAL(60, 22),  // "fullyQualifiedFilename"
        QT_MOC_LITERAL(83, 8),  // "filename"
        QT_MOC_LITERAL(92, 10),  // "fileExists"
        QT_MOC_LITERAL(103, 10),  // "deleteFile"
        QT_MOC_LITERAL(114, 14),  // "urlToLocalFile"
        QT_MOC_LITERAL(129, 3),  // "url"
        QT_MOC_LITERAL(133, 31),  // "fullFolderPathToShortMobilePath"
        QT_MOC_LITERAL(165, 14)   // "fullFolderPath"
    },
    "QGCFileDialogController",
    "getFiles",
    "",
    "directoryPath",
    "nameFilters",
    "fullyQualifiedFilename",
    "filename",
    "fileExists",
    "deleteFile",
    "urlToLocalFile",
    "url",
    "fullFolderPathToShortMobilePath",
    "fullFolderPath"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCFileDialogControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x02,    1 /* Public */,
       5,    3,   61,    2, 0x02,    4 /* Public */,
       5,    2,   68,    2, 0x22,    8 /* Public | MethodCloned */,
       7,    1,   73,    2, 0x02,   11 /* Public */,
       8,    1,   76,    2, 0x02,   13 /* Public */,
       9,    1,   79,    2, 0x02,   15 /* Public */,
      11,    1,   82,    2, 0x02,   17 /* Public */,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,    3,    6,    4,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    6,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QUrl,   10,
    QMetaType::QString, QMetaType::QString,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCFileDialogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCFileDialogControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCFileDialogController, std::true_type>,
        // method 'getFiles'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'fullyQualifiedFilename'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'fullyQualifiedFilename'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileExists'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'urlToLocalFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'fullFolderPathToShortMobilePath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QGCFileDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCFileDialogController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->getFiles((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->fullyQualifiedFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->fullyQualifiedFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->fileExists((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->deleteFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { QString _r = _t->urlToLocalFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->fullFolderPathToShortMobilePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *QGCFileDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFileDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCFileDialogControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCFileDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
