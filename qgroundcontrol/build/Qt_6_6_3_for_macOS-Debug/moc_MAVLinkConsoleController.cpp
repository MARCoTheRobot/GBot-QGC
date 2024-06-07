/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkConsoleController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkConsoleController.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkConsoleController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS = QtMocHelpers::stringData(
    "MAVLinkConsoleController",
    "QML.Element",
    "auto",
    "_setActiveVehicle",
    "",
    "Vehicle*",
    "vehicle",
    "_receiveData",
    "uint8_t",
    "device",
    "flags",
    "uint16_t",
    "timeout",
    "uint32_t",
    "baudrate",
    "data",
    "sendCommand",
    "command",
    "historyUp",
    "current",
    "historyDown",
    "handleClipboard",
    "command_pre",
    "text"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[25];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[18];
    char stringdata4[1];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[13];
    char stringdata8[8];
    char stringdata9[7];
    char stringdata10[6];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[5];
    char stringdata16[12];
    char stringdata17[8];
    char stringdata18[10];
    char stringdata19[8];
    char stringdata20[12];
    char stringdata21[16];
    char stringdata22[12];
    char stringdata23[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS_t qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "MAVLinkConsoleController"
        QT_MOC_LITERAL(25, 11),  // "QML.Element"
        QT_MOC_LITERAL(37, 4),  // "auto"
        QT_MOC_LITERAL(42, 17),  // "_setActiveVehicle"
        QT_MOC_LITERAL(60, 0),  // ""
        QT_MOC_LITERAL(61, 8),  // "Vehicle*"
        QT_MOC_LITERAL(70, 7),  // "vehicle"
        QT_MOC_LITERAL(78, 12),  // "_receiveData"
        QT_MOC_LITERAL(91, 7),  // "uint8_t"
        QT_MOC_LITERAL(99, 6),  // "device"
        QT_MOC_LITERAL(106, 5),  // "flags"
        QT_MOC_LITERAL(112, 8),  // "uint16_t"
        QT_MOC_LITERAL(121, 7),  // "timeout"
        QT_MOC_LITERAL(129, 8),  // "uint32_t"
        QT_MOC_LITERAL(138, 8),  // "baudrate"
        QT_MOC_LITERAL(147, 4),  // "data"
        QT_MOC_LITERAL(152, 11),  // "sendCommand"
        QT_MOC_LITERAL(164, 7),  // "command"
        QT_MOC_LITERAL(172, 9),  // "historyUp"
        QT_MOC_LITERAL(182, 7),  // "current"
        QT_MOC_LITERAL(190, 11),  // "historyDown"
        QT_MOC_LITERAL(202, 15),  // "handleClipboard"
        QT_MOC_LITERAL(218, 11),  // "command_pre"
        QT_MOC_LITERAL(230, 4)   // "text"
    },
    "MAVLinkConsoleController",
    "QML.Element",
    "auto",
    "_setActiveVehicle",
    "",
    "Vehicle*",
    "vehicle",
    "_receiveData",
    "uint8_t",
    "device",
    "flags",
    "uint16_t",
    "timeout",
    "uint32_t",
    "baudrate",
    "data",
    "sendCommand",
    "command",
    "historyUp",
    "current",
    "historyDown",
    "handleClipboard",
    "command_pre",
    "text"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkConsoleControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   52,    4, 0x08,    2 /* Private */,
       7,    5,   55,    4, 0x08,    4 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,   66,    4, 0x02,   10 /* Public */,
      18,    1,   69,    4, 0x02,   12 /* Public */,
      20,    1,   72,    4, 0x02,   14 /* Public */,
      21,    1,   75,    4, 0x02,   16 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QByteArray,    9,   10,   12,   14,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::QString, QMetaType::QString,   19,
    QMetaType::QString, QMetaType::QString,   19,
    QMetaType::QString, QMetaType::QString,   22,

 // properties: name, type, flags
      23, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkConsoleController::staticMetaObject = { {
    QMetaObject::SuperData::link<QStringListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkConsoleControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'text'
        QString,
        // Q_OBJECT / Q_GADGET
        MAVLinkConsoleController,
        // method '_setActiveVehicle'
        void,
        Vehicle *,
        // method '_receiveData'
        void,
        uint8_t,
        uint8_t,
        uint16_t,
        uint32_t,
        QByteArray,
        // method 'sendCommand'
        void,
        QString,
        // method 'historyUp'
        QString,
        const QString &,
        // method 'historyDown'
        QString,
        const QString &,
        // method 'handleClipboard'
        QString,
        const QString &
    >,
    nullptr
} };

void MAVLinkConsoleController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkConsoleController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_setActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 1: _t->_receiveData((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[5]))); break;
        case 2: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: { QString _r = _t->historyUp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->historyDown((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->handleClipboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkConsoleController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MAVLinkConsoleController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkConsoleController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkConsoleControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStringListModel::qt_metacast(_clname);
}

int MAVLinkConsoleController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStringListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
