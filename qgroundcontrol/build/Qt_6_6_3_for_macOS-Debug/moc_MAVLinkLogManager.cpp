/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkLogManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/MAVLinkLogManager.h"
#include "QmlObjectListModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkLogManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS = QtMocHelpers::stringData(
    "MAVLinkLogFiles",
    "sizeChanged",
    "",
    "selectedChanged",
    "uploadingChanged",
    "progressChanged",
    "writingChanged",
    "uploadedChanged",
    "name",
    "size",
    "selected",
    "uploading",
    "progress",
    "writing",
    "uploaded"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[15];
    char stringdata7[16];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[9];
    char stringdata11[10];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS_t qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "MAVLinkLogFiles"
        QT_MOC_LITERAL(16, 11),  // "sizeChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 15),  // "selectedChanged"
        QT_MOC_LITERAL(45, 16),  // "uploadingChanged"
        QT_MOC_LITERAL(62, 15),  // "progressChanged"
        QT_MOC_LITERAL(78, 14),  // "writingChanged"
        QT_MOC_LITERAL(93, 15),  // "uploadedChanged"
        QT_MOC_LITERAL(109, 4),  // "name"
        QT_MOC_LITERAL(114, 4),  // "size"
        QT_MOC_LITERAL(119, 8),  // "selected"
        QT_MOC_LITERAL(128, 9),  // "uploading"
        QT_MOC_LITERAL(138, 8),  // "progress"
        QT_MOC_LITERAL(147, 7),  // "writing"
        QT_MOC_LITERAL(155, 8)   // "uploaded"
    },
    "MAVLinkLogFiles",
    "sizeChanged",
    "",
    "selectedChanged",
    "uploadingChanged",
    "progressChanged",
    "writingChanged",
    "uploadedChanged",
    "name",
    "size",
    "selected",
    "uploading",
    "progress",
    "writing",
    "uploaded"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkLogFilesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    8 /* Public */,
       3,    0,   51,    2, 0x06,    9 /* Public */,
       4,    0,   52,    2, 0x06,   10 /* Public */,
       5,    0,   53,    2, 0x06,   11 /* Public */,
       6,    0,   54,    2, 0x06,   12 /* Public */,
       7,    0,   55,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00015401, uint(-1), 0,
       9, QMetaType::UInt, 0x00015001, uint(0), 0,
      10, QMetaType::Bool, 0x00015103, uint(1), 0,
      11, QMetaType::Bool, 0x00015001, uint(2), 0,
      12, QMetaType::QReal, 0x00015001, uint(3), 0,
      13, QMetaType::Bool, 0x00015001, uint(4), 0,
      14, QMetaType::Bool, 0x00015001, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkLogFiles::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkLogFilesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'uploading'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'progress'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'writing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'uploaded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MAVLinkLogFiles, std::true_type>,
        // method 'sizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'progressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MAVLinkLogFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkLogFiles *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->selectedChanged(); break;
        case 2: _t->uploadingChanged(); break;
        case 3: _t->progressChanged(); break;
        case 4: _t->writingChanged(); break;
        case 5: _t->uploadedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::sizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::uploadingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::progressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::writingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogFiles::*)();
            if (_t _q_method = &MAVLinkLogFiles::uploadedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkLogFiles *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->uploading(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->writing(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->uploaded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MAVLinkLogFiles *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *MAVLinkLogFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkLogFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkLogFilesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkLogFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkLogFiles::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkLogFiles::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkLogFiles::uploadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkLogFiles::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkLogFiles::writingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkLogFiles::uploadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS = QtMocHelpers::stringData(
    "MAVLinkLogManager",
    "emailAddressChanged",
    "",
    "descriptionChanged",
    "uploadURLChanged",
    "feedbackChanged",
    "enableAutoUploadChanged",
    "enableAutoStartChanged",
    "logFilesChanged",
    "selectedCountChanged",
    "uploadingChanged",
    "readyRead",
    "data",
    "failed",
    "succeed",
    "abortUpload",
    "logRunningChanged",
    "canStartLogChanged",
    "deleteAfterUploadChanged",
    "windSpeedChanged",
    "ratingChanged",
    "videoURLChanged",
    "publicLogChanged",
    "_uploadFinished",
    "_dataAvailable",
    "_uploadProgress",
    "bytesSent",
    "bytesTotal",
    "_activeVehicleChanged",
    "Vehicle*",
    "vehicle",
    "_mavlinkLogData",
    "uint8_t",
    "target_system",
    "target_component",
    "uint16_t",
    "sequence",
    "first_message",
    "acked",
    "_armedChanged",
    "armed",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "uploadLog",
    "deleteLog",
    "cancelUpload",
    "startLogging",
    "stopLogging",
    "emailAddress",
    "description",
    "uploadURL",
    "feedback",
    "videoURL",
    "enableAutoUpload",
    "enableAutoStart",
    "deleteAfterUpload",
    "publicLog",
    "uploading",
    "logRunning",
    "canStartLog",
    "logFiles",
    "QmlObjectListModel*",
    "windSpeed",
    "rating"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS_t {
    uint offsetsAndSizes[136];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[24];
    char stringdata7[23];
    char stringdata8[16];
    char stringdata9[21];
    char stringdata10[17];
    char stringdata11[10];
    char stringdata12[5];
    char stringdata13[7];
    char stringdata14[8];
    char stringdata15[12];
    char stringdata16[18];
    char stringdata17[19];
    char stringdata18[25];
    char stringdata19[17];
    char stringdata20[14];
    char stringdata21[16];
    char stringdata22[17];
    char stringdata23[16];
    char stringdata24[15];
    char stringdata25[16];
    char stringdata26[10];
    char stringdata27[11];
    char stringdata28[22];
    char stringdata29[9];
    char stringdata30[8];
    char stringdata31[16];
    char stringdata32[8];
    char stringdata33[14];
    char stringdata34[17];
    char stringdata35[9];
    char stringdata36[9];
    char stringdata37[14];
    char stringdata38[6];
    char stringdata39[14];
    char stringdata40[6];
    char stringdata41[18];
    char stringdata42[10];
    char stringdata43[10];
    char stringdata44[8];
    char stringdata45[7];
    char stringdata46[21];
    char stringdata47[10];
    char stringdata48[10];
    char stringdata49[13];
    char stringdata50[13];
    char stringdata51[12];
    char stringdata52[13];
    char stringdata53[12];
    char stringdata54[10];
    char stringdata55[9];
    char stringdata56[9];
    char stringdata57[17];
    char stringdata58[16];
    char stringdata59[18];
    char stringdata60[10];
    char stringdata61[10];
    char stringdata62[11];
    char stringdata63[12];
    char stringdata64[9];
    char stringdata65[20];
    char stringdata66[10];
    char stringdata67[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS_t qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "MAVLinkLogManager"
        QT_MOC_LITERAL(18, 19),  // "emailAddressChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 18),  // "descriptionChanged"
        QT_MOC_LITERAL(58, 16),  // "uploadURLChanged"
        QT_MOC_LITERAL(75, 15),  // "feedbackChanged"
        QT_MOC_LITERAL(91, 23),  // "enableAutoUploadChanged"
        QT_MOC_LITERAL(115, 22),  // "enableAutoStartChanged"
        QT_MOC_LITERAL(138, 15),  // "logFilesChanged"
        QT_MOC_LITERAL(154, 20),  // "selectedCountChanged"
        QT_MOC_LITERAL(175, 16),  // "uploadingChanged"
        QT_MOC_LITERAL(192, 9),  // "readyRead"
        QT_MOC_LITERAL(202, 4),  // "data"
        QT_MOC_LITERAL(207, 6),  // "failed"
        QT_MOC_LITERAL(214, 7),  // "succeed"
        QT_MOC_LITERAL(222, 11),  // "abortUpload"
        QT_MOC_LITERAL(234, 17),  // "logRunningChanged"
        QT_MOC_LITERAL(252, 18),  // "canStartLogChanged"
        QT_MOC_LITERAL(271, 24),  // "deleteAfterUploadChanged"
        QT_MOC_LITERAL(296, 16),  // "windSpeedChanged"
        QT_MOC_LITERAL(313, 13),  // "ratingChanged"
        QT_MOC_LITERAL(327, 15),  // "videoURLChanged"
        QT_MOC_LITERAL(343, 16),  // "publicLogChanged"
        QT_MOC_LITERAL(360, 15),  // "_uploadFinished"
        QT_MOC_LITERAL(376, 14),  // "_dataAvailable"
        QT_MOC_LITERAL(391, 15),  // "_uploadProgress"
        QT_MOC_LITERAL(407, 9),  // "bytesSent"
        QT_MOC_LITERAL(417, 10),  // "bytesTotal"
        QT_MOC_LITERAL(428, 21),  // "_activeVehicleChanged"
        QT_MOC_LITERAL(450, 8),  // "Vehicle*"
        QT_MOC_LITERAL(459, 7),  // "vehicle"
        QT_MOC_LITERAL(467, 15),  // "_mavlinkLogData"
        QT_MOC_LITERAL(483, 7),  // "uint8_t"
        QT_MOC_LITERAL(491, 13),  // "target_system"
        QT_MOC_LITERAL(505, 16),  // "target_component"
        QT_MOC_LITERAL(522, 8),  // "uint16_t"
        QT_MOC_LITERAL(531, 8),  // "sequence"
        QT_MOC_LITERAL(540, 13),  // "first_message"
        QT_MOC_LITERAL(554, 5),  // "acked"
        QT_MOC_LITERAL(560, 13),  // "_armedChanged"
        QT_MOC_LITERAL(574, 5),  // "armed"
        QT_MOC_LITERAL(580, 17),  // "_mavCommandResult"
        QT_MOC_LITERAL(598, 9),  // "vehicleId"
        QT_MOC_LITERAL(608, 9),  // "component"
        QT_MOC_LITERAL(618, 7),  // "command"
        QT_MOC_LITERAL(626, 6),  // "result"
        QT_MOC_LITERAL(633, 20),  // "noReponseFromVehicle"
        QT_MOC_LITERAL(654, 9),  // "uploadLog"
        QT_MOC_LITERAL(664, 9),  // "deleteLog"
        QT_MOC_LITERAL(674, 12),  // "cancelUpload"
        QT_MOC_LITERAL(687, 12),  // "startLogging"
        QT_MOC_LITERAL(700, 11),  // "stopLogging"
        QT_MOC_LITERAL(712, 12),  // "emailAddress"
        QT_MOC_LITERAL(725, 11),  // "description"
        QT_MOC_LITERAL(737, 9),  // "uploadURL"
        QT_MOC_LITERAL(747, 8),  // "feedback"
        QT_MOC_LITERAL(756, 8),  // "videoURL"
        QT_MOC_LITERAL(765, 16),  // "enableAutoUpload"
        QT_MOC_LITERAL(782, 15),  // "enableAutoStart"
        QT_MOC_LITERAL(798, 17),  // "deleteAfterUpload"
        QT_MOC_LITERAL(816, 9),  // "publicLog"
        QT_MOC_LITERAL(826, 9),  // "uploading"
        QT_MOC_LITERAL(836, 10),  // "logRunning"
        QT_MOC_LITERAL(847, 11),  // "canStartLog"
        QT_MOC_LITERAL(859, 8),  // "logFiles"
        QT_MOC_LITERAL(868, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(888, 9),  // "windSpeed"
        QT_MOC_LITERAL(898, 6)   // "rating"
    },
    "MAVLinkLogManager",
    "emailAddressChanged",
    "",
    "descriptionChanged",
    "uploadURLChanged",
    "feedbackChanged",
    "enableAutoUploadChanged",
    "enableAutoStartChanged",
    "logFilesChanged",
    "selectedCountChanged",
    "uploadingChanged",
    "readyRead",
    "data",
    "failed",
    "succeed",
    "abortUpload",
    "logRunningChanged",
    "canStartLogChanged",
    "deleteAfterUploadChanged",
    "windSpeedChanged",
    "ratingChanged",
    "videoURLChanged",
    "publicLogChanged",
    "_uploadFinished",
    "_dataAvailable",
    "_uploadProgress",
    "bytesSent",
    "bytesTotal",
    "_activeVehicleChanged",
    "Vehicle*",
    "vehicle",
    "_mavlinkLogData",
    "uint8_t",
    "target_system",
    "target_component",
    "uint16_t",
    "sequence",
    "first_message",
    "acked",
    "_armedChanged",
    "armed",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "uploadLog",
    "deleteLog",
    "cancelUpload",
    "startLogging",
    "stopLogging",
    "emailAddress",
    "description",
    "uploadURL",
    "feedback",
    "videoURL",
    "enableAutoUpload",
    "enableAutoStart",
    "deleteAfterUpload",
    "publicLog",
    "uploading",
    "logRunning",
    "canStartLog",
    "logFiles",
    "QmlObjectListModel*",
    "windSpeed",
    "rating"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkLogManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      15,  272, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x06,   16 /* Public */,
       3,    0,  207,    2, 0x06,   17 /* Public */,
       4,    0,  208,    2, 0x06,   18 /* Public */,
       5,    0,  209,    2, 0x06,   19 /* Public */,
       6,    0,  210,    2, 0x06,   20 /* Public */,
       7,    0,  211,    2, 0x06,   21 /* Public */,
       8,    0,  212,    2, 0x06,   22 /* Public */,
       9,    0,  213,    2, 0x06,   23 /* Public */,
      10,    0,  214,    2, 0x06,   24 /* Public */,
      11,    1,  215,    2, 0x06,   25 /* Public */,
      13,    0,  218,    2, 0x06,   27 /* Public */,
      14,    0,  219,    2, 0x06,   28 /* Public */,
      15,    0,  220,    2, 0x06,   29 /* Public */,
      16,    0,  221,    2, 0x06,   30 /* Public */,
      17,    0,  222,    2, 0x06,   31 /* Public */,
      18,    0,  223,    2, 0x06,   32 /* Public */,
      19,    0,  224,    2, 0x06,   33 /* Public */,
      20,    0,  225,    2, 0x06,   34 /* Public */,
      21,    0,  226,    2, 0x06,   35 /* Public */,
      22,    0,  227,    2, 0x06,   36 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  228,    2, 0x08,   37 /* Private */,
      24,    0,  229,    2, 0x08,   38 /* Private */,
      25,    2,  230,    2, 0x08,   39 /* Private */,
      28,    1,  235,    2, 0x08,   42 /* Private */,
      31,    7,  238,    2, 0x08,   44 /* Private */,
      39,    1,  253,    2, 0x08,   52 /* Private */,
      41,    5,  256,    2, 0x08,   54 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      47,    0,  267,    2, 0x02,   60 /* Public */,
      48,    0,  268,    2, 0x02,   61 /* Public */,
      49,    0,  269,    2, 0x02,   62 /* Public */,
      50,    0,  270,    2, 0x02,   63 /* Public */,
      51,    0,  271,    2, 0x02,   64 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 32, 0x80000000 | 32, 0x80000000 | 35, 0x80000000 | 32, QMetaType::QByteArray, QMetaType::Bool,   30,   33,   34,   36,   37,   12,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   42,   43,   44,   45,   46,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      52, QMetaType::QString, 0x00015103, uint(0), 0,
      53, QMetaType::QString, 0x00015103, uint(1), 0,
      54, QMetaType::QString, 0x00015103, uint(2), 0,
      55, QMetaType::QString, 0x00015103, uint(3), 0,
      56, QMetaType::QString, 0x00015103, uint(18), 0,
      57, QMetaType::Bool, 0x00015103, uint(4), 0,
      58, QMetaType::Bool, 0x00015103, uint(5), 0,
      59, QMetaType::Bool, 0x00015103, uint(15), 0,
      60, QMetaType::Bool, 0x00015103, uint(19), 0,
      61, QMetaType::Bool, 0x00015001, uint(8), 0,
      62, QMetaType::Bool, 0x00015001, uint(13), 0,
      63, QMetaType::Bool, 0x00015001, uint(14), 0,
      64, 0x80000000 | 65, 0x00015009, uint(6), 0,
      66, QMetaType::Int, 0x00015103, uint(16), 0,
      67, QMetaType::QString, 0x00015103, uint(17), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkLogManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkLogManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS_t,
        // property 'emailAddress'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uploadURL'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'feedback'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'videoURL'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'enableAutoUpload'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enableAutoStart'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'deleteAfterUpload'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'publicLog'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'uploading'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'logRunning'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canStartLog'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'logFiles'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'windSpeed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rating'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MAVLinkLogManager, std::true_type>,
        // method 'emailAddressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadURLChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'feedbackChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableAutoUploadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableAutoStartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logFilesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'succeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logRunningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'canStartLogChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteAfterUploadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'videoURLChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'publicLogChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_uploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_dataAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_uploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_activeVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_mavlinkLogData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_armedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_mavCommandResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'uploadLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startLogging'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopLogging'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MAVLinkLogManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkLogManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emailAddressChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->uploadURLChanged(); break;
        case 3: _t->feedbackChanged(); break;
        case 4: _t->enableAutoUploadChanged(); break;
        case 5: _t->enableAutoStartChanged(); break;
        case 6: _t->logFilesChanged(); break;
        case 7: _t->selectedCountChanged(); break;
        case 8: _t->uploadingChanged(); break;
        case 9: _t->readyRead((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->failed(); break;
        case 11: _t->succeed(); break;
        case 12: _t->abortUpload(); break;
        case 13: _t->logRunningChanged(); break;
        case 14: _t->canStartLogChanged(); break;
        case 15: _t->deleteAfterUploadChanged(); break;
        case 16: _t->windSpeedChanged(); break;
        case 17: _t->ratingChanged(); break;
        case 18: _t->videoURLChanged(); break;
        case 19: _t->publicLogChanged(); break;
        case 20: _t->_uploadFinished(); break;
        case 21: _t->_dataAvailable(); break;
        case 22: _t->_uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 23: _t->_activeVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 24: _t->_mavlinkLogData((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 25: _t->_armedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->_mavCommandResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 27: _t->uploadLog(); break;
        case 28: _t->deleteLog(); break;
        case 29: _t->cancelUpload(); break;
        case 30: _t->startLogging(); break;
        case 31: _t->stopLogging(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::emailAddressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::descriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::uploadURLChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::feedbackChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::enableAutoUploadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::enableAutoStartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::logFilesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::selectedCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::uploadingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)(QByteArray );
            if (_t _q_method = &MAVLinkLogManager::readyRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::failed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::succeed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::abortUpload; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::logRunningChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::canStartLogChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::deleteAfterUploadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::windSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::ratingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::videoURLChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MAVLinkLogManager::*)();
            if (_t _q_method = &MAVLinkLogManager::publicLogChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkLogManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->emailAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->uploadURL(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->feedback(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->videoURL(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enableAutoUpload(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableAutoStart(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->deleteAfterUpload(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->publicLog(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->uploading(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->logRunning(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->canStartLog(); break;
        case 12: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->logFiles(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->windSpeed(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->rating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MAVLinkLogManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEmailAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUploadURL(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFeedback(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setVideoURL(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setEnableAutoUpload(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setEnableAutoStart(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDeleteAfterUpload(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPublicLog(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setWindSpeed(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setRating(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MAVLinkLogManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkLogManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkLogManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MAVLinkLogManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkLogManager::emailAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkLogManager::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkLogManager::uploadURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkLogManager::feedbackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkLogManager::enableAutoUploadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkLogManager::enableAutoStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MAVLinkLogManager::logFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MAVLinkLogManager::selectedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MAVLinkLogManager::uploadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MAVLinkLogManager::readyRead(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkLogManager::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MAVLinkLogManager::succeed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MAVLinkLogManager::abortUpload()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MAVLinkLogManager::logRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MAVLinkLogManager::canStartLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MAVLinkLogManager::deleteAfterUploadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MAVLinkLogManager::windSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MAVLinkLogManager::ratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MAVLinkLogManager::videoURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MAVLinkLogManager::publicLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
