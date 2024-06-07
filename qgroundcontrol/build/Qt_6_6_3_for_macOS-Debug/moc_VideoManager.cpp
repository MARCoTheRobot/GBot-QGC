/****************************************************************************
** Meta object code from reading C++ file 'VideoManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VideoManager/VideoManager.h"
#include "VideoReceiver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVideoManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVideoManagerENDCLASS = QtMocHelpers::stringData(
    "VideoManager",
    "hasVideoChanged",
    "",
    "isGStreamerChanged",
    "isUvcChanged",
    "uvcVideoSourceIDChanged",
    "fullScreenChanged",
    "isAutoStreamChanged",
    "aspectRatioChanged",
    "autoStreamConfiguredChanged",
    "imageFileChanged",
    "streamingChanged",
    "decodingChanged",
    "recordingChanged",
    "recordingStarted",
    "videoSizeChanged",
    "_videoSourceChanged",
    "_udpPortChanged",
    "_rtspUrlChanged",
    "_tcpUrlChanged",
    "_lowLatencyModeChanged",
    "_updateUVC",
    "_setActiveVehicle",
    "Vehicle*",
    "vehicle",
    "_aspectRatioChanged",
    "_communicationLostChanged",
    "communicationLost",
    "startVideo",
    "stopVideo",
    "startRecording",
    "videoFile",
    "stopRecording",
    "grabImage",
    "imageFile",
    "hasVideo",
    "isGStreamer",
    "isUvc",
    "uvcVideoSourceID",
    "uvcEnabled",
    "fullScreen",
    "videoReceiver",
    "VideoReceiver*",
    "thermalVideoReceiver",
    "aspectRatio",
    "thermalAspectRatio",
    "hfov",
    "thermalHfov",
    "autoStreamConfigured",
    "hasThermal",
    "streaming",
    "decoding",
    "recording",
    "videoSize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVideoManagerENDCLASS_t {
    uint offsetsAndSizes[108];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[13];
    char stringdata5[24];
    char stringdata6[18];
    char stringdata7[20];
    char stringdata8[19];
    char stringdata9[28];
    char stringdata10[17];
    char stringdata11[17];
    char stringdata12[16];
    char stringdata13[17];
    char stringdata14[17];
    char stringdata15[17];
    char stringdata16[20];
    char stringdata17[16];
    char stringdata18[16];
    char stringdata19[15];
    char stringdata20[23];
    char stringdata21[11];
    char stringdata22[18];
    char stringdata23[9];
    char stringdata24[8];
    char stringdata25[20];
    char stringdata26[26];
    char stringdata27[18];
    char stringdata28[11];
    char stringdata29[10];
    char stringdata30[15];
    char stringdata31[10];
    char stringdata32[14];
    char stringdata33[10];
    char stringdata34[10];
    char stringdata35[9];
    char stringdata36[12];
    char stringdata37[6];
    char stringdata38[17];
    char stringdata39[11];
    char stringdata40[11];
    char stringdata41[14];
    char stringdata42[15];
    char stringdata43[21];
    char stringdata44[12];
    char stringdata45[19];
    char stringdata46[5];
    char stringdata47[12];
    char stringdata48[21];
    char stringdata49[11];
    char stringdata50[10];
    char stringdata51[9];
    char stringdata52[10];
    char stringdata53[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVideoManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVideoManagerENDCLASS_t qt_meta_stringdata_CLASSVideoManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "VideoManager"
        QT_MOC_LITERAL(13, 15),  // "hasVideoChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 18),  // "isGStreamerChanged"
        QT_MOC_LITERAL(49, 12),  // "isUvcChanged"
        QT_MOC_LITERAL(62, 23),  // "uvcVideoSourceIDChanged"
        QT_MOC_LITERAL(86, 17),  // "fullScreenChanged"
        QT_MOC_LITERAL(104, 19),  // "isAutoStreamChanged"
        QT_MOC_LITERAL(124, 18),  // "aspectRatioChanged"
        QT_MOC_LITERAL(143, 27),  // "autoStreamConfiguredChanged"
        QT_MOC_LITERAL(171, 16),  // "imageFileChanged"
        QT_MOC_LITERAL(188, 16),  // "streamingChanged"
        QT_MOC_LITERAL(205, 15),  // "decodingChanged"
        QT_MOC_LITERAL(221, 16),  // "recordingChanged"
        QT_MOC_LITERAL(238, 16),  // "recordingStarted"
        QT_MOC_LITERAL(255, 16),  // "videoSizeChanged"
        QT_MOC_LITERAL(272, 19),  // "_videoSourceChanged"
        QT_MOC_LITERAL(292, 15),  // "_udpPortChanged"
        QT_MOC_LITERAL(308, 15),  // "_rtspUrlChanged"
        QT_MOC_LITERAL(324, 14),  // "_tcpUrlChanged"
        QT_MOC_LITERAL(339, 22),  // "_lowLatencyModeChanged"
        QT_MOC_LITERAL(362, 10),  // "_updateUVC"
        QT_MOC_LITERAL(373, 17),  // "_setActiveVehicle"
        QT_MOC_LITERAL(391, 8),  // "Vehicle*"
        QT_MOC_LITERAL(400, 7),  // "vehicle"
        QT_MOC_LITERAL(408, 19),  // "_aspectRatioChanged"
        QT_MOC_LITERAL(428, 25),  // "_communicationLostChanged"
        QT_MOC_LITERAL(454, 17),  // "communicationLost"
        QT_MOC_LITERAL(472, 10),  // "startVideo"
        QT_MOC_LITERAL(483, 9),  // "stopVideo"
        QT_MOC_LITERAL(493, 14),  // "startRecording"
        QT_MOC_LITERAL(508, 9),  // "videoFile"
        QT_MOC_LITERAL(518, 13),  // "stopRecording"
        QT_MOC_LITERAL(532, 9),  // "grabImage"
        QT_MOC_LITERAL(542, 9),  // "imageFile"
        QT_MOC_LITERAL(552, 8),  // "hasVideo"
        QT_MOC_LITERAL(561, 11),  // "isGStreamer"
        QT_MOC_LITERAL(573, 5),  // "isUvc"
        QT_MOC_LITERAL(579, 16),  // "uvcVideoSourceID"
        QT_MOC_LITERAL(596, 10),  // "uvcEnabled"
        QT_MOC_LITERAL(607, 10),  // "fullScreen"
        QT_MOC_LITERAL(618, 13),  // "videoReceiver"
        QT_MOC_LITERAL(632, 14),  // "VideoReceiver*"
        QT_MOC_LITERAL(647, 20),  // "thermalVideoReceiver"
        QT_MOC_LITERAL(668, 11),  // "aspectRatio"
        QT_MOC_LITERAL(680, 18),  // "thermalAspectRatio"
        QT_MOC_LITERAL(699, 4),  // "hfov"
        QT_MOC_LITERAL(704, 11),  // "thermalHfov"
        QT_MOC_LITERAL(716, 20),  // "autoStreamConfigured"
        QT_MOC_LITERAL(737, 10),  // "hasThermal"
        QT_MOC_LITERAL(748, 9),  // "streaming"
        QT_MOC_LITERAL(758, 8),  // "decoding"
        QT_MOC_LITERAL(767, 9),  // "recording"
        QT_MOC_LITERAL(777, 9)   // "videoSize"
    },
    "VideoManager",
    "hasVideoChanged",
    "",
    "isGStreamerChanged",
    "isUvcChanged",
    "uvcVideoSourceIDChanged",
    "fullScreenChanged",
    "isAutoStreamChanged",
    "aspectRatioChanged",
    "autoStreamConfiguredChanged",
    "imageFileChanged",
    "streamingChanged",
    "decodingChanged",
    "recordingChanged",
    "recordingStarted",
    "videoSizeChanged",
    "_videoSourceChanged",
    "_udpPortChanged",
    "_rtspUrlChanged",
    "_tcpUrlChanged",
    "_lowLatencyModeChanged",
    "_updateUVC",
    "_setActiveVehicle",
    "Vehicle*",
    "vehicle",
    "_aspectRatioChanged",
    "_communicationLostChanged",
    "communicationLost",
    "startVideo",
    "stopVideo",
    "startRecording",
    "videoFile",
    "stopRecording",
    "grabImage",
    "imageFile",
    "hasVideo",
    "isGStreamer",
    "isUvc",
    "uvcVideoSourceID",
    "uvcEnabled",
    "fullScreen",
    "videoReceiver",
    "VideoReceiver*",
    "thermalVideoReceiver",
    "aspectRatio",
    "thermalAspectRatio",
    "hfov",
    "thermalHfov",
    "autoStreamConfigured",
    "hasThermal",
    "streaming",
    "decoding",
    "recording",
    "videoSize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVideoManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      19,  232, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  194,    2, 0x06,   20 /* Public */,
       3,    0,  195,    2, 0x06,   21 /* Public */,
       4,    0,  196,    2, 0x06,   22 /* Public */,
       5,    0,  197,    2, 0x06,   23 /* Public */,
       6,    0,  198,    2, 0x06,   24 /* Public */,
       7,    0,  199,    2, 0x06,   25 /* Public */,
       8,    0,  200,    2, 0x06,   26 /* Public */,
       9,    0,  201,    2, 0x06,   27 /* Public */,
      10,    0,  202,    2, 0x06,   28 /* Public */,
      11,    0,  203,    2, 0x06,   29 /* Public */,
      12,    0,  204,    2, 0x06,   30 /* Public */,
      13,    0,  205,    2, 0x06,   31 /* Public */,
      14,    0,  206,    2, 0x06,   32 /* Public */,
      15,    0,  207,    2, 0x06,   33 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  208,    2, 0x09,   34 /* Protected */,
      17,    0,  209,    2, 0x09,   35 /* Protected */,
      18,    0,  210,    2, 0x09,   36 /* Protected */,
      19,    0,  211,    2, 0x09,   37 /* Protected */,
      20,    0,  212,    2, 0x09,   38 /* Protected */,
      21,    0,  213,    2, 0x09,   39 /* Protected */,
      22,    1,  214,    2, 0x09,   40 /* Protected */,
      25,    0,  217,    2, 0x09,   42 /* Protected */,
      26,    1,  218,    2, 0x09,   43 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      28,    0,  221,    2, 0x02,   45 /* Public */,
      29,    0,  222,    2, 0x02,   46 /* Public */,
      30,    1,  223,    2, 0x02,   47 /* Public */,
      30,    0,  226,    2, 0x22,   49 /* Public | MethodCloned */,
      32,    0,  227,    2, 0x02,   50 /* Public */,
      33,    1,  228,    2, 0x02,   51 /* Public */,
      33,    0,  231,    2, 0x22,   53 /* Public | MethodCloned */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,

 // properties: name, type, flags
      35, QMetaType::Bool, 0x00015001, uint(0), 0,
      36, QMetaType::Bool, 0x00015001, uint(1), 0,
      37, QMetaType::Bool, 0x00015001, uint(2), 0,
      38, QMetaType::QString, 0x00015001, uint(3), 0,
      39, QMetaType::Bool, 0x00015401, uint(-1), 0,
      40, QMetaType::Bool, 0x00015003, uint(4), 0,
      41, 0x80000000 | 42, 0x00015409, uint(-1), 0,
      43, 0x80000000 | 42, 0x00015409, uint(-1), 0,
      44, QMetaType::Double, 0x00015001, uint(6), 0,
      45, QMetaType::Double, 0x00015001, uint(6), 0,
      46, QMetaType::Double, 0x00015001, uint(6), 0,
      47, QMetaType::Double, 0x00015001, uint(6), 0,
      48, QMetaType::Bool, 0x00015001, uint(7), 0,
      49, QMetaType::Bool, 0x00015001, uint(10), 0,
      34, QMetaType::QString, 0x00015001, uint(8), 0,
      50, QMetaType::Bool, 0x00015001, uint(9), 0,
      51, QMetaType::Bool, 0x00015001, uint(10), 0,
      52, QMetaType::Bool, 0x00015001, uint(11), 0,
      53, QMetaType::QSize, 0x00015001, uint(13), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VideoManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSVideoManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVideoManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVideoManagerENDCLASS_t,
        // property 'hasVideo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isGStreamer'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isUvc'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'uvcVideoSourceID'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uvcEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fullScreen'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'videoReceiver'
        QtPrivate::TypeAndForceComplete<VideoReceiver*, std::true_type>,
        // property 'thermalVideoReceiver'
        QtPrivate::TypeAndForceComplete<VideoReceiver*, std::true_type>,
        // property 'aspectRatio'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'thermalAspectRatio'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'hfov'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'thermalHfov'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'autoStreamConfigured'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasThermal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'imageFile'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'streaming'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'decoding'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'recording'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'videoSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VideoManager, std::true_type>,
        // method 'hasVideoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isGStreamerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isUvcChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uvcVideoSourceIDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fullScreenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isAutoStreamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aspectRatioChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoStreamConfiguredChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decodingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recordingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recordingStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'videoSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_videoSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_udpPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rtspUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_tcpUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_lowLatencyModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateUVC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setActiveVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_aspectRatioChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_communicationLostChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startVideo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopVideo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'grabImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'grabImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VideoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hasVideoChanged(); break;
        case 1: _t->isGStreamerChanged(); break;
        case 2: _t->isUvcChanged(); break;
        case 3: _t->uvcVideoSourceIDChanged(); break;
        case 4: _t->fullScreenChanged(); break;
        case 5: _t->isAutoStreamChanged(); break;
        case 6: _t->aspectRatioChanged(); break;
        case 7: _t->autoStreamConfiguredChanged(); break;
        case 8: _t->imageFileChanged(); break;
        case 9: _t->streamingChanged(); break;
        case 10: _t->decodingChanged(); break;
        case 11: _t->recordingChanged(); break;
        case 12: _t->recordingStarted(); break;
        case 13: _t->videoSizeChanged(); break;
        case 14: _t->_videoSourceChanged(); break;
        case 15: _t->_udpPortChanged(); break;
        case 16: _t->_rtspUrlChanged(); break;
        case 17: _t->_tcpUrlChanged(); break;
        case 18: _t->_lowLatencyModeChanged(); break;
        case 19: _t->_updateUVC(); break;
        case 20: _t->_setActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 21: _t->_aspectRatioChanged(); break;
        case 22: _t->_communicationLostChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->startVideo(); break;
        case 24: _t->stopVideo(); break;
        case 25: _t->startRecording((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->startRecording(); break;
        case 27: _t->stopRecording(); break;
        case 28: _t->grabImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->grabImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::hasVideoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::isGStreamerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::isUvcChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::uvcVideoSourceIDChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::fullScreenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::isAutoStreamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::aspectRatioChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::autoStreamConfiguredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::imageFileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::streamingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::decodingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::recordingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::recordingStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (_t _q_method = &VideoManager::videoSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VideoManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isGStreamer(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isUvc(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->uvcVideoSourceID(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->uvcEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->fullScreen(); break;
        case 6: *reinterpret_cast< VideoReceiver**>(_v) = _t->videoReceiver(); break;
        case 7: *reinterpret_cast< VideoReceiver**>(_v) = _t->thermalVideoReceiver(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->aspectRatio(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->thermalAspectRatio(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->hfov(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->thermalHfov(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->autoStreamConfigured(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->hasThermal(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->imageFile(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->streaming(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->decoding(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->recording(); break;
        case 18: *reinterpret_cast< QSize*>(_v) = _t->videoSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VideoManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setfullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VideoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVideoManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int VideoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void VideoManager::hasVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoManager::isGStreamerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoManager::isUvcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoManager::uvcVideoSourceIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VideoManager::fullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VideoManager::isAutoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VideoManager::aspectRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VideoManager::autoStreamConfiguredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void VideoManager::imageFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void VideoManager::streamingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void VideoManager::decodingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void VideoManager::recordingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void VideoManager::recordingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void VideoManager::videoSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
