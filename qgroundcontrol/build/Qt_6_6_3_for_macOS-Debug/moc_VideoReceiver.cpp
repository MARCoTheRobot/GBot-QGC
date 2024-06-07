/****************************************************************************
** Meta object code from reading C++ file 'VideoReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VideoReceiver/VideoReceiver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoReceiver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVideoReceiverENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVideoReceiverENDCLASS = QtMocHelpers::stringData(
    "VideoReceiver",
    "timeout",
    "",
    "streamingChanged",
    "active",
    "decodingChanged",
    "recordingChanged",
    "recordingStarted",
    "videoSizeChanged",
    "size",
    "onStartComplete",
    "STATUS",
    "status",
    "onStopComplete",
    "onStartDecodingComplete",
    "onStopDecodingComplete",
    "onStartRecordingComplete",
    "onStopRecordingComplete",
    "onTakeScreenshotComplete",
    "start",
    "uri",
    "buffer",
    "stop",
    "startDecoding",
    "sink",
    "stopDecoding",
    "startRecording",
    "videoFile",
    "FILE_FORMAT",
    "format",
    "stopRecording",
    "takeScreenshot",
    "imageFile",
    "STATUS_OK",
    "STATUS_FAIL",
    "STATUS_INVALID_STATE",
    "STATUS_INVALID_URL",
    "STATUS_NOT_IMPLEMENTED"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVideoReceiverENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[14];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[17];
    char stringdata9[5];
    char stringdata10[16];
    char stringdata11[7];
    char stringdata12[7];
    char stringdata13[15];
    char stringdata14[24];
    char stringdata15[23];
    char stringdata16[25];
    char stringdata17[24];
    char stringdata18[25];
    char stringdata19[6];
    char stringdata20[4];
    char stringdata21[7];
    char stringdata22[5];
    char stringdata23[14];
    char stringdata24[5];
    char stringdata25[13];
    char stringdata26[15];
    char stringdata27[10];
    char stringdata28[12];
    char stringdata29[7];
    char stringdata30[14];
    char stringdata31[15];
    char stringdata32[10];
    char stringdata33[10];
    char stringdata34[12];
    char stringdata35[21];
    char stringdata36[19];
    char stringdata37[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVideoReceiverENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVideoReceiverENDCLASS_t qt_meta_stringdata_CLASSVideoReceiverENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "VideoReceiver"
        QT_MOC_LITERAL(14, 7),  // "timeout"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 16),  // "streamingChanged"
        QT_MOC_LITERAL(40, 6),  // "active"
        QT_MOC_LITERAL(47, 15),  // "decodingChanged"
        QT_MOC_LITERAL(63, 16),  // "recordingChanged"
        QT_MOC_LITERAL(80, 16),  // "recordingStarted"
        QT_MOC_LITERAL(97, 16),  // "videoSizeChanged"
        QT_MOC_LITERAL(114, 4),  // "size"
        QT_MOC_LITERAL(119, 15),  // "onStartComplete"
        QT_MOC_LITERAL(135, 6),  // "STATUS"
        QT_MOC_LITERAL(142, 6),  // "status"
        QT_MOC_LITERAL(149, 14),  // "onStopComplete"
        QT_MOC_LITERAL(164, 23),  // "onStartDecodingComplete"
        QT_MOC_LITERAL(188, 22),  // "onStopDecodingComplete"
        QT_MOC_LITERAL(211, 24),  // "onStartRecordingComplete"
        QT_MOC_LITERAL(236, 23),  // "onStopRecordingComplete"
        QT_MOC_LITERAL(260, 24),  // "onTakeScreenshotComplete"
        QT_MOC_LITERAL(285, 5),  // "start"
        QT_MOC_LITERAL(291, 3),  // "uri"
        QT_MOC_LITERAL(295, 6),  // "buffer"
        QT_MOC_LITERAL(302, 4),  // "stop"
        QT_MOC_LITERAL(307, 13),  // "startDecoding"
        QT_MOC_LITERAL(321, 4),  // "sink"
        QT_MOC_LITERAL(326, 12),  // "stopDecoding"
        QT_MOC_LITERAL(339, 14),  // "startRecording"
        QT_MOC_LITERAL(354, 9),  // "videoFile"
        QT_MOC_LITERAL(364, 11),  // "FILE_FORMAT"
        QT_MOC_LITERAL(376, 6),  // "format"
        QT_MOC_LITERAL(383, 13),  // "stopRecording"
        QT_MOC_LITERAL(397, 14),  // "takeScreenshot"
        QT_MOC_LITERAL(412, 9),  // "imageFile"
        QT_MOC_LITERAL(422, 9),  // "STATUS_OK"
        QT_MOC_LITERAL(432, 11),  // "STATUS_FAIL"
        QT_MOC_LITERAL(444, 20),  // "STATUS_INVALID_STATE"
        QT_MOC_LITERAL(465, 18),  // "STATUS_INVALID_URL"
        QT_MOC_LITERAL(484, 22)   // "STATUS_NOT_IMPLEMENTED"
    },
    "VideoReceiver",
    "timeout",
    "",
    "streamingChanged",
    "active",
    "decodingChanged",
    "recordingChanged",
    "recordingStarted",
    "videoSizeChanged",
    "size",
    "onStartComplete",
    "STATUS",
    "status",
    "onStopComplete",
    "onStartDecodingComplete",
    "onStopDecodingComplete",
    "onStartRecordingComplete",
    "onStopRecordingComplete",
    "onTakeScreenshotComplete",
    "start",
    "uri",
    "buffer",
    "stop",
    "startDecoding",
    "sink",
    "stopDecoding",
    "startRecording",
    "videoFile",
    "FILE_FORMAT",
    "format",
    "stopRecording",
    "takeScreenshot",
    "imageFile",
    "STATUS_OK",
    "STATUS_FAIL",
    "STATUS_INVALID_STATE",
    "STATUS_INVALID_URL",
    "STATUS_NOT_IMPLEMENTED"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVideoReceiverENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       1,  201, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x06,    2 /* Public */,
       3,    1,  141,    2, 0x06,    3 /* Public */,
       5,    1,  144,    2, 0x06,    5 /* Public */,
       6,    1,  147,    2, 0x06,    7 /* Public */,
       7,    0,  150,    2, 0x06,    9 /* Public */,
       8,    1,  151,    2, 0x06,   10 /* Public */,
      10,    1,  154,    2, 0x06,   12 /* Public */,
      13,    1,  157,    2, 0x06,   14 /* Public */,
      14,    1,  160,    2, 0x06,   16 /* Public */,
      15,    1,  163,    2, 0x06,   18 /* Public */,
      16,    1,  166,    2, 0x06,   20 /* Public */,
      17,    1,  169,    2, 0x06,   22 /* Public */,
      18,    1,  172,    2, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    3,  175,    2, 0x0a,   26 /* Public */,
      19,    2,  182,    2, 0x2a,   30 /* Public | MethodCloned */,
      22,    0,  187,    2, 0x0a,   33 /* Public */,
      23,    1,  188,    2, 0x0a,   34 /* Public */,
      25,    0,  191,    2, 0x0a,   36 /* Public */,
      26,    2,  192,    2, 0x0a,   37 /* Public */,
      30,    0,  197,    2, 0x0a,   40 /* Public */,
      31,    1,  198,    2, 0x0a,   41 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,   20,    1,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   20,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 28,   27,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    5,  206,

 // enum data: key, value
      33, uint(VideoReceiver::STATUS_OK),
      34, uint(VideoReceiver::STATUS_FAIL),
      35, uint(VideoReceiver::STATUS_INVALID_STATE),
      36, uint(VideoReceiver::STATUS_INVALID_URL),
      37, uint(VideoReceiver::STATUS_NOT_IMPLEMENTED),

       0        // eod
};

Q_CONSTINIT const QMetaObject VideoReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVideoReceiverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVideoReceiverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVideoReceiverENDCLASS_t,
        // enum 'STATUS'
        QtPrivate::TypeAndForceComplete<VideoReceiver::STATUS, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VideoReceiver, std::true_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'decodingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'recordingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'recordingStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'videoSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSize, std::false_type>,
        // method 'onStartComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onStopComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onStartDecodingComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onStopDecodingComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onStartRecordingComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onStopRecordingComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'onTakeScreenshotComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<STATUS, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startDecoding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<void *, std::false_type>,
        // method 'stopDecoding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<FILE_FORMAT, std::false_type>,
        // method 'stopRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'takeScreenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void VideoReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoReceiver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->streamingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->decodingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->recordingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->recordingStarted(); break;
        case 5: _t->videoSizeChanged((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 6: _t->onStartComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 7: _t->onStopComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 8: _t->onStartDecodingComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 9: _t->onStopDecodingComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 10: _t->onStartRecordingComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 11: _t->onStopRecordingComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 12: _t->onTakeScreenshotComplete((*reinterpret_cast< std::add_pointer_t<STATUS>>(_a[1]))); break;
        case 13: _t->start((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->start((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 15: _t->stop(); break;
        case 16: _t->startDecoding((*reinterpret_cast< std::add_pointer_t<void*>>(_a[1]))); break;
        case 17: _t->stopDecoding(); break;
        case 18: _t->startRecording((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FILE_FORMAT>>(_a[2]))); break;
        case 19: _t->stopRecording(); break;
        case 20: _t->takeScreenshot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoReceiver::*)();
            if (_t _q_method = &VideoReceiver::timeout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (_t _q_method = &VideoReceiver::streamingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (_t _q_method = &VideoReceiver::decodingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (_t _q_method = &VideoReceiver::recordingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (_t _q_method = &VideoReceiver::recordingStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(QSize );
            if (_t _q_method = &VideoReceiver::videoSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStartComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStopComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStartDecodingComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStopDecodingComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStartRecordingComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onStopRecordingComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (_t _q_method = &VideoReceiver::onTakeScreenshotComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject *VideoReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVideoReceiverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void VideoReceiver::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoReceiver::streamingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoReceiver::decodingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoReceiver::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoReceiver::recordingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VideoReceiver::videoSizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VideoReceiver::onStartComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VideoReceiver::onStopComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void VideoReceiver::onStartDecodingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VideoReceiver::onStopDecodingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VideoReceiver::onStartRecordingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VideoReceiver::onStopRecordingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VideoReceiver::onTakeScreenshotComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
