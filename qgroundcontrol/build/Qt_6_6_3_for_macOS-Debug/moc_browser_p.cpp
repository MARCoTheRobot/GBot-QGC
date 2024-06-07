/****************************************************************************
** Meta object code from reading C++ file 'browser_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/qmdnsengine/src/src/browser_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS = QtMocHelpers::stringData(
    "QMdnsEngine::BrowserPrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onShouldQuery",
    "Record",
    "record",
    "onRecordExpired",
    "onQueryTimeout",
    "onServiceTimeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[28];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[14];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[16];
    char stringdata9[15];
    char stringdata10[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS_t qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "QMdnsEngine::BrowserPrivate"
        QT_MOC_LITERAL(28, 17),  // "onMessageReceived"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 7),  // "Message"
        QT_MOC_LITERAL(55, 7),  // "message"
        QT_MOC_LITERAL(63, 13),  // "onShouldQuery"
        QT_MOC_LITERAL(77, 6),  // "Record"
        QT_MOC_LITERAL(84, 6),  // "record"
        QT_MOC_LITERAL(91, 15),  // "onRecordExpired"
        QT_MOC_LITERAL(107, 14),  // "onQueryTimeout"
        QT_MOC_LITERAL(122, 16)   // "onServiceTimeout"
    },
    "QMdnsEngine::BrowserPrivate",
    "onMessageReceived",
    "",
    "Message",
    "message",
    "onShouldQuery",
    "Record",
    "record",
    "onRecordExpired",
    "onQueryTimeout",
    "onServiceTimeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS[] = {

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
       1,    1,   44,    2, 0x08,    1 /* Private */,
       5,    1,   47,    2, 0x08,    3 /* Private */,
       8,    1,   50,    2, 0x08,    5 /* Private */,
       9,    0,   53,    2, 0x08,    7 /* Private */,
      10,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMdnsEngine::BrowserPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowserPrivate, std::true_type>,
        // method 'onMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Message &, std::false_type>,
        // method 'onShouldQuery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Record &, std::false_type>,
        // method 'onRecordExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Record &, std::false_type>,
        // method 'onQueryTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServiceTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMdnsEngine::BrowserPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMessageReceived((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 1: _t->onShouldQuery((*reinterpret_cast< std::add_pointer_t<Record>>(_a[1]))); break;
        case 2: _t->onRecordExpired((*reinterpret_cast< std::add_pointer_t<Record>>(_a[1]))); break;
        case 3: _t->onQueryTimeout(); break;
        case 4: _t->onServiceTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject *QMdnsEngine::BrowserPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdnsEngine::BrowserPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQMdnsEngineSCOPEBrowserPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMdnsEngine::BrowserPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
