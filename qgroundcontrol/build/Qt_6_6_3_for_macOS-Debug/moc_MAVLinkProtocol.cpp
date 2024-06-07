/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Comms/MAVLinkProtocol.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS = QtMocHelpers::stringData(
    "MAVLinkProtocol",
    "vehicleHeartbeatInfo",
    "",
    "LinkInterface*",
    "link",
    "vehicleId",
    "componentId",
    "vehicleFirmwareType",
    "vehicleType",
    "messageReceived",
    "mavlink_message_t",
    "message",
    "versionCheckChanged",
    "enabled",
    "protocolStatusMessage",
    "title",
    "systemIdChanged",
    "systemId",
    "mavlinkMessageStatus",
    "uasId",
    "uint64_t",
    "totalSent",
    "totalReceived",
    "totalLoss",
    "lossPercent",
    "radioStatusChanged",
    "rxerrors",
    "fixed",
    "rssi",
    "remrssi",
    "txbuf",
    "noise",
    "remnoise",
    "saveTelemetryLog",
    "tempLogfile",
    "checkTelemetrySavePath",
    "receiveBytes",
    "b",
    "logSentBytes",
    "setSystemId",
    "id",
    "enableVersionCheck",
    "loadSettings",
    "storeSettings",
    "deleteTempLogFiles",
    "checkForLostLogFiles",
    "_vehicleCountChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[10];
    char stringdata6[12];
    char stringdata7[20];
    char stringdata8[12];
    char stringdata9[16];
    char stringdata10[18];
    char stringdata11[8];
    char stringdata12[20];
    char stringdata13[8];
    char stringdata14[22];
    char stringdata15[6];
    char stringdata16[16];
    char stringdata17[9];
    char stringdata18[21];
    char stringdata19[6];
    char stringdata20[9];
    char stringdata21[10];
    char stringdata22[14];
    char stringdata23[10];
    char stringdata24[12];
    char stringdata25[19];
    char stringdata26[9];
    char stringdata27[6];
    char stringdata28[5];
    char stringdata29[8];
    char stringdata30[6];
    char stringdata31[6];
    char stringdata32[9];
    char stringdata33[17];
    char stringdata34[12];
    char stringdata35[23];
    char stringdata36[13];
    char stringdata37[2];
    char stringdata38[13];
    char stringdata39[12];
    char stringdata40[3];
    char stringdata41[19];
    char stringdata42[13];
    char stringdata43[14];
    char stringdata44[19];
    char stringdata45[21];
    char stringdata46[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS_t qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "MAVLinkProtocol"
        QT_MOC_LITERAL(16, 20),  // "vehicleHeartbeatInfo"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(53, 4),  // "link"
        QT_MOC_LITERAL(58, 9),  // "vehicleId"
        QT_MOC_LITERAL(68, 11),  // "componentId"
        QT_MOC_LITERAL(80, 19),  // "vehicleFirmwareType"
        QT_MOC_LITERAL(100, 11),  // "vehicleType"
        QT_MOC_LITERAL(112, 15),  // "messageReceived"
        QT_MOC_LITERAL(128, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(146, 7),  // "message"
        QT_MOC_LITERAL(154, 19),  // "versionCheckChanged"
        QT_MOC_LITERAL(174, 7),  // "enabled"
        QT_MOC_LITERAL(182, 21),  // "protocolStatusMessage"
        QT_MOC_LITERAL(204, 5),  // "title"
        QT_MOC_LITERAL(210, 15),  // "systemIdChanged"
        QT_MOC_LITERAL(226, 8),  // "systemId"
        QT_MOC_LITERAL(235, 20),  // "mavlinkMessageStatus"
        QT_MOC_LITERAL(256, 5),  // "uasId"
        QT_MOC_LITERAL(262, 8),  // "uint64_t"
        QT_MOC_LITERAL(271, 9),  // "totalSent"
        QT_MOC_LITERAL(281, 13),  // "totalReceived"
        QT_MOC_LITERAL(295, 9),  // "totalLoss"
        QT_MOC_LITERAL(305, 11),  // "lossPercent"
        QT_MOC_LITERAL(317, 18),  // "radioStatusChanged"
        QT_MOC_LITERAL(336, 8),  // "rxerrors"
        QT_MOC_LITERAL(345, 5),  // "fixed"
        QT_MOC_LITERAL(351, 4),  // "rssi"
        QT_MOC_LITERAL(356, 7),  // "remrssi"
        QT_MOC_LITERAL(364, 5),  // "txbuf"
        QT_MOC_LITERAL(370, 5),  // "noise"
        QT_MOC_LITERAL(376, 8),  // "remnoise"
        QT_MOC_LITERAL(385, 16),  // "saveTelemetryLog"
        QT_MOC_LITERAL(402, 11),  // "tempLogfile"
        QT_MOC_LITERAL(414, 22),  // "checkTelemetrySavePath"
        QT_MOC_LITERAL(437, 12),  // "receiveBytes"
        QT_MOC_LITERAL(450, 1),  // "b"
        QT_MOC_LITERAL(452, 12),  // "logSentBytes"
        QT_MOC_LITERAL(465, 11),  // "setSystemId"
        QT_MOC_LITERAL(477, 2),  // "id"
        QT_MOC_LITERAL(480, 18),  // "enableVersionCheck"
        QT_MOC_LITERAL(499, 12),  // "loadSettings"
        QT_MOC_LITERAL(512, 13),  // "storeSettings"
        QT_MOC_LITERAL(526, 18),  // "deleteTempLogFiles"
        QT_MOC_LITERAL(545, 20),  // "checkForLostLogFiles"
        QT_MOC_LITERAL(566, 20)   // "_vehicleCountChanged"
    },
    "MAVLinkProtocol",
    "vehicleHeartbeatInfo",
    "",
    "LinkInterface*",
    "link",
    "vehicleId",
    "componentId",
    "vehicleFirmwareType",
    "vehicleType",
    "messageReceived",
    "mavlink_message_t",
    "message",
    "versionCheckChanged",
    "enabled",
    "protocolStatusMessage",
    "title",
    "systemIdChanged",
    "systemId",
    "mavlinkMessageStatus",
    "uasId",
    "uint64_t",
    "totalSent",
    "totalReceived",
    "totalLoss",
    "lossPercent",
    "radioStatusChanged",
    "rxerrors",
    "fixed",
    "rssi",
    "remrssi",
    "txbuf",
    "noise",
    "remnoise",
    "saveTelemetryLog",
    "tempLogfile",
    "checkTelemetrySavePath",
    "receiveBytes",
    "b",
    "logSentBytes",
    "setSystemId",
    "id",
    "enableVersionCheck",
    "loadSettings",
    "storeSettings",
    "deleteTempLogFiles",
    "checkForLostLogFiles",
    "_vehicleCountChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkProtocolENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,  122,    2, 0x06,    1 /* Public */,
       9,    2,  133,    2, 0x06,    7 /* Public */,
      12,    1,  138,    2, 0x06,   10 /* Public */,
      14,    2,  141,    2, 0x06,   12 /* Public */,
      16,    1,  146,    2, 0x06,   15 /* Public */,
      18,    5,  149,    2, 0x06,   17 /* Public */,
      25,    8,  160,    2, 0x06,   23 /* Public */,
      33,    1,  177,    2, 0x06,   32 /* Public */,
      35,    0,  180,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      36,    2,  181,    2, 0x0a,   35 /* Public */,
      38,    2,  186,    2, 0x0a,   38 /* Public */,
      39,    1,  191,    2, 0x0a,   41 /* Public */,
      41,    1,  194,    2, 0x0a,   43 /* Public */,
      42,    0,  197,    2, 0x0a,   45 /* Public */,
      43,    0,  198,    2, 0x0a,   46 /* Public */,
      44,    0,  199,    2, 0x0a,   47 /* Public */,
      45,    0,  200,    2, 0x0a,   48 /* Public */,
      46,    0,  201,    2, 0x08,   49 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10,    4,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   11,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20, QMetaType::Float,   19,   21,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    4,   26,   27,   28,   29,   30,   31,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   37,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   37,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkProtocolENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MAVLinkProtocol, std::true_type>,
        // method 'vehicleHeartbeatInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method 'versionCheckChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'protocolStatusMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'systemIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mavlinkMessageStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'radioStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'saveTelemetryLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkTelemetrySavePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'logSentBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'setSystemId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'enableVersionCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'storeSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteTempLogFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkForLostLogFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkProtocol *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->vehicleHeartbeatInfo((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[2]))); break;
        case 2: _t->versionCheckChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->protocolStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->systemIdChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->mavlinkMessageStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5]))); break;
        case 6: _t->radioStatusChanged((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[8]))); break;
        case 7: _t->saveTelemetryLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->checkTelemetrySavePath(); break;
        case 9: _t->receiveBytes((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 10: _t->logSentBytes((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 11: _t->setSystemId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->enableVersionCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->loadSettings(); break;
        case 14: _t->storeSettings(); break;
        case 15: _t->deleteTempLogFiles(); break;
        case 16: _t->checkForLostLogFiles(); break;
        case 17: _t->_vehicleCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , int , int , int , int );
            if (_t _q_method = &MAVLinkProtocol::vehicleHeartbeatInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , mavlink_message_t );
            if (_t _q_method = &MAVLinkProtocol::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(bool );
            if (_t _q_method = &MAVLinkProtocol::versionCheckChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(const QString & , const QString & );
            if (_t _q_method = &MAVLinkProtocol::protocolStatusMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(int );
            if (_t _q_method = &MAVLinkProtocol::systemIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(int , uint64_t , uint64_t , uint64_t , float );
            if (_t _q_method = &MAVLinkProtocol::mavlinkMessageStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , unsigned  , unsigned  , int , int , unsigned  , unsigned  , unsigned  );
            if (_t _q_method = &MAVLinkProtocol::radioStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(QString );
            if (_t _q_method = &MAVLinkProtocol::saveTelemetryLog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)();
            if (_t _q_method = &MAVLinkProtocol::checkTelemetrySavePath; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkProtocolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkProtocol::vehicleHeartbeatInfo(LinkInterface * _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::versionCheckChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkProtocol::systemIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkProtocol::mavlinkMessageStatus(int _t1, uint64_t _t2, uint64_t _t3, uint64_t _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkProtocol::radioStatusChanged(LinkInterface * _t1, unsigned  _t2, unsigned  _t3, int _t4, int _t5, unsigned  _t6, unsigned  _t7, unsigned  _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkProtocol::saveTelemetryLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkProtocol::checkTelemetrySavePath()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
