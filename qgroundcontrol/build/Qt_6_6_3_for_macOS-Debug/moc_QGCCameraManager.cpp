/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Camera/QGCCameraManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS = QtMocHelpers::stringData(
    "QGCCameraManager",
    "camerasChanged",
    "",
    "cameraLabelsChanged",
    "currentCameraChanged",
    "streamChanged",
    "_vehicleReady",
    "ready",
    "_mavlinkMessageReceived",
    "mavlink_message_t",
    "message",
    "_activeJoystickChanged",
    "Joystick*",
    "joystick",
    "_stepZoom",
    "direction",
    "_startZoom",
    "_stopZoom",
    "_stepCamera",
    "_stepStream",
    "_checkForLostCameras",
    "_triggerCamera",
    "_startVideoRecording",
    "_stopVideoRecording",
    "_toggleVideoRecording",
    "cameras",
    "QmlObjectListModel*",
    "cameraLabels",
    "currentCameraInstance",
    "MavlinkCameraControl*",
    "currentCamera"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[21];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[6];
    char stringdata8[24];
    char stringdata9[18];
    char stringdata10[8];
    char stringdata11[23];
    char stringdata12[10];
    char stringdata13[9];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[11];
    char stringdata17[10];
    char stringdata18[12];
    char stringdata19[12];
    char stringdata20[21];
    char stringdata21[15];
    char stringdata22[21];
    char stringdata23[20];
    char stringdata24[22];
    char stringdata25[8];
    char stringdata26[20];
    char stringdata27[13];
    char stringdata28[22];
    char stringdata29[22];
    char stringdata30[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS_t qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QGCCameraManager"
        QT_MOC_LITERAL(17, 14),  // "camerasChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 19),  // "cameraLabelsChanged"
        QT_MOC_LITERAL(53, 20),  // "currentCameraChanged"
        QT_MOC_LITERAL(74, 13),  // "streamChanged"
        QT_MOC_LITERAL(88, 13),  // "_vehicleReady"
        QT_MOC_LITERAL(102, 5),  // "ready"
        QT_MOC_LITERAL(108, 23),  // "_mavlinkMessageReceived"
        QT_MOC_LITERAL(132, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(150, 7),  // "message"
        QT_MOC_LITERAL(158, 22),  // "_activeJoystickChanged"
        QT_MOC_LITERAL(181, 9),  // "Joystick*"
        QT_MOC_LITERAL(191, 8),  // "joystick"
        QT_MOC_LITERAL(200, 9),  // "_stepZoom"
        QT_MOC_LITERAL(210, 9),  // "direction"
        QT_MOC_LITERAL(220, 10),  // "_startZoom"
        QT_MOC_LITERAL(231, 9),  // "_stopZoom"
        QT_MOC_LITERAL(241, 11),  // "_stepCamera"
        QT_MOC_LITERAL(253, 11),  // "_stepStream"
        QT_MOC_LITERAL(265, 20),  // "_checkForLostCameras"
        QT_MOC_LITERAL(286, 14),  // "_triggerCamera"
        QT_MOC_LITERAL(301, 20),  // "_startVideoRecording"
        QT_MOC_LITERAL(322, 19),  // "_stopVideoRecording"
        QT_MOC_LITERAL(342, 21),  // "_toggleVideoRecording"
        QT_MOC_LITERAL(364, 7),  // "cameras"
        QT_MOC_LITERAL(372, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(392, 12),  // "cameraLabels"
        QT_MOC_LITERAL(405, 21),  // "currentCameraInstance"
        QT_MOC_LITERAL(427, 21),  // "MavlinkCameraControl*"
        QT_MOC_LITERAL(449, 13)   // "currentCamera"
    },
    "QGCCameraManager",
    "camerasChanged",
    "",
    "cameraLabelsChanged",
    "currentCameraChanged",
    "streamChanged",
    "_vehicleReady",
    "ready",
    "_mavlinkMessageReceived",
    "mavlink_message_t",
    "message",
    "_activeJoystickChanged",
    "Joystick*",
    "joystick",
    "_stepZoom",
    "direction",
    "_startZoom",
    "_stopZoom",
    "_stepCamera",
    "_stepStream",
    "_checkForLostCameras",
    "_triggerCamera",
    "_startVideoRecording",
    "_stopVideoRecording",
    "_toggleVideoRecording",
    "cameras",
    "QmlObjectListModel*",
    "cameraLabels",
    "currentCameraInstance",
    "MavlinkCameraControl*",
    "currentCamera"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCCameraManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       4,  147, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    5 /* Public */,
       3,    0,  117,    2, 0x06,    6 /* Public */,
       4,    0,  118,    2, 0x06,    7 /* Public */,
       5,    0,  119,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  120,    2, 0x09,    9 /* Protected */,
       8,    1,  123,    2, 0x09,   11 /* Protected */,
      11,    1,  126,    2, 0x09,   13 /* Protected */,
      14,    1,  129,    2, 0x09,   15 /* Protected */,
      16,    1,  132,    2, 0x09,   17 /* Protected */,
      17,    0,  135,    2, 0x09,   19 /* Protected */,
      18,    1,  136,    2, 0x09,   20 /* Protected */,
      19,    1,  139,    2, 0x09,   22 /* Protected */,
      20,    0,  142,    2, 0x09,   24 /* Protected */,
      21,    0,  143,    2, 0x09,   25 /* Protected */,
      22,    0,  144,    2, 0x09,   26 /* Protected */,
      23,    0,  145,    2, 0x09,   27 /* Protected */,
      24,    0,  146,    2, 0x09,   28 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 26, 0x00015009, uint(0), 0,
      27, QMetaType::QStringList, 0x00015001, uint(1), 0,
      28, 0x80000000 | 29, 0x00015009, uint(2), 0,
      30, QMetaType::Int, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCCameraManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCCameraManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS_t,
        // property 'cameras'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'cameraLabels'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentCameraInstance'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl*, std::true_type>,
        // property 'currentCamera'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCCameraManager, std::true_type>,
        // method 'camerasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraLabelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentCameraChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_mavlinkMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_message_t &, std::false_type>,
        // method '_activeJoystickChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Joystick *, std::false_type>,
        // method '_stepZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_startZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_stopZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_stepCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_stepStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_checkForLostCameras'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_triggerCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_startVideoRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_stopVideoRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_toggleVideoRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCCameraManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->camerasChanged(); break;
        case 1: _t->cameraLabelsChanged(); break;
        case 2: _t->currentCameraChanged(); break;
        case 3: _t->streamChanged(); break;
        case 4: _t->_vehicleReady((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_mavlinkMessageReceived((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 6: _t->_activeJoystickChanged((*reinterpret_cast< std::add_pointer_t<Joystick*>>(_a[1]))); break;
        case 7: _t->_stepZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->_startZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->_stopZoom(); break;
        case 10: _t->_stepCamera((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->_stepStream((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->_checkForLostCameras(); break;
        case 13: _t->_triggerCamera(); break;
        case 14: _t->_startVideoRecording(); break;
        case 15: _t->_stopVideoRecording(); break;
        case 16: _t->_toggleVideoRecording(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCameraManager::*)();
            if (_t _q_method = &QGCCameraManager::camerasChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (_t _q_method = &QGCCameraManager::cameraLabelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (_t _q_method = &QGCCameraManager::currentCameraChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (_t _q_method = &QGCCameraManager::streamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MavlinkCameraControl* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameras(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->cameraLabels(); break;
        case 2: *reinterpret_cast< MavlinkCameraControl**>(_v) = _t->currentCameraInstance(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentCamera(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCurrentCamera(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCCameraManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCCameraManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCameraManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGCCameraManager::camerasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraManager::cameraLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraManager::currentCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraManager::streamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
