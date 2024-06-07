/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwareUpgradeThread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/PX4FirmwareUpgradeThread.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwareUpgradeThread.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS = QtMocHelpers::stringData(
    "PX4FirmwareUpgradeThreadWorker",
    "updateProgress",
    "",
    "curr",
    "total",
    "foundBoard",
    "firstAttempt",
    "QGCSerialPortInfo",
    "portInfo",
    "type",
    "boardName",
    "noBoardFound",
    "boardGone",
    "foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "error",
    "errorString",
    "status",
    "statusText",
    "eraseStarted",
    "eraseComplete",
    "flashComplete",
    "_init",
    "_startFindBoardLoop",
    "_reboot",
    "_flash",
    "_findBoardOnce",
    "_updateProgress",
    "_cancel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[31];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[18];
    char stringdata8[9];
    char stringdata9[5];
    char stringdata10[10];
    char stringdata11[13];
    char stringdata12[10];
    char stringdata13[15];
    char stringdata14[18];
    char stringdata15[8];
    char stringdata16[10];
    char stringdata17[6];
    char stringdata18[12];
    char stringdata19[7];
    char stringdata20[11];
    char stringdata21[13];
    char stringdata22[14];
    char stringdata23[14];
    char stringdata24[6];
    char stringdata25[20];
    char stringdata26[8];
    char stringdata27[7];
    char stringdata28[15];
    char stringdata29[16];
    char stringdata30[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS_t qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "PX4FirmwareUpgradeThreadWorker"
        QT_MOC_LITERAL(31, 14),  // "updateProgress"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 4),  // "curr"
        QT_MOC_LITERAL(52, 5),  // "total"
        QT_MOC_LITERAL(58, 10),  // "foundBoard"
        QT_MOC_LITERAL(69, 12),  // "firstAttempt"
        QT_MOC_LITERAL(82, 17),  // "QGCSerialPortInfo"
        QT_MOC_LITERAL(100, 8),  // "portInfo"
        QT_MOC_LITERAL(109, 4),  // "type"
        QT_MOC_LITERAL(114, 9),  // "boardName"
        QT_MOC_LITERAL(124, 12),  // "noBoardFound"
        QT_MOC_LITERAL(137, 9),  // "boardGone"
        QT_MOC_LITERAL(147, 14),  // "foundBoardInfo"
        QT_MOC_LITERAL(162, 17),  // "bootloaderVersion"
        QT_MOC_LITERAL(180, 7),  // "boardID"
        QT_MOC_LITERAL(188, 9),  // "flashSize"
        QT_MOC_LITERAL(198, 5),  // "error"
        QT_MOC_LITERAL(204, 11),  // "errorString"
        QT_MOC_LITERAL(216, 6),  // "status"
        QT_MOC_LITERAL(223, 10),  // "statusText"
        QT_MOC_LITERAL(234, 12),  // "eraseStarted"
        QT_MOC_LITERAL(247, 13),  // "eraseComplete"
        QT_MOC_LITERAL(261, 13),  // "flashComplete"
        QT_MOC_LITERAL(275, 5),  // "_init"
        QT_MOC_LITERAL(281, 19),  // "_startFindBoardLoop"
        QT_MOC_LITERAL(301, 7),  // "_reboot"
        QT_MOC_LITERAL(309, 6),  // "_flash"
        QT_MOC_LITERAL(316, 14),  // "_findBoardOnce"
        QT_MOC_LITERAL(331, 15),  // "_updateProgress"
        QT_MOC_LITERAL(347, 7)   // "_cancel"
    },
    "PX4FirmwareUpgradeThreadWorker",
    "updateProgress",
    "",
    "curr",
    "total",
    "foundBoard",
    "firstAttempt",
    "QGCSerialPortInfo",
    "portInfo",
    "type",
    "boardName",
    "noBoardFound",
    "boardGone",
    "foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "error",
    "errorString",
    "status",
    "statusText",
    "eraseStarted",
    "eraseComplete",
    "flashComplete",
    "_init",
    "_startFindBoardLoop",
    "_reboot",
    "_flash",
    "_findBoardOnce",
    "_updateProgress",
    "_cancel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  116,    2, 0x06,    1 /* Public */,
       5,    4,  121,    2, 0x06,    4 /* Public */,
      11,    0,  130,    2, 0x06,    9 /* Public */,
      12,    0,  131,    2, 0x06,   10 /* Public */,
      13,    3,  132,    2, 0x06,   11 /* Public */,
      17,    1,  139,    2, 0x06,   15 /* Public */,
      19,    1,  142,    2, 0x06,   17 /* Public */,
      21,    0,  145,    2, 0x06,   19 /* Public */,
      22,    0,  146,    2, 0x06,   20 /* Public */,
      23,    0,  147,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  148,    2, 0x08,   22 /* Private */,
      25,    0,  149,    2, 0x08,   23 /* Private */,
      26,    0,  150,    2, 0x08,   24 /* Private */,
      27,    0,  151,    2, 0x08,   25 /* Private */,
      28,    0,  152,    2, 0x08,   26 /* Private */,
      29,    2,  153,    2, 0x08,   27 /* Private */,
      30,    0,  158,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7, QMetaType::Int, QMetaType::QString,    6,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PX4FirmwareUpgradeThreadWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4FirmwareUpgradeThreadWorker, std::true_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'foundBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGCSerialPortInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'noBoardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boardGone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'foundBoardInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'eraseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eraseComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_startFindBoardLoop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_reboot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_flash'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_findBoardOnce'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PX4FirmwareUpgradeThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4FirmwareUpgradeThreadWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->foundBoard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGCSerialPortInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 2: _t->noBoardFound(); break;
        case 3: _t->boardGone(); break;
        case 4: _t->foundBoardInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->eraseStarted(); break;
        case 8: _t->eraseComplete(); break;
        case 9: _t->flashComplete(); break;
        case 10: _t->_init(); break;
        case 11: _t->_startFindBoardLoop(); break;
        case 12: _t->_reboot(); break;
        case 13: _t->_flash(); break;
        case 14: _t->_findBoardOnce(); break;
        case 15: _t->_updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 16: _t->_cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(int , int );
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::updateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(bool , const QGCSerialPortInfo & , int , QString );
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::foundBoard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::noBoardFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::boardGone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(int , int , int );
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::foundBoardInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(const QString & );
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(const QString & );
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::status; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::eraseStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::eraseComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadWorker::flashComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *PX4FirmwareUpgradeThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadWorkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadWorker::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadWorker::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadWorker::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadWorker::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadWorker::foundBoardInfo(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadWorker::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadWorker::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadWorker::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadWorker::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadWorker::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS = QtMocHelpers::stringData(
    "PX4FirmwareUpgradeThreadController",
    "foundBoard",
    "",
    "firstAttempt",
    "QGCSerialPortInfo",
    "portInfo",
    "boardType",
    "boardName",
    "noBoardFound",
    "boardGone",
    "foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "error",
    "errorString",
    "status",
    "eraseStarted",
    "eraseComplete",
    "flashComplete",
    "updateProgress",
    "curr",
    "total",
    "_initThreadWorker",
    "_startFindBoardLoopOnThread",
    "_rebootOnThread",
    "_flashOnThread",
    "_cancel",
    "_foundBoard",
    "type",
    "name",
    "_noBoardFound",
    "_boardGone",
    "_foundBoardInfo",
    "_error",
    "_status",
    "statusText",
    "_eraseStarted",
    "_eraseComplete",
    "_flashComplete"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS_t {
    uint offsetsAndSizes[80];
    char stringdata0[35];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[18];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[13];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[18];
    char stringdata12[8];
    char stringdata13[10];
    char stringdata14[6];
    char stringdata15[12];
    char stringdata16[7];
    char stringdata17[13];
    char stringdata18[14];
    char stringdata19[14];
    char stringdata20[15];
    char stringdata21[5];
    char stringdata22[6];
    char stringdata23[18];
    char stringdata24[28];
    char stringdata25[16];
    char stringdata26[15];
    char stringdata27[8];
    char stringdata28[12];
    char stringdata29[5];
    char stringdata30[5];
    char stringdata31[14];
    char stringdata32[11];
    char stringdata33[16];
    char stringdata34[7];
    char stringdata35[8];
    char stringdata36[11];
    char stringdata37[14];
    char stringdata38[15];
    char stringdata39[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS_t qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 34),  // "PX4FirmwareUpgradeThreadContr..."
        QT_MOC_LITERAL(35, 10),  // "foundBoard"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 12),  // "firstAttempt"
        QT_MOC_LITERAL(60, 17),  // "QGCSerialPortInfo"
        QT_MOC_LITERAL(78, 8),  // "portInfo"
        QT_MOC_LITERAL(87, 9),  // "boardType"
        QT_MOC_LITERAL(97, 9),  // "boardName"
        QT_MOC_LITERAL(107, 12),  // "noBoardFound"
        QT_MOC_LITERAL(120, 9),  // "boardGone"
        QT_MOC_LITERAL(130, 14),  // "foundBoardInfo"
        QT_MOC_LITERAL(145, 17),  // "bootloaderVersion"
        QT_MOC_LITERAL(163, 7),  // "boardID"
        QT_MOC_LITERAL(171, 9),  // "flashSize"
        QT_MOC_LITERAL(181, 5),  // "error"
        QT_MOC_LITERAL(187, 11),  // "errorString"
        QT_MOC_LITERAL(199, 6),  // "status"
        QT_MOC_LITERAL(206, 12),  // "eraseStarted"
        QT_MOC_LITERAL(219, 13),  // "eraseComplete"
        QT_MOC_LITERAL(233, 13),  // "flashComplete"
        QT_MOC_LITERAL(247, 14),  // "updateProgress"
        QT_MOC_LITERAL(262, 4),  // "curr"
        QT_MOC_LITERAL(267, 5),  // "total"
        QT_MOC_LITERAL(273, 17),  // "_initThreadWorker"
        QT_MOC_LITERAL(291, 27),  // "_startFindBoardLoopOnThread"
        QT_MOC_LITERAL(319, 15),  // "_rebootOnThread"
        QT_MOC_LITERAL(335, 14),  // "_flashOnThread"
        QT_MOC_LITERAL(350, 7),  // "_cancel"
        QT_MOC_LITERAL(358, 11),  // "_foundBoard"
        QT_MOC_LITERAL(370, 4),  // "type"
        QT_MOC_LITERAL(375, 4),  // "name"
        QT_MOC_LITERAL(380, 13),  // "_noBoardFound"
        QT_MOC_LITERAL(394, 10),  // "_boardGone"
        QT_MOC_LITERAL(405, 15),  // "_foundBoardInfo"
        QT_MOC_LITERAL(421, 6),  // "_error"
        QT_MOC_LITERAL(428, 7),  // "_status"
        QT_MOC_LITERAL(436, 10),  // "statusText"
        QT_MOC_LITERAL(447, 13),  // "_eraseStarted"
        QT_MOC_LITERAL(461, 14),  // "_eraseComplete"
        QT_MOC_LITERAL(476, 14)   // "_flashComplete"
    },
    "PX4FirmwareUpgradeThreadController",
    "foundBoard",
    "",
    "firstAttempt",
    "QGCSerialPortInfo",
    "portInfo",
    "boardType",
    "boardName",
    "noBoardFound",
    "boardGone",
    "foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "error",
    "errorString",
    "status",
    "eraseStarted",
    "eraseComplete",
    "flashComplete",
    "updateProgress",
    "curr",
    "total",
    "_initThreadWorker",
    "_startFindBoardLoopOnThread",
    "_rebootOnThread",
    "_flashOnThread",
    "_cancel",
    "_foundBoard",
    "type",
    "name",
    "_noBoardFound",
    "_boardGone",
    "_foundBoardInfo",
    "_error",
    "_status",
    "statusText",
    "_eraseStarted",
    "_eraseComplete",
    "_flashComplete"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,  158,    2, 0x06,    1 /* Public */,
       8,    0,  167,    2, 0x06,    6 /* Public */,
       9,    0,  168,    2, 0x06,    7 /* Public */,
      10,    3,  169,    2, 0x06,    8 /* Public */,
      14,    1,  176,    2, 0x06,   12 /* Public */,
      16,    1,  179,    2, 0x06,   14 /* Public */,
      17,    0,  182,    2, 0x06,   16 /* Public */,
      18,    0,  183,    2, 0x06,   17 /* Public */,
      19,    0,  184,    2, 0x06,   18 /* Public */,
      20,    2,  185,    2, 0x06,   19 /* Public */,
      23,    0,  190,    2, 0x06,   22 /* Public */,
      24,    0,  191,    2, 0x06,   23 /* Public */,
      25,    0,  192,    2, 0x06,   24 /* Public */,
      26,    0,  193,    2, 0x06,   25 /* Public */,
      27,    0,  194,    2, 0x06,   26 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    4,  195,    2, 0x08,   27 /* Private */,
      31,    0,  204,    2, 0x08,   32 /* Private */,
      32,    0,  205,    2, 0x08,   33 /* Private */,
      33,    3,  206,    2, 0x08,   34 /* Private */,
      34,    1,  213,    2, 0x08,   38 /* Private */,
      35,    1,  216,    2, 0x08,   40 /* Private */,
      37,    0,  219,    2, 0x08,   42 /* Private */,
      38,    0,  220,    2, 0x08,   43 /* Private */,
      39,    0,  221,    2, 0x08,   44 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PX4FirmwareUpgradeThreadController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4FirmwareUpgradeThreadController, std::true_type>,
        // method 'foundBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGCSerialPortInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'noBoardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boardGone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'foundBoardInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'eraseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eraseComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_initThreadWorker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_startFindBoardLoopOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rebootOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_flashOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_foundBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGCSerialPortInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_noBoardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_boardGone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_foundBoardInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_eraseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_eraseComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_flashComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PX4FirmwareUpgradeThreadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4FirmwareUpgradeThreadController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foundBoard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGCSerialPortInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->noBoardFound(); break;
        case 2: _t->boardGone(); break;
        case 3: _t->foundBoardInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->eraseStarted(); break;
        case 7: _t->eraseComplete(); break;
        case 8: _t->flashComplete(); break;
        case 9: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->_initThreadWorker(); break;
        case 11: _t->_startFindBoardLoopOnThread(); break;
        case 12: _t->_rebootOnThread(); break;
        case 13: _t->_flashOnThread(); break;
        case 14: _t->_cancel(); break;
        case 15: _t->_foundBoard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGCSerialPortInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 16: _t->_noBoardFound(); break;
        case 17: _t->_boardGone(); break;
        case 18: _t->_foundBoardInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 19: _t->_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->_status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->_eraseStarted(); break;
        case 22: _t->_eraseComplete(); break;
        case 23: _t->_flashComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(bool , const QGCSerialPortInfo & , int , QString );
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::foundBoard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::noBoardFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::boardGone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(int , int , int );
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::foundBoardInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(const QString & );
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(const QString & );
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::status; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::eraseStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::eraseComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::flashComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(int , int );
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::updateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::_initThreadWorker; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::_rebootOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::_flashOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (_t _q_method = &PX4FirmwareUpgradeThreadController::_cancel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject *PX4FirmwareUpgradeThreadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4FirmwareUpgradeThreadControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadController::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadController::foundBoardInfo(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadController::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadController::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadController::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadController::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadController::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PX4FirmwareUpgradeThreadController::_initThreadWorker()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PX4FirmwareUpgradeThreadController::_rebootOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PX4FirmwareUpgradeThreadController::_flashOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PX4FirmwareUpgradeThreadController::_cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
