/****************************************************************************
** Meta object code from reading C++ file 'ComponentInformationManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Components/ComponentInformationManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentInformationManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS = QtMocHelpers::stringData(
    "RequestMetaDataTypeStateMachine",
    "_ftpDownloadComplete",
    "",
    "file",
    "errorMsg",
    "_ftpDownloadProgress",
    "progress",
    "_httpDownloadComplete",
    "remoteFile",
    "localFile",
    "_downloadCompleteJsonWorker",
    "jsonFileName",
    "_downloadAndTranslationComplete",
    "translatedJsonTempFile"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[32];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[21];
    char stringdata6[9];
    char stringdata7[22];
    char stringdata8[11];
    char stringdata9[10];
    char stringdata10[28];
    char stringdata11[13];
    char stringdata12[32];
    char stringdata13[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS_t qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "RequestMetaDataTypeStateMachine"
        QT_MOC_LITERAL(32, 20),  // "_ftpDownloadComplete"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 4),  // "file"
        QT_MOC_LITERAL(59, 8),  // "errorMsg"
        QT_MOC_LITERAL(68, 20),  // "_ftpDownloadProgress"
        QT_MOC_LITERAL(89, 8),  // "progress"
        QT_MOC_LITERAL(98, 21),  // "_httpDownloadComplete"
        QT_MOC_LITERAL(120, 10),  // "remoteFile"
        QT_MOC_LITERAL(131, 9),  // "localFile"
        QT_MOC_LITERAL(141, 27),  // "_downloadCompleteJsonWorker"
        QT_MOC_LITERAL(169, 12),  // "jsonFileName"
        QT_MOC_LITERAL(182, 31),  // "_downloadAndTranslationComplete"
        QT_MOC_LITERAL(214, 22)   // "translatedJsonTempFile"
    },
    "RequestMetaDataTypeStateMachine",
    "_ftpDownloadComplete",
    "",
    "file",
    "errorMsg",
    "_ftpDownloadProgress",
    "progress",
    "_httpDownloadComplete",
    "remoteFile",
    "localFile",
    "_downloadCompleteJsonWorker",
    "jsonFileName",
    "_downloadAndTranslationComplete",
    "translatedJsonTempFile"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRequestMetaDataTypeStateMachineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       5,    1,   49,    2, 0x08,    4 /* Private */,
       7,    3,   52,    2, 0x08,    6 /* Private */,
      10,    1,   59,    2, 0x08,   10 /* Private */,
      12,    2,   62,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,    4,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject RequestMetaDataTypeStateMachine::staticMetaObject = { {
    QMetaObject::SuperData::link<StateMachine::staticMetaObject>(),
    qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRequestMetaDataTypeStateMachineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RequestMetaDataTypeStateMachine, std::true_type>,
        // method '_ftpDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_ftpDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method '_httpDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_downloadCompleteJsonWorker'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_downloadAndTranslationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void RequestMetaDataTypeStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestMetaDataTypeStateMachine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_ftpDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->_ftpDownloadProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->_httpDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: { QString _r = _t->_downloadCompleteJsonWorker((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->_downloadAndTranslationComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *RequestMetaDataTypeStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestMetaDataTypeStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRequestMetaDataTypeStateMachineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return StateMachine::qt_metacast(_clname);
}

int RequestMetaDataTypeStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS = QtMocHelpers::stringData(
    "ComponentInformationManager",
    "progressUpdate",
    "",
    "progress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[28];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS_t qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "ComponentInformationManager"
        QT_MOC_LITERAL(28, 14),  // "progressUpdate"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 8)   // "progress"
    },
    "ComponentInformationManager",
    "progressUpdate",
    "",
    "progress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSComponentInformationManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject ComponentInformationManager::staticMetaObject = { {
    QMetaObject::SuperData::link<StateMachine::staticMetaObject>(),
    qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSComponentInformationManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ComponentInformationManager, std::true_type>,
        // method 'progressUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void ComponentInformationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentInformationManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentInformationManager::*)(float );
            if (_t _q_method = &ComponentInformationManager::progressUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ComponentInformationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComponentInformationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSComponentInformationManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return StateMachine::qt_metacast(_clname);
}

int ComponentInformationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ComponentInformationManager::progressUpdate(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
