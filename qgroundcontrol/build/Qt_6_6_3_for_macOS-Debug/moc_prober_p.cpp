/****************************************************************************
** Meta object code from reading C++ file 'prober_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/qmdnsengine/src/src/prober_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prober_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS = QtMocHelpers::stringData(
    "QMdnsEngine::ProberPrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onTimeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[27];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS_t qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QMdnsEngine::ProberPrivate"
        QT_MOC_LITERAL(27, 17),  // "onMessageReceived"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 7),  // "Message"
        QT_MOC_LITERAL(54, 7),  // "message"
        QT_MOC_LITERAL(62, 9)   // "onTimeout"
    },
    "QMdnsEngine::ProberPrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onTimeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    0,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMdnsEngine::ProberPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProberPrivate, std::true_type>,
        // method 'onMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Message &, std::false_type>,
        // method 'onTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMdnsEngine::ProberPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProberPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMessageReceived((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 1: _t->onTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject *QMdnsEngine::ProberPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdnsEngine::ProberPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMdnsEngineSCOPEProberPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMdnsEngine::ProberPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
