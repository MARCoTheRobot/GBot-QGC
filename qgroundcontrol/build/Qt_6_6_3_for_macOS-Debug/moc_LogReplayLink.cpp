/****************************************************************************
** Meta object code from reading C++ file 'LogReplayLink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Comms/LogReplayLink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogReplayLink.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS = QtMocHelpers::stringData(
    "LogReplayLinkConfiguration",
    "fileNameChanged",
    "",
    "fileName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[27];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS_t qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "LogReplayLinkConfiguration"
        QT_MOC_LITERAL(27, 15),  // "fileNameChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 8)   // "fileName"
    },
    "LogReplayLinkConfiguration",
    "fileNameChanged",
    "",
    "fileName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogReplayLinkConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogReplayLinkConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkConfiguration::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogReplayLinkConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS_t,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogReplayLinkConfiguration, std::true_type>,
        // method 'fileNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LogReplayLinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLinkConfiguration::*)();
            if (_t _q_method = &LogReplayLinkConfiguration::fileNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->logFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *LogReplayLinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogReplayLinkConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int LogReplayLinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void LogReplayLinkConfiguration::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLogReplayLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLogReplayLinkENDCLASS = QtMocHelpers::stringData(
    "LogReplayLink",
    "logFileStats",
    "",
    "logDurationSecs",
    "playbackStarted",
    "playbackPaused",
    "playbackAtEnd",
    "playbackPercentCompleteChanged",
    "percentComplete",
    "currentLogTimeSecs",
    "secs",
    "_playOnThread",
    "_pauseOnThread",
    "_setPlaybackSpeedOnThread",
    "playbackSpeed",
    "setPlaybackSpeed",
    "_writeBytes",
    "bytes",
    "_readNextLogEntry",
    "_play",
    "_pause",
    "_setPlaybackSpeed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLogReplayLinkENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[14];
    char stringdata7[31];
    char stringdata8[16];
    char stringdata9[19];
    char stringdata10[5];
    char stringdata11[14];
    char stringdata12[15];
    char stringdata13[26];
    char stringdata14[14];
    char stringdata15[17];
    char stringdata16[12];
    char stringdata17[6];
    char stringdata18[18];
    char stringdata19[6];
    char stringdata20[7];
    char stringdata21[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLogReplayLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLogReplayLinkENDCLASS_t qt_meta_stringdata_CLASSLogReplayLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "LogReplayLink"
        QT_MOC_LITERAL(14, 12),  // "logFileStats"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 15),  // "logDurationSecs"
        QT_MOC_LITERAL(44, 15),  // "playbackStarted"
        QT_MOC_LITERAL(60, 14),  // "playbackPaused"
        QT_MOC_LITERAL(75, 13),  // "playbackAtEnd"
        QT_MOC_LITERAL(89, 30),  // "playbackPercentCompleteChanged"
        QT_MOC_LITERAL(120, 15),  // "percentComplete"
        QT_MOC_LITERAL(136, 18),  // "currentLogTimeSecs"
        QT_MOC_LITERAL(155, 4),  // "secs"
        QT_MOC_LITERAL(160, 13),  // "_playOnThread"
        QT_MOC_LITERAL(174, 14),  // "_pauseOnThread"
        QT_MOC_LITERAL(189, 25),  // "_setPlaybackSpeedOnThread"
        QT_MOC_LITERAL(215, 13),  // "playbackSpeed"
        QT_MOC_LITERAL(229, 16),  // "setPlaybackSpeed"
        QT_MOC_LITERAL(246, 11),  // "_writeBytes"
        QT_MOC_LITERAL(258, 5),  // "bytes"
        QT_MOC_LITERAL(264, 17),  // "_readNextLogEntry"
        QT_MOC_LITERAL(282, 5),  // "_play"
        QT_MOC_LITERAL(288, 6),  // "_pause"
        QT_MOC_LITERAL(295, 17)   // "_setPlaybackSpeed"
    },
    "LogReplayLink",
    "logFileStats",
    "",
    "logDurationSecs",
    "playbackStarted",
    "playbackPaused",
    "playbackAtEnd",
    "playbackPercentCompleteChanged",
    "percentComplete",
    "currentLogTimeSecs",
    "secs",
    "_playOnThread",
    "_pauseOnThread",
    "_setPlaybackSpeedOnThread",
    "playbackSpeed",
    "setPlaybackSpeed",
    "_writeBytes",
    "bytes",
    "_readNextLogEntry",
    "_play",
    "_pause",
    "_setPlaybackSpeed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogReplayLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       4,    0,  107,    2, 0x06,    3 /* Public */,
       5,    0,  108,    2, 0x06,    4 /* Public */,
       6,    0,  109,    2, 0x06,    5 /* Public */,
       7,    1,  110,    2, 0x06,    6 /* Public */,
       9,    1,  113,    2, 0x06,    8 /* Public */,
      11,    0,  116,    2, 0x06,   10 /* Public */,
      12,    0,  117,    2, 0x06,   11 /* Public */,
      13,    1,  118,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  121,    2, 0x0a,   14 /* Public */,
      16,    1,  124,    2, 0x08,   16 /* Private */,
      18,    0,  127,    2, 0x08,   18 /* Private */,
      19,    0,  128,    2, 0x08,   19 /* Private */,
      20,    0,  129,    2, 0x08,   20 /* Private */,
      21,    1,  130,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogReplayLink::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogReplayLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogReplayLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLogReplayLinkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogReplayLink, std::true_type>,
        // method 'logFileStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'playbackStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playbackPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playbackAtEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playbackPercentCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'currentLogTimeSecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_playOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_pauseOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setPlaybackSpeedOnThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setPlaybackSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method '_writeBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>,
        // method '_readNextLogEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setPlaybackSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void LogReplayLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLink *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logFileStats((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->playbackStarted(); break;
        case 2: _t->playbackPaused(); break;
        case 3: _t->playbackAtEnd(); break;
        case 4: _t->playbackPercentCompleteChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->currentLogTimeSecs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->_playOnThread(); break;
        case 7: _t->_pauseOnThread(); break;
        case 8: _t->_setPlaybackSpeedOnThread((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 9: _t->setPlaybackSpeed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 10: _t->_writeBytes((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 11: _t->_readNextLogEntry(); break;
        case 12: _t->_play(); break;
        case 13: _t->_pause(); break;
        case 14: _t->_setPlaybackSpeed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLink::*)(int );
            if (_t _q_method = &LogReplayLink::logFileStats; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (_t _q_method = &LogReplayLink::playbackStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (_t _q_method = &LogReplayLink::playbackPaused; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (_t _q_method = &LogReplayLink::playbackAtEnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(qreal );
            if (_t _q_method = &LogReplayLink::playbackPercentCompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(int );
            if (_t _q_method = &LogReplayLink::currentLogTimeSecs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (_t _q_method = &LogReplayLink::_playOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (_t _q_method = &LogReplayLink::_pauseOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(qreal );
            if (_t _q_method = &LogReplayLink::_setPlaybackSpeedOnThread; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *LogReplayLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogReplayLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int LogReplayLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LogReplayLink::logFileStats(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReplayLink::playbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogReplayLink::playbackPaused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogReplayLink::playbackAtEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LogReplayLink::playbackPercentCompleteChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LogReplayLink::currentLogTimeSecs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LogReplayLink::_playOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LogReplayLink::_pauseOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LogReplayLink::_setPlaybackSpeedOnThread(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS = QtMocHelpers::stringData(
    "LogReplayLinkController",
    "linkChanged",
    "",
    "LogReplayLink*",
    "link",
    "isPlayingChanged",
    "isPlaying",
    "percentCompleteChanged",
    "percentComplete",
    "playheadTimeChanged",
    "playheadTime",
    "totalTimeChanged",
    "totalTime",
    "playbackSpeedChanged",
    "playbackSpeed",
    "_logFileStats",
    "logDurationSecs",
    "_playbackStarted",
    "_playbackPaused",
    "_playbackAtEnd",
    "_playbackPercentCompleteChanged",
    "_currentLogTimeSecs",
    "secs",
    "_linkDisconnected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[24];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[17];
    char stringdata6[10];
    char stringdata7[23];
    char stringdata8[16];
    char stringdata9[20];
    char stringdata10[13];
    char stringdata11[17];
    char stringdata12[10];
    char stringdata13[21];
    char stringdata14[14];
    char stringdata15[14];
    char stringdata16[16];
    char stringdata17[17];
    char stringdata18[16];
    char stringdata19[15];
    char stringdata20[32];
    char stringdata21[20];
    char stringdata22[5];
    char stringdata23[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS_t qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "LogReplayLinkController"
        QT_MOC_LITERAL(24, 11),  // "linkChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 14),  // "LogReplayLink*"
        QT_MOC_LITERAL(52, 4),  // "link"
        QT_MOC_LITERAL(57, 16),  // "isPlayingChanged"
        QT_MOC_LITERAL(74, 9),  // "isPlaying"
        QT_MOC_LITERAL(84, 22),  // "percentCompleteChanged"
        QT_MOC_LITERAL(107, 15),  // "percentComplete"
        QT_MOC_LITERAL(123, 19),  // "playheadTimeChanged"
        QT_MOC_LITERAL(143, 12),  // "playheadTime"
        QT_MOC_LITERAL(156, 16),  // "totalTimeChanged"
        QT_MOC_LITERAL(173, 9),  // "totalTime"
        QT_MOC_LITERAL(183, 20),  // "playbackSpeedChanged"
        QT_MOC_LITERAL(204, 13),  // "playbackSpeed"
        QT_MOC_LITERAL(218, 13),  // "_logFileStats"
        QT_MOC_LITERAL(232, 15),  // "logDurationSecs"
        QT_MOC_LITERAL(248, 16),  // "_playbackStarted"
        QT_MOC_LITERAL(265, 15),  // "_playbackPaused"
        QT_MOC_LITERAL(281, 14),  // "_playbackAtEnd"
        QT_MOC_LITERAL(296, 31),  // "_playbackPercentCompleteChanged"
        QT_MOC_LITERAL(328, 19),  // "_currentLogTimeSecs"
        QT_MOC_LITERAL(348, 4),  // "secs"
        QT_MOC_LITERAL(353, 17)   // "_linkDisconnected"
    },
    "LogReplayLinkController",
    "linkChanged",
    "",
    "LogReplayLink*",
    "link",
    "isPlayingChanged",
    "isPlaying",
    "percentCompleteChanged",
    "percentComplete",
    "playheadTimeChanged",
    "playheadTime",
    "totalTimeChanged",
    "totalTime",
    "playbackSpeedChanged",
    "playbackSpeed",
    "_logFileStats",
    "logDurationSecs",
    "_playbackStarted",
    "_playbackPaused",
    "_playbackAtEnd",
    "_playbackPercentCompleteChanged",
    "_currentLogTimeSecs",
    "secs",
    "_linkDisconnected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogReplayLinkControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  123, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    7 /* Public */,
       5,    1,   95,    2, 0x06,    9 /* Public */,
       7,    1,   98,    2, 0x06,   11 /* Public */,
       9,    1,  101,    2, 0x06,   13 /* Public */,
      11,    1,  104,    2, 0x06,   15 /* Public */,
      13,    1,  107,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  110,    2, 0x08,   19 /* Private */,
      17,    0,  113,    2, 0x08,   21 /* Private */,
      18,    0,  114,    2, 0x08,   22 /* Private */,
      19,    0,  115,    2, 0x08,   23 /* Private */,
      20,    1,  116,    2, 0x08,   24 /* Private */,
      21,    1,  119,    2, 0x08,   26 /* Private */,
      23,    0,  122,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QReal,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,
       6, QMetaType::Bool, 0x00015103, uint(1), 0,
       8, QMetaType::QReal, 0x00015103, uint(2), 0,
      12, QMetaType::QString, 0x00015003, uint(4), 0,
      10, QMetaType::QString, 0x00015003, uint(3), 0,
      14, QMetaType::QReal, 0x00015003, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogReplayLinkController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogReplayLinkControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS_t,
        // property 'link'
        QtPrivate::TypeAndForceComplete<LogReplayLink*, std::true_type>,
        // property 'isPlaying'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'percentComplete'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'totalTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'playheadTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'playbackSpeed'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogReplayLinkController, std::true_type>,
        // method 'linkChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LogReplayLink *, std::false_type>,
        // method 'isPlayingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'percentCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'playheadTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'totalTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playbackSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method '_logFileStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_playbackStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_playbackPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_playbackAtEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_playbackPercentCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method '_currentLogTimeSecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_linkDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LogReplayLinkController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkChanged((*reinterpret_cast< std::add_pointer_t<LogReplayLink*>>(_a[1]))); break;
        case 1: _t->isPlayingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->percentCompleteChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->playheadTimeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->totalTimeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->playbackSpeedChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->_logFileStats((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->_playbackStarted(); break;
        case 8: _t->_playbackPaused(); break;
        case 9: _t->_playbackAtEnd(); break;
        case 10: _t->_playbackPercentCompleteChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 11: _t->_currentLogTimeSecs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->_linkDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogReplayLink* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLinkController::*)(LogReplayLink * );
            if (_t _q_method = &LogReplayLinkController::linkChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(bool );
            if (_t _q_method = &LogReplayLinkController::isPlayingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(qreal );
            if (_t _q_method = &LogReplayLinkController::percentCompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(QString );
            if (_t _q_method = &LogReplayLinkController::playheadTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(QString );
            if (_t _q_method = &LogReplayLinkController::totalTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(qreal );
            if (_t _q_method = &LogReplayLinkController::playbackSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LogReplayLink* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LogReplayLink**>(_v) = _t->link(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->percentComplete(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_totalTime; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_playheadTime; break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->_playbackSpeed; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLink(*reinterpret_cast< LogReplayLink**>(_v)); break;
        case 1: _t->setIsPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPercentComplete(*reinterpret_cast< qreal*>(_v)); break;
        case 3:
            if (_t->_totalTime != *reinterpret_cast< QString*>(_v)) {
                _t->_totalTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->totalTimeChanged(_t->_totalTime);
            }
            break;
        case 4:
            if (_t->_playheadTime != *reinterpret_cast< QString*>(_v)) {
                _t->_playheadTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->playheadTimeChanged(_t->_playheadTime);
            }
            break;
        case 5:
            if (_t->_playbackSpeed != *reinterpret_cast< qreal*>(_v)) {
                _t->_playbackSpeed = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->playbackSpeedChanged(_t->_playbackSpeed);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LogReplayLinkController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLinkController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogReplayLinkControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogReplayLinkController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LogReplayLinkController::linkChanged(LogReplayLink * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReplayLinkController::isPlayingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LogReplayLinkController::percentCompleteChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LogReplayLinkController::playheadTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LogReplayLinkController::totalTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LogReplayLinkController::playbackSpeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
