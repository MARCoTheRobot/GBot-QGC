/****************************************************************************
** Meta object code from reading C++ file 'LogDownloadController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/LogDownloadController.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogDownloadController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS = QtMocHelpers::stringData(
    "LogDownloadController",
    "QML.Element",
    "auto",
    "requestingListChanged",
    "",
    "downloadingLogsChanged",
    "modelChanged",
    "selectionChanged",
    "_setActiveVehicle",
    "Vehicle*",
    "vehicle",
    "_logEntry",
    "uint32_t",
    "time_utc",
    "size",
    "uint16_t",
    "id",
    "num_logs",
    "last_log_num",
    "_logData",
    "ofs",
    "uint8_t",
    "count",
    "const uint8_t*",
    "data",
    "_processDownload",
    "refresh",
    "download",
    "path",
    "eraseAll",
    "cancel",
    "model",
    "QmlObjectListModel*",
    "requestingList",
    "downloadingLogs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[22];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[22];
    char stringdata4[1];
    char stringdata5[23];
    char stringdata6[13];
    char stringdata7[17];
    char stringdata8[18];
    char stringdata9[9];
    char stringdata10[8];
    char stringdata11[10];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[5];
    char stringdata15[9];
    char stringdata16[3];
    char stringdata17[9];
    char stringdata18[13];
    char stringdata19[9];
    char stringdata20[4];
    char stringdata21[8];
    char stringdata22[6];
    char stringdata23[15];
    char stringdata24[5];
    char stringdata25[17];
    char stringdata26[8];
    char stringdata27[9];
    char stringdata28[5];
    char stringdata29[9];
    char stringdata30[7];
    char stringdata31[6];
    char stringdata32[20];
    char stringdata33[15];
    char stringdata34[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS_t qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "LogDownloadController"
        QT_MOC_LITERAL(22, 11),  // "QML.Element"
        QT_MOC_LITERAL(34, 4),  // "auto"
        QT_MOC_LITERAL(39, 21),  // "requestingListChanged"
        QT_MOC_LITERAL(61, 0),  // ""
        QT_MOC_LITERAL(62, 22),  // "downloadingLogsChanged"
        QT_MOC_LITERAL(85, 12),  // "modelChanged"
        QT_MOC_LITERAL(98, 16),  // "selectionChanged"
        QT_MOC_LITERAL(115, 17),  // "_setActiveVehicle"
        QT_MOC_LITERAL(133, 8),  // "Vehicle*"
        QT_MOC_LITERAL(142, 7),  // "vehicle"
        QT_MOC_LITERAL(150, 9),  // "_logEntry"
        QT_MOC_LITERAL(160, 8),  // "uint32_t"
        QT_MOC_LITERAL(169, 8),  // "time_utc"
        QT_MOC_LITERAL(178, 4),  // "size"
        QT_MOC_LITERAL(183, 8),  // "uint16_t"
        QT_MOC_LITERAL(192, 2),  // "id"
        QT_MOC_LITERAL(195, 8),  // "num_logs"
        QT_MOC_LITERAL(204, 12),  // "last_log_num"
        QT_MOC_LITERAL(217, 8),  // "_logData"
        QT_MOC_LITERAL(226, 3),  // "ofs"
        QT_MOC_LITERAL(230, 7),  // "uint8_t"
        QT_MOC_LITERAL(238, 5),  // "count"
        QT_MOC_LITERAL(244, 14),  // "const uint8_t*"
        QT_MOC_LITERAL(259, 4),  // "data"
        QT_MOC_LITERAL(264, 16),  // "_processDownload"
        QT_MOC_LITERAL(281, 7),  // "refresh"
        QT_MOC_LITERAL(289, 8),  // "download"
        QT_MOC_LITERAL(298, 4),  // "path"
        QT_MOC_LITERAL(303, 8),  // "eraseAll"
        QT_MOC_LITERAL(312, 6),  // "cancel"
        QT_MOC_LITERAL(319, 5),  // "model"
        QT_MOC_LITERAL(325, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(345, 14),  // "requestingList"
        QT_MOC_LITERAL(360, 15)   // "downloadingLogs"
    },
    "LogDownloadController",
    "QML.Element",
    "auto",
    "requestingListChanged",
    "",
    "downloadingLogsChanged",
    "modelChanged",
    "selectionChanged",
    "_setActiveVehicle",
    "Vehicle*",
    "vehicle",
    "_logEntry",
    "uint32_t",
    "time_utc",
    "size",
    "uint16_t",
    "id",
    "num_logs",
    "last_log_num",
    "_logData",
    "ofs",
    "uint8_t",
    "count",
    "const uint8_t*",
    "data",
    "_processDownload",
    "refresh",
    "download",
    "path",
    "eraseAll",
    "cancel",
    "model",
    "QmlObjectListModel*",
    "requestingList",
    "downloadingLogs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogDownloadControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       3,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   94,    4, 0x06,    4 /* Public */,
       5,    0,   95,    4, 0x06,    5 /* Public */,
       6,    0,   96,    4, 0x06,    6 /* Public */,
       7,    0,   97,    4, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   98,    4, 0x08,    8 /* Private */,
      11,    5,  101,    4, 0x08,   10 /* Private */,
      19,    4,  112,    4, 0x08,   16 /* Private */,
      25,    0,  121,    4, 0x08,   21 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      26,    0,  122,    4, 0x02,   22 /* Public */,
      27,    1,  123,    4, 0x02,   23 /* Public */,
      27,    0,  126,    4, 0x22,   25 /* Public | MethodCloned */,
      29,    0,  127,    4, 0x02,   26 /* Public */,
      30,    0,  128,    4, 0x02,   27 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   13,   14,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 15, 0x80000000 | 21, 0x80000000 | 23,   20,   16,   22,   24,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, 0x80000000 | 32, 0x00015009, uint(2), 0,
      33, QMetaType::Bool, 0x00015001, uint(0), 0,
      34, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogDownloadController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogDownloadControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'model'
        QmlObjectListModel*,
        // property 'requestingList'
        bool,
        // property 'downloadingLogs'
        bool,
        // Q_OBJECT / Q_GADGET
        LogDownloadController,
        // method 'requestingListChanged'
        void,
        // method 'downloadingLogsChanged'
        void,
        // method 'modelChanged'
        void,
        // method 'selectionChanged'
        void,
        // method '_setActiveVehicle'
        void,
        Vehicle *,
        // method '_logEntry'
        void,
        uint32_t,
        uint32_t,
        uint16_t,
        uint16_t,
        uint16_t,
        // method '_logData'
        void,
        uint32_t,
        uint16_t,
        uint8_t,
        const uint8_t *,
        // method '_processDownload'
        void,
        // method 'refresh'
        void,
        // method 'download'
        void,
        QString,
        // method 'download'
        void,
        // method 'eraseAll'
        void,
        // method 'cancel'
        void
    >,
    nullptr
} };

void LogDownloadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDownloadController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestingListChanged(); break;
        case 1: _t->downloadingLogsChanged(); break;
        case 2: _t->modelChanged(); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->_setActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 5: _t->_logEntry((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[5]))); break;
        case 6: _t->_logData((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<const uint8_t*>>(_a[4]))); break;
        case 7: _t->_processDownload(); break;
        case 8: _t->refresh(); break;
        case 9: _t->download((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->download(); break;
        case 11: _t->eraseAll(); break;
        case 12: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogDownloadController::*)();
            if (_t _q_method = &LogDownloadController::requestingListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogDownloadController::*)();
            if (_t _q_method = &LogDownloadController::downloadingLogsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogDownloadController::*)();
            if (_t _q_method = &LogDownloadController::modelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogDownloadController::*)();
            if (_t _q_method = &LogDownloadController::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LogDownloadController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->requestingList(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->downloadingLogs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LogDownloadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDownloadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogDownloadControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogDownloadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LogDownloadController::requestingListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LogDownloadController::downloadingLogsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogDownloadController::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogDownloadController::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
