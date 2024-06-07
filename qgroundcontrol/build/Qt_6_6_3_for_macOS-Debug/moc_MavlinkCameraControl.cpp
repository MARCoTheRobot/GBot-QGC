/****************************************************************************
** Meta object code from reading C++ file 'MavlinkCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Camera/MavlinkCameraControl.h"
#include "QmlObjectListModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MavlinkCameraControl.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS = QtMocHelpers::stringData(
    "QGCVideoStreamInfo",
    "infoChanged",
    "",
    "uri",
    "name",
    "streamID",
    "type",
    "aspectRatio",
    "hfov",
    "isThermal"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[12];
    char stringdata8[5];
    char stringdata9[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS_t qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QGCVideoStreamInfo"
        QT_MOC_LITERAL(19, 11),  // "infoChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 3),  // "uri"
        QT_MOC_LITERAL(36, 4),  // "name"
        QT_MOC_LITERAL(41, 8),  // "streamID"
        QT_MOC_LITERAL(50, 4),  // "type"
        QT_MOC_LITERAL(55, 11),  // "aspectRatio"
        QT_MOC_LITERAL(67, 4),  // "hfov"
        QT_MOC_LITERAL(72, 9)   // "isThermal"
    },
    "QGCVideoStreamInfo",
    "infoChanged",
    "",
    "uri",
    "name",
    "streamID",
    "type",
    "aspectRatio",
    "hfov",
    "isThermal"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCVideoStreamInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015001, uint(0), 0,
       4, QMetaType::QString, 0x00015001, uint(0), 0,
       5, QMetaType::Int, 0x00015001, uint(0), 0,
       6, QMetaType::Int, 0x00015001, uint(0), 0,
       7, QMetaType::QReal, 0x00015001, uint(0), 0,
       8, QMetaType::QReal, 0x00015001, uint(0), 0,
       9, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCVideoStreamInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCVideoStreamInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS_t,
        // property 'uri'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'streamID'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'aspectRatio'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'hfov'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'isThermal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCVideoStreamInfo, std::true_type>,
        // method 'infoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCVideoStreamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->infoChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCVideoStreamInfo::*)();
            if (_t _q_method = &QGCVideoStreamInfo::infoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->streamID(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->hfov(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isThermal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QGCVideoStreamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCVideoStreamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCVideoStreamInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCVideoStreamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGCVideoStreamInfo::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS = QtMocHelpers::stringData(
    "MavlinkCameraControl",
    "infoChanged",
    "",
    "videoCaptureStatusChanged",
    "photoCaptureStatusChanged",
    "photoCaptureModeChanged",
    "photoLapseChanged",
    "photoLapseCountChanged",
    "cameraModeChanged",
    "activeSettingsChanged",
    "storageFreeChanged",
    "storageTotalChanged",
    "batteryRemainingChanged",
    "dataReady",
    "data",
    "parametersReady",
    "zoomLevelChanged",
    "focusLevelChanged",
    "streamsChanged",
    "currentStreamChanged",
    "thermalStreamChanged",
    "autoStreamChanged",
    "recordTimeChanged",
    "streamLabelsChanged",
    "trackingEnabledChanged",
    "trackingImageStatusChanged",
    "thermalModeChanged",
    "thermalOpacityChanged",
    "storageStatusChanged",
    "_paramDone",
    "setCameraModeVideo",
    "setCameraModePhoto",
    "toggleCameraMode",
    "takePhoto",
    "stopTakePhoto",
    "startVideoRecording",
    "stopVideoRecording",
    "toggleVideoRecording",
    "resetSettings",
    "formatCard",
    "id",
    "stepZoom",
    "direction",
    "startZoom",
    "stopZoom",
    "stopStream",
    "resumeStream",
    "startTracking",
    "rec",
    "point",
    "radius",
    "stopTracking",
    "version",
    "modelName",
    "vendor",
    "firmwareVersion",
    "focalLength",
    "sensorSize",
    "resolution",
    "capturesVideo",
    "capturesPhotos",
    "hasModes",
    "hasZoom",
    "hasFocus",
    "hasVideoStream",
    "hasTracking",
    "photosInVideoMode",
    "videoInPhotoMode",
    "isBasic",
    "storageFree",
    "storageFreeStr",
    "storageTotal",
    "batteryRemaining",
    "batteryRemainingStr",
    "paramComplete",
    "zoomLevel",
    "focusLevel",
    "activeSettings",
    "videoCaptureStatus",
    "VideoCaptureStatus",
    "photoCaptureStatus",
    "PhotoCaptureStatus",
    "cameraMode",
    "CameraMode",
    "storageStatus",
    "StorageStatus",
    "photoLapse",
    "photoLapseCount",
    "photoCaptureMode",
    "PhotoCaptureMode",
    "currentStream",
    "autoStream",
    "streams",
    "QmlObjectListModel*",
    "currentStreamInstance",
    "QGCVideoStreamInfo*",
    "thermalStreamInstance",
    "recordTime",
    "recordTimeStr",
    "streamLabels",
    "thermalMode",
    "ThermalViewMode",
    "thermalOpacity",
    "trackingEnabled",
    "trackingStatus",
    "TrackingStatus",
    "trackingImageStatus",
    "trackingImageRect",
    "exposureMode",
    "Fact*",
    "ev",
    "iso",
    "shutterSpeed",
    "aperture",
    "wb",
    "mode",
    "CAM_MODE_UNDEFINED",
    "CAM_MODE_PHOTO",
    "CAM_MODE_VIDEO",
    "CAM_MODE_SURVEY",
    "VIDEO_CAPTURE_STATUS_STOPPED",
    "VIDEO_CAPTURE_STATUS_RUNNING",
    "VIDEO_CAPTURE_STATUS_LAST",
    "VIDEO_CAPTURE_STATUS_UNDEFINED",
    "PHOTO_CAPTURE_IDLE",
    "PHOTO_CAPTURE_IN_PROGRESS",
    "PHOTO_CAPTURE_INTERVAL_IDLE",
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS",
    "PHOTO_CAPTURE_LAST",
    "PHOTO_CAPTURE_STATUS_UNDEFINED",
    "PHOTO_CAPTURE_SINGLE",
    "PHOTO_CAPTURE_TIMELAPSE",
    "STORAGE_EMPTY",
    "STORAGE_UNFORMATTED",
    "STORAGE_READY",
    "STORAGE_NOT_SUPPORTED",
    "THERMAL_OFF",
    "THERMAL_BLEND",
    "THERMAL_FULL",
    "THERMAL_PIP",
    "TRACKING_UNKNOWN",
    "TRACKING_SUPPORTED",
    "TRACKING_ENABLED",
    "TRACKING_RECTANGLE",
    "TRACKING_POINT"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS_t {
    uint offsetsAndSizes[290];
    char stringdata0[21];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[26];
    char stringdata5[24];
    char stringdata6[18];
    char stringdata7[23];
    char stringdata8[18];
    char stringdata9[22];
    char stringdata10[19];
    char stringdata11[20];
    char stringdata12[24];
    char stringdata13[10];
    char stringdata14[5];
    char stringdata15[16];
    char stringdata16[17];
    char stringdata17[18];
    char stringdata18[15];
    char stringdata19[21];
    char stringdata20[21];
    char stringdata21[18];
    char stringdata22[18];
    char stringdata23[20];
    char stringdata24[23];
    char stringdata25[27];
    char stringdata26[19];
    char stringdata27[22];
    char stringdata28[21];
    char stringdata29[11];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[17];
    char stringdata33[10];
    char stringdata34[14];
    char stringdata35[20];
    char stringdata36[19];
    char stringdata37[21];
    char stringdata38[14];
    char stringdata39[11];
    char stringdata40[3];
    char stringdata41[9];
    char stringdata42[10];
    char stringdata43[10];
    char stringdata44[9];
    char stringdata45[11];
    char stringdata46[13];
    char stringdata47[14];
    char stringdata48[4];
    char stringdata49[6];
    char stringdata50[7];
    char stringdata51[13];
    char stringdata52[8];
    char stringdata53[10];
    char stringdata54[7];
    char stringdata55[16];
    char stringdata56[12];
    char stringdata57[11];
    char stringdata58[11];
    char stringdata59[14];
    char stringdata60[15];
    char stringdata61[9];
    char stringdata62[8];
    char stringdata63[9];
    char stringdata64[15];
    char stringdata65[12];
    char stringdata66[18];
    char stringdata67[17];
    char stringdata68[8];
    char stringdata69[12];
    char stringdata70[15];
    char stringdata71[13];
    char stringdata72[17];
    char stringdata73[20];
    char stringdata74[14];
    char stringdata75[10];
    char stringdata76[11];
    char stringdata77[15];
    char stringdata78[19];
    char stringdata79[19];
    char stringdata80[19];
    char stringdata81[19];
    char stringdata82[11];
    char stringdata83[11];
    char stringdata84[14];
    char stringdata85[14];
    char stringdata86[11];
    char stringdata87[16];
    char stringdata88[17];
    char stringdata89[17];
    char stringdata90[14];
    char stringdata91[11];
    char stringdata92[8];
    char stringdata93[20];
    char stringdata94[22];
    char stringdata95[20];
    char stringdata96[22];
    char stringdata97[11];
    char stringdata98[14];
    char stringdata99[13];
    char stringdata100[12];
    char stringdata101[16];
    char stringdata102[15];
    char stringdata103[16];
    char stringdata104[15];
    char stringdata105[15];
    char stringdata106[20];
    char stringdata107[18];
    char stringdata108[13];
    char stringdata109[6];
    char stringdata110[3];
    char stringdata111[4];
    char stringdata112[13];
    char stringdata113[9];
    char stringdata114[3];
    char stringdata115[5];
    char stringdata116[19];
    char stringdata117[15];
    char stringdata118[15];
    char stringdata119[16];
    char stringdata120[29];
    char stringdata121[29];
    char stringdata122[26];
    char stringdata123[31];
    char stringdata124[19];
    char stringdata125[26];
    char stringdata126[28];
    char stringdata127[35];
    char stringdata128[19];
    char stringdata129[31];
    char stringdata130[21];
    char stringdata131[24];
    char stringdata132[14];
    char stringdata133[20];
    char stringdata134[14];
    char stringdata135[22];
    char stringdata136[12];
    char stringdata137[14];
    char stringdata138[13];
    char stringdata139[12];
    char stringdata140[17];
    char stringdata141[19];
    char stringdata142[17];
    char stringdata143[19];
    char stringdata144[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS_t qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "MavlinkCameraControl"
        QT_MOC_LITERAL(21, 11),  // "infoChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 25),  // "videoCaptureStatusChanged"
        QT_MOC_LITERAL(60, 25),  // "photoCaptureStatusChanged"
        QT_MOC_LITERAL(86, 23),  // "photoCaptureModeChanged"
        QT_MOC_LITERAL(110, 17),  // "photoLapseChanged"
        QT_MOC_LITERAL(128, 22),  // "photoLapseCountChanged"
        QT_MOC_LITERAL(151, 17),  // "cameraModeChanged"
        QT_MOC_LITERAL(169, 21),  // "activeSettingsChanged"
        QT_MOC_LITERAL(191, 18),  // "storageFreeChanged"
        QT_MOC_LITERAL(210, 19),  // "storageTotalChanged"
        QT_MOC_LITERAL(230, 23),  // "batteryRemainingChanged"
        QT_MOC_LITERAL(254, 9),  // "dataReady"
        QT_MOC_LITERAL(264, 4),  // "data"
        QT_MOC_LITERAL(269, 15),  // "parametersReady"
        QT_MOC_LITERAL(285, 16),  // "zoomLevelChanged"
        QT_MOC_LITERAL(302, 17),  // "focusLevelChanged"
        QT_MOC_LITERAL(320, 14),  // "streamsChanged"
        QT_MOC_LITERAL(335, 20),  // "currentStreamChanged"
        QT_MOC_LITERAL(356, 20),  // "thermalStreamChanged"
        QT_MOC_LITERAL(377, 17),  // "autoStreamChanged"
        QT_MOC_LITERAL(395, 17),  // "recordTimeChanged"
        QT_MOC_LITERAL(413, 19),  // "streamLabelsChanged"
        QT_MOC_LITERAL(433, 22),  // "trackingEnabledChanged"
        QT_MOC_LITERAL(456, 26),  // "trackingImageStatusChanged"
        QT_MOC_LITERAL(483, 18),  // "thermalModeChanged"
        QT_MOC_LITERAL(502, 21),  // "thermalOpacityChanged"
        QT_MOC_LITERAL(524, 20),  // "storageStatusChanged"
        QT_MOC_LITERAL(545, 10),  // "_paramDone"
        QT_MOC_LITERAL(556, 18),  // "setCameraModeVideo"
        QT_MOC_LITERAL(575, 18),  // "setCameraModePhoto"
        QT_MOC_LITERAL(594, 16),  // "toggleCameraMode"
        QT_MOC_LITERAL(611, 9),  // "takePhoto"
        QT_MOC_LITERAL(621, 13),  // "stopTakePhoto"
        QT_MOC_LITERAL(635, 19),  // "startVideoRecording"
        QT_MOC_LITERAL(655, 18),  // "stopVideoRecording"
        QT_MOC_LITERAL(674, 20),  // "toggleVideoRecording"
        QT_MOC_LITERAL(695, 13),  // "resetSettings"
        QT_MOC_LITERAL(709, 10),  // "formatCard"
        QT_MOC_LITERAL(720, 2),  // "id"
        QT_MOC_LITERAL(723, 8),  // "stepZoom"
        QT_MOC_LITERAL(732, 9),  // "direction"
        QT_MOC_LITERAL(742, 9),  // "startZoom"
        QT_MOC_LITERAL(752, 8),  // "stopZoom"
        QT_MOC_LITERAL(761, 10),  // "stopStream"
        QT_MOC_LITERAL(772, 12),  // "resumeStream"
        QT_MOC_LITERAL(785, 13),  // "startTracking"
        QT_MOC_LITERAL(799, 3),  // "rec"
        QT_MOC_LITERAL(803, 5),  // "point"
        QT_MOC_LITERAL(809, 6),  // "radius"
        QT_MOC_LITERAL(816, 12),  // "stopTracking"
        QT_MOC_LITERAL(829, 7),  // "version"
        QT_MOC_LITERAL(837, 9),  // "modelName"
        QT_MOC_LITERAL(847, 6),  // "vendor"
        QT_MOC_LITERAL(854, 15),  // "firmwareVersion"
        QT_MOC_LITERAL(870, 11),  // "focalLength"
        QT_MOC_LITERAL(882, 10),  // "sensorSize"
        QT_MOC_LITERAL(893, 10),  // "resolution"
        QT_MOC_LITERAL(904, 13),  // "capturesVideo"
        QT_MOC_LITERAL(918, 14),  // "capturesPhotos"
        QT_MOC_LITERAL(933, 8),  // "hasModes"
        QT_MOC_LITERAL(942, 7),  // "hasZoom"
        QT_MOC_LITERAL(950, 8),  // "hasFocus"
        QT_MOC_LITERAL(959, 14),  // "hasVideoStream"
        QT_MOC_LITERAL(974, 11),  // "hasTracking"
        QT_MOC_LITERAL(986, 17),  // "photosInVideoMode"
        QT_MOC_LITERAL(1004, 16),  // "videoInPhotoMode"
        QT_MOC_LITERAL(1021, 7),  // "isBasic"
        QT_MOC_LITERAL(1029, 11),  // "storageFree"
        QT_MOC_LITERAL(1041, 14),  // "storageFreeStr"
        QT_MOC_LITERAL(1056, 12),  // "storageTotal"
        QT_MOC_LITERAL(1069, 16),  // "batteryRemaining"
        QT_MOC_LITERAL(1086, 19),  // "batteryRemainingStr"
        QT_MOC_LITERAL(1106, 13),  // "paramComplete"
        QT_MOC_LITERAL(1120, 9),  // "zoomLevel"
        QT_MOC_LITERAL(1130, 10),  // "focusLevel"
        QT_MOC_LITERAL(1141, 14),  // "activeSettings"
        QT_MOC_LITERAL(1156, 18),  // "videoCaptureStatus"
        QT_MOC_LITERAL(1175, 18),  // "VideoCaptureStatus"
        QT_MOC_LITERAL(1194, 18),  // "photoCaptureStatus"
        QT_MOC_LITERAL(1213, 18),  // "PhotoCaptureStatus"
        QT_MOC_LITERAL(1232, 10),  // "cameraMode"
        QT_MOC_LITERAL(1243, 10),  // "CameraMode"
        QT_MOC_LITERAL(1254, 13),  // "storageStatus"
        QT_MOC_LITERAL(1268, 13),  // "StorageStatus"
        QT_MOC_LITERAL(1282, 10),  // "photoLapse"
        QT_MOC_LITERAL(1293, 15),  // "photoLapseCount"
        QT_MOC_LITERAL(1309, 16),  // "photoCaptureMode"
        QT_MOC_LITERAL(1326, 16),  // "PhotoCaptureMode"
        QT_MOC_LITERAL(1343, 13),  // "currentStream"
        QT_MOC_LITERAL(1357, 10),  // "autoStream"
        QT_MOC_LITERAL(1368, 7),  // "streams"
        QT_MOC_LITERAL(1376, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(1396, 21),  // "currentStreamInstance"
        QT_MOC_LITERAL(1418, 19),  // "QGCVideoStreamInfo*"
        QT_MOC_LITERAL(1438, 21),  // "thermalStreamInstance"
        QT_MOC_LITERAL(1460, 10),  // "recordTime"
        QT_MOC_LITERAL(1471, 13),  // "recordTimeStr"
        QT_MOC_LITERAL(1485, 12),  // "streamLabels"
        QT_MOC_LITERAL(1498, 11),  // "thermalMode"
        QT_MOC_LITERAL(1510, 15),  // "ThermalViewMode"
        QT_MOC_LITERAL(1526, 14),  // "thermalOpacity"
        QT_MOC_LITERAL(1541, 15),  // "trackingEnabled"
        QT_MOC_LITERAL(1557, 14),  // "trackingStatus"
        QT_MOC_LITERAL(1572, 14),  // "TrackingStatus"
        QT_MOC_LITERAL(1587, 19),  // "trackingImageStatus"
        QT_MOC_LITERAL(1607, 17),  // "trackingImageRect"
        QT_MOC_LITERAL(1625, 12),  // "exposureMode"
        QT_MOC_LITERAL(1638, 5),  // "Fact*"
        QT_MOC_LITERAL(1644, 2),  // "ev"
        QT_MOC_LITERAL(1647, 3),  // "iso"
        QT_MOC_LITERAL(1651, 12),  // "shutterSpeed"
        QT_MOC_LITERAL(1664, 8),  // "aperture"
        QT_MOC_LITERAL(1673, 2),  // "wb"
        QT_MOC_LITERAL(1676, 4),  // "mode"
        QT_MOC_LITERAL(1681, 18),  // "CAM_MODE_UNDEFINED"
        QT_MOC_LITERAL(1700, 14),  // "CAM_MODE_PHOTO"
        QT_MOC_LITERAL(1715, 14),  // "CAM_MODE_VIDEO"
        QT_MOC_LITERAL(1730, 15),  // "CAM_MODE_SURVEY"
        QT_MOC_LITERAL(1746, 28),  // "VIDEO_CAPTURE_STATUS_STOPPED"
        QT_MOC_LITERAL(1775, 28),  // "VIDEO_CAPTURE_STATUS_RUNNING"
        QT_MOC_LITERAL(1804, 25),  // "VIDEO_CAPTURE_STATUS_LAST"
        QT_MOC_LITERAL(1830, 30),  // "VIDEO_CAPTURE_STATUS_UNDEFINED"
        QT_MOC_LITERAL(1861, 18),  // "PHOTO_CAPTURE_IDLE"
        QT_MOC_LITERAL(1880, 25),  // "PHOTO_CAPTURE_IN_PROGRESS"
        QT_MOC_LITERAL(1906, 27),  // "PHOTO_CAPTURE_INTERVAL_IDLE"
        QT_MOC_LITERAL(1934, 34),  // "PHOTO_CAPTURE_INTERVAL_IN_PRO..."
        QT_MOC_LITERAL(1969, 18),  // "PHOTO_CAPTURE_LAST"
        QT_MOC_LITERAL(1988, 30),  // "PHOTO_CAPTURE_STATUS_UNDEFINED"
        QT_MOC_LITERAL(2019, 20),  // "PHOTO_CAPTURE_SINGLE"
        QT_MOC_LITERAL(2040, 23),  // "PHOTO_CAPTURE_TIMELAPSE"
        QT_MOC_LITERAL(2064, 13),  // "STORAGE_EMPTY"
        QT_MOC_LITERAL(2078, 19),  // "STORAGE_UNFORMATTED"
        QT_MOC_LITERAL(2098, 13),  // "STORAGE_READY"
        QT_MOC_LITERAL(2112, 21),  // "STORAGE_NOT_SUPPORTED"
        QT_MOC_LITERAL(2134, 11),  // "THERMAL_OFF"
        QT_MOC_LITERAL(2146, 13),  // "THERMAL_BLEND"
        QT_MOC_LITERAL(2160, 12),  // "THERMAL_FULL"
        QT_MOC_LITERAL(2173, 11),  // "THERMAL_PIP"
        QT_MOC_LITERAL(2185, 16),  // "TRACKING_UNKNOWN"
        QT_MOC_LITERAL(2202, 18),  // "TRACKING_SUPPORTED"
        QT_MOC_LITERAL(2221, 16),  // "TRACKING_ENABLED"
        QT_MOC_LITERAL(2238, 18),  // "TRACKING_RECTANGLE"
        QT_MOC_LITERAL(2257, 14)   // "TRACKING_POINT"
    },
    "MavlinkCameraControl",
    "infoChanged",
    "",
    "videoCaptureStatusChanged",
    "photoCaptureStatusChanged",
    "photoCaptureModeChanged",
    "photoLapseChanged",
    "photoLapseCountChanged",
    "cameraModeChanged",
    "activeSettingsChanged",
    "storageFreeChanged",
    "storageTotalChanged",
    "batteryRemainingChanged",
    "dataReady",
    "data",
    "parametersReady",
    "zoomLevelChanged",
    "focusLevelChanged",
    "streamsChanged",
    "currentStreamChanged",
    "thermalStreamChanged",
    "autoStreamChanged",
    "recordTimeChanged",
    "streamLabelsChanged",
    "trackingEnabledChanged",
    "trackingImageStatusChanged",
    "thermalModeChanged",
    "thermalOpacityChanged",
    "storageStatusChanged",
    "_paramDone",
    "setCameraModeVideo",
    "setCameraModePhoto",
    "toggleCameraMode",
    "takePhoto",
    "stopTakePhoto",
    "startVideoRecording",
    "stopVideoRecording",
    "toggleVideoRecording",
    "resetSettings",
    "formatCard",
    "id",
    "stepZoom",
    "direction",
    "startZoom",
    "stopZoom",
    "stopStream",
    "resumeStream",
    "startTracking",
    "rec",
    "point",
    "radius",
    "stopTracking",
    "version",
    "modelName",
    "vendor",
    "firmwareVersion",
    "focalLength",
    "sensorSize",
    "resolution",
    "capturesVideo",
    "capturesPhotos",
    "hasModes",
    "hasZoom",
    "hasFocus",
    "hasVideoStream",
    "hasTracking",
    "photosInVideoMode",
    "videoInPhotoMode",
    "isBasic",
    "storageFree",
    "storageFreeStr",
    "storageTotal",
    "batteryRemaining",
    "batteryRemainingStr",
    "paramComplete",
    "zoomLevel",
    "focusLevel",
    "activeSettings",
    "videoCaptureStatus",
    "VideoCaptureStatus",
    "photoCaptureStatus",
    "PhotoCaptureStatus",
    "cameraMode",
    "CameraMode",
    "storageStatus",
    "StorageStatus",
    "photoLapse",
    "photoLapseCount",
    "photoCaptureMode",
    "PhotoCaptureMode",
    "currentStream",
    "autoStream",
    "streams",
    "QmlObjectListModel*",
    "currentStreamInstance",
    "QGCVideoStreamInfo*",
    "thermalStreamInstance",
    "recordTime",
    "recordTimeStr",
    "streamLabels",
    "thermalMode",
    "ThermalViewMode",
    "thermalOpacity",
    "trackingEnabled",
    "trackingStatus",
    "TrackingStatus",
    "trackingImageStatus",
    "trackingImageRect",
    "exposureMode",
    "Fact*",
    "ev",
    "iso",
    "shutterSpeed",
    "aperture",
    "wb",
    "mode",
    "CAM_MODE_UNDEFINED",
    "CAM_MODE_PHOTO",
    "CAM_MODE_VIDEO",
    "CAM_MODE_SURVEY",
    "VIDEO_CAPTURE_STATUS_STOPPED",
    "VIDEO_CAPTURE_STATUS_RUNNING",
    "VIDEO_CAPTURE_STATUS_LAST",
    "VIDEO_CAPTURE_STATUS_UNDEFINED",
    "PHOTO_CAPTURE_IDLE",
    "PHOTO_CAPTURE_IN_PROGRESS",
    "PHOTO_CAPTURE_INTERVAL_IDLE",
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS",
    "PHOTO_CAPTURE_LAST",
    "PHOTO_CAPTURE_STATUS_UNDEFINED",
    "PHOTO_CAPTURE_SINGLE",
    "PHOTO_CAPTURE_TIMELAPSE",
    "STORAGE_EMPTY",
    "STORAGE_UNFORMATTED",
    "STORAGE_READY",
    "STORAGE_NOT_SUPPORTED",
    "THERMAL_OFF",
    "THERMAL_BLEND",
    "THERMAL_FULL",
    "THERMAL_PIP",
    "TRACKING_UNKNOWN",
    "TRACKING_SUPPORTED",
    "TRACKING_ENABLED",
    "TRACKING_RECTANGLE",
    "TRACKING_POINT"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMavlinkCameraControlENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
      54,  350, // properties
       7,  620, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  290,    2, 0x06,   62 /* Public */,
       3,    0,  291,    2, 0x06,   63 /* Public */,
       4,    0,  292,    2, 0x06,   64 /* Public */,
       5,    0,  293,    2, 0x06,   65 /* Public */,
       6,    0,  294,    2, 0x06,   66 /* Public */,
       7,    0,  295,    2, 0x06,   67 /* Public */,
       8,    0,  296,    2, 0x06,   68 /* Public */,
       9,    0,  297,    2, 0x06,   69 /* Public */,
      10,    0,  298,    2, 0x06,   70 /* Public */,
      11,    0,  299,    2, 0x06,   71 /* Public */,
      12,    0,  300,    2, 0x06,   72 /* Public */,
      13,    1,  301,    2, 0x06,   73 /* Public */,
      15,    0,  304,    2, 0x06,   75 /* Public */,
      16,    0,  305,    2, 0x06,   76 /* Public */,
      17,    0,  306,    2, 0x06,   77 /* Public */,
      18,    0,  307,    2, 0x06,   78 /* Public */,
      19,    0,  308,    2, 0x06,   79 /* Public */,
      20,    0,  309,    2, 0x06,   80 /* Public */,
      21,    0,  310,    2, 0x06,   81 /* Public */,
      22,    0,  311,    2, 0x06,   82 /* Public */,
      23,    0,  312,    2, 0x06,   83 /* Public */,
      24,    0,  313,    2, 0x06,   84 /* Public */,
      25,    0,  314,    2, 0x06,   85 /* Public */,
      26,    0,  315,    2, 0x06,   86 /* Public */,
      27,    0,  316,    2, 0x06,   87 /* Public */,
      28,    0,  317,    2, 0x06,   88 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    0,  318,    2, 0x09,   89 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      30,    0,  319,    2, 0x02,   90 /* Public */,
      31,    0,  320,    2, 0x02,   91 /* Public */,
      32,    0,  321,    2, 0x02,   92 /* Public */,
      33,    0,  322,    2, 0x02,   93 /* Public */,
      34,    0,  323,    2, 0x02,   94 /* Public */,
      35,    0,  324,    2, 0x02,   95 /* Public */,
      36,    0,  325,    2, 0x02,   96 /* Public */,
      37,    0,  326,    2, 0x02,   97 /* Public */,
      38,    0,  327,    2, 0x02,   98 /* Public */,
      39,    1,  328,    2, 0x02,   99 /* Public */,
      39,    0,  331,    2, 0x22,  101 /* Public | MethodCloned */,
      41,    1,  332,    2, 0x02,  102 /* Public */,
      43,    1,  335,    2, 0x02,  104 /* Public */,
      44,    0,  338,    2, 0x02,  106 /* Public */,
      45,    0,  339,    2, 0x02,  107 /* Public */,
      46,    0,  340,    2, 0x02,  108 /* Public */,
      47,    1,  341,    2, 0x02,  109 /* Public */,
      47,    2,  344,    2, 0x02,  111 /* Public */,
      51,    0,  349,    2, 0x02,  114 /* Public */,

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
    QMetaType::Void, QMetaType::QByteArray,   14,
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

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   48,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Double,   49,   50,
    QMetaType::Void,

 // properties: name, type, flags
      52, QMetaType::Int, 0x00015001, uint(0), 0,
      53, QMetaType::QString, 0x00015001, uint(0), 0,
      54, QMetaType::QString, 0x00015001, uint(0), 0,
      55, QMetaType::QString, 0x00015001, uint(0), 0,
      56, QMetaType::QReal, 0x00015001, uint(0), 0,
      57, QMetaType::QSizeF, 0x00015001, uint(0), 0,
      58, QMetaType::QSize, 0x00015001, uint(0), 0,
      59, QMetaType::Bool, 0x00015001, uint(0), 0,
      60, QMetaType::Bool, 0x00015001, uint(0), 0,
      61, QMetaType::Bool, 0x00015001, uint(0), 0,
      62, QMetaType::Bool, 0x00015001, uint(0), 0,
      63, QMetaType::Bool, 0x00015001, uint(0), 0,
      64, QMetaType::Bool, 0x00015001, uint(0), 0,
      65, QMetaType::Bool, 0x00015001, uint(0), 0,
      66, QMetaType::Bool, 0x00015001, uint(0), 0,
      67, QMetaType::Bool, 0x00015001, uint(0), 0,
      68, QMetaType::Bool, 0x00015001, uint(0), 0,
      69, QMetaType::UInt, 0x00015001, uint(8), 0,
      70, QMetaType::QString, 0x00015001, uint(8), 0,
      71, QMetaType::UInt, 0x00015001, uint(9), 0,
      72, QMetaType::Int, 0x00015001, uint(10), 0,
      73, QMetaType::QString, 0x00015001, uint(10), 0,
      74, QMetaType::Bool, 0x00015001, uint(12), 0,
      75, QMetaType::QReal, 0x00015103, uint(13), 0,
      76, QMetaType::QReal, 0x00015103, uint(14), 0,
      77, QMetaType::QStringList, 0x00015001, uint(7), 0,
      78, 0x80000000 | 79, 0x00015009, uint(1), 0,
      80, 0x80000000 | 81, 0x00015009, uint(2), 0,
      82, 0x80000000 | 83, 0x0001510b, uint(6), 0,
      84, 0x80000000 | 85, 0x00015009, uint(25), 0,
      86, QMetaType::QReal, 0x00015103, uint(4), 0,
      87, QMetaType::Int, 0x00015103, uint(5), 0,
      88, 0x80000000 | 89, 0x0001510b, uint(3), 0,
      90, QMetaType::Int, 0x00015103, uint(16), 0,
      91, QMetaType::Bool, 0x00015001, uint(18), 0,
      92, 0x80000000 | 93, 0x00015009, uint(15), 0,
      94, 0x80000000 | 95, 0x00015009, uint(16), 0,
      96, 0x80000000 | 95, 0x00015009, uint(17), 0,
      97, QMetaType::UInt, 0x00015001, uint(19), 0,
      98, QMetaType::QString, 0x00015001, uint(19), 0,
      99, QMetaType::QStringList, 0x00015001, uint(20), 0,
     100, 0x80000000 | 101, 0x0001510b, uint(23), 0,
     102, QMetaType::Double, 0x00015103, uint(24), 0,
     103, QMetaType::Bool, 0x00015103, uint(21), 0,
     104, 0x80000000 | 105, 0x00015409, uint(-1), 0,
     106, QMetaType::Bool, 0x00015001, uint(22), 0,
     107, QMetaType::QRectF, 0x00015001, uint(22), 0,
     108, 0x80000000 | 109, 0x00015009, uint(12), 0,
     110, 0x80000000 | 109, 0x00015009, uint(12), 0,
     111, 0x80000000 | 109, 0x00015009, uint(12), 0,
     112, 0x80000000 | 109, 0x00015009, uint(12), 0,
     113, 0x80000000 | 109, 0x00015009, uint(12), 0,
     114, 0x80000000 | 109, 0x00015009, uint(12), 0,
     115, 0x80000000 | 109, 0x00015009, uint(12), 0,

 // enums: name, alias, flags, count, data
      83,   83, 0x0,    4,  655,
      79,   79, 0x0,    4,  663,
      81,   81, 0x0,    6,  671,
      89,   89, 0x0,    2,  683,
      85,   85, 0x0,    4,  687,
     101,  101, 0x0,    4,  695,
     105,  105, 0x0,    5,  703,

 // enum data: key, value
     116, uint(MavlinkCameraControl::CAM_MODE_UNDEFINED),
     117, uint(MavlinkCameraControl::CAM_MODE_PHOTO),
     118, uint(MavlinkCameraControl::CAM_MODE_VIDEO),
     119, uint(MavlinkCameraControl::CAM_MODE_SURVEY),
     120, uint(MavlinkCameraControl::VIDEO_CAPTURE_STATUS_STOPPED),
     121, uint(MavlinkCameraControl::VIDEO_CAPTURE_STATUS_RUNNING),
     122, uint(MavlinkCameraControl::VIDEO_CAPTURE_STATUS_LAST),
     123, uint(MavlinkCameraControl::VIDEO_CAPTURE_STATUS_UNDEFINED),
     124, uint(MavlinkCameraControl::PHOTO_CAPTURE_IDLE),
     125, uint(MavlinkCameraControl::PHOTO_CAPTURE_IN_PROGRESS),
     126, uint(MavlinkCameraControl::PHOTO_CAPTURE_INTERVAL_IDLE),
     127, uint(MavlinkCameraControl::PHOTO_CAPTURE_INTERVAL_IN_PROGRESS),
     128, uint(MavlinkCameraControl::PHOTO_CAPTURE_LAST),
     129, uint(MavlinkCameraControl::PHOTO_CAPTURE_STATUS_UNDEFINED),
     130, uint(MavlinkCameraControl::PHOTO_CAPTURE_SINGLE),
     131, uint(MavlinkCameraControl::PHOTO_CAPTURE_TIMELAPSE),
     132, uint(MavlinkCameraControl::STORAGE_EMPTY),
     133, uint(MavlinkCameraControl::STORAGE_UNFORMATTED),
     134, uint(MavlinkCameraControl::STORAGE_READY),
     135, uint(MavlinkCameraControl::STORAGE_NOT_SUPPORTED),
     136, uint(MavlinkCameraControl::THERMAL_OFF),
     137, uint(MavlinkCameraControl::THERMAL_BLEND),
     138, uint(MavlinkCameraControl::THERMAL_FULL),
     139, uint(MavlinkCameraControl::THERMAL_PIP),
     140, uint(MavlinkCameraControl::TRACKING_UNKNOWN),
     141, uint(MavlinkCameraControl::TRACKING_SUPPORTED),
     142, uint(MavlinkCameraControl::TRACKING_ENABLED),
     143, uint(MavlinkCameraControl::TRACKING_RECTANGLE),
     144, uint(MavlinkCameraControl::TRACKING_POINT),

       0        // eod
};

Q_CONSTINIT const QMetaObject MavlinkCameraControl::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMavlinkCameraControlENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS_t,
        // property 'version'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'modelName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vendor'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'firmwareVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'focalLength'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'sensorSize'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'resolution'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'capturesVideo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'capturesPhotos'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasModes'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasZoom'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasVideoStream'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasTracking'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'photosInVideoMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'videoInPhotoMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isBasic'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'storageFree'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'storageFreeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'storageTotal'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'batteryRemaining'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'batteryRemainingStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'paramComplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'zoomLevel'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'focusLevel'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'activeSettings'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'videoCaptureStatus'
        QtPrivate::TypeAndForceComplete<VideoCaptureStatus, std::true_type>,
        // property 'photoCaptureStatus'
        QtPrivate::TypeAndForceComplete<PhotoCaptureStatus, std::true_type>,
        // property 'cameraMode'
        QtPrivate::TypeAndForceComplete<CameraMode, std::true_type>,
        // property 'storageStatus'
        QtPrivate::TypeAndForceComplete<StorageStatus, std::true_type>,
        // property 'photoLapse'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'photoLapseCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'photoCaptureMode'
        QtPrivate::TypeAndForceComplete<PhotoCaptureMode, std::true_type>,
        // property 'currentStream'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autoStream'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'streams'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'currentStreamInstance'
        QtPrivate::TypeAndForceComplete<QGCVideoStreamInfo*, std::true_type>,
        // property 'thermalStreamInstance'
        QtPrivate::TypeAndForceComplete<QGCVideoStreamInfo*, std::true_type>,
        // property 'recordTime'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'recordTimeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'streamLabels'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'thermalMode'
        QtPrivate::TypeAndForceComplete<ThermalViewMode, std::true_type>,
        // property 'thermalOpacity'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'trackingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'trackingStatus'
        QtPrivate::TypeAndForceComplete<TrackingStatus, std::true_type>,
        // property 'trackingImageStatus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'trackingImageRect'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'exposureMode'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'ev'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'iso'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'shutterSpeed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'aperture'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'wb'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'mode'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // enum 'CameraMode'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::CameraMode, std::true_type>,
        // enum 'VideoCaptureStatus'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::VideoCaptureStatus, std::true_type>,
        // enum 'PhotoCaptureStatus'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::PhotoCaptureStatus, std::true_type>,
        // enum 'PhotoCaptureMode'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::PhotoCaptureMode, std::true_type>,
        // enum 'StorageStatus'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::StorageStatus, std::true_type>,
        // enum 'ThermalViewMode'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::ThermalViewMode, std::true_type>,
        // enum 'TrackingStatus'
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl::TrackingStatus, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MavlinkCameraControl, std::true_type>,
        // method 'infoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'videoCaptureStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'photoCaptureStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'photoCaptureModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'photoLapseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'photoLapseCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeSettingsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'storageFreeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'storageTotalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'batteryRemainingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'parametersReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentStreamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'thermalStreamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoStreamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recordTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streamLabelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trackingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trackingImageStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'thermalModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'thermalOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'storageStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_paramDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCameraModeVideo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCameraModePhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleCameraMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'takePhoto'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stopTakePhoto'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startVideoRecording'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stopVideoRecording'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleVideoRecording'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resetSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formatCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'formatCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stepZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'startZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stopZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRectF, std::false_type>,
        // method 'startTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'stopTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MavlinkCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MavlinkCameraControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->videoCaptureStatusChanged(); break;
        case 2: _t->photoCaptureStatusChanged(); break;
        case 3: _t->photoCaptureModeChanged(); break;
        case 4: _t->photoLapseChanged(); break;
        case 5: _t->photoLapseCountChanged(); break;
        case 6: _t->cameraModeChanged(); break;
        case 7: _t->activeSettingsChanged(); break;
        case 8: _t->storageFreeChanged(); break;
        case 9: _t->storageTotalChanged(); break;
        case 10: _t->batteryRemainingChanged(); break;
        case 11: _t->dataReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 12: _t->parametersReady(); break;
        case 13: _t->zoomLevelChanged(); break;
        case 14: _t->focusLevelChanged(); break;
        case 15: _t->streamsChanged(); break;
        case 16: _t->currentStreamChanged(); break;
        case 17: _t->thermalStreamChanged(); break;
        case 18: _t->autoStreamChanged(); break;
        case 19: _t->recordTimeChanged(); break;
        case 20: _t->streamLabelsChanged(); break;
        case 21: _t->trackingEnabledChanged(); break;
        case 22: _t->trackingImageStatusChanged(); break;
        case 23: _t->thermalModeChanged(); break;
        case 24: _t->thermalOpacityChanged(); break;
        case 25: _t->storageStatusChanged(); break;
        case 26: _t->_paramDone(); break;
        case 27: _t->setCameraModeVideo(); break;
        case 28: _t->setCameraModePhoto(); break;
        case 29: _t->toggleCameraMode(); break;
        case 30: { bool _r = _t->takePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->stopTakePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->startVideoRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->stopVideoRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->toggleVideoRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->resetSettings(); break;
        case 36: _t->formatCard((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->formatCard(); break;
        case 38: _t->stepZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->startZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->stopZoom(); break;
        case 41: _t->stopStream(); break;
        case 42: _t->resumeStream(); break;
        case 43: _t->startTracking((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 44: _t->startTracking((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 45: _t->stopTracking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::infoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::videoCaptureStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::photoCaptureStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::photoCaptureModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::photoLapseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::photoLapseCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::cameraModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::activeSettingsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::storageFreeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::storageTotalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::batteryRemainingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)(QByteArray );
            if (_t _q_method = &MavlinkCameraControl::dataReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::parametersReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::zoomLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::focusLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::streamsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::currentStreamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::thermalStreamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::autoStreamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::recordTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::streamLabelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::trackingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::trackingImageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::thermalModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::thermalOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MavlinkCameraControl::*)();
            if (_t _q_method = &MavlinkCameraControl::storageStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 37:
        case 36:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCVideoStreamInfo* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MavlinkCameraControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vendor(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->sensorSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->capturesVideo(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->capturesPhotos(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasModes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasZoom(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasVideoStream(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->photosInVideoMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->videoInPhotoMode(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isBasic(); break;
        case 17: *reinterpret_cast< quint32*>(_v) = _t->storageFree(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->storageFreeStr(); break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->storageTotal(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->batteryRemaining(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->batteryRemainingStr(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->paramComplete(); break;
        case 23: *reinterpret_cast< qreal*>(_v) = _t->zoomLevel(); break;
        case 24: *reinterpret_cast< qreal*>(_v) = _t->focusLevel(); break;
        case 25: *reinterpret_cast< QStringList*>(_v) = _t->activeSettings(); break;
        case 26: *reinterpret_cast< VideoCaptureStatus*>(_v) = _t->videoCaptureStatus(); break;
        case 27: *reinterpret_cast< PhotoCaptureStatus*>(_v) = _t->photoCaptureStatus(); break;
        case 28: *reinterpret_cast< CameraMode*>(_v) = _t->cameraMode(); break;
        case 29: *reinterpret_cast< StorageStatus*>(_v) = _t->storageStatus(); break;
        case 30: *reinterpret_cast< qreal*>(_v) = _t->photoLapse(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->photoLapseCount(); break;
        case 32: *reinterpret_cast< PhotoCaptureMode*>(_v) = _t->photoCaptureMode(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->currentStream(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->autoStream(); break;
        case 35: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->streams(); break;
        case 36: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->currentStreamInstance(); break;
        case 37: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->thermalStreamInstance(); break;
        case 38: *reinterpret_cast< quint32*>(_v) = _t->recordTime(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->recordTimeStr(); break;
        case 40: *reinterpret_cast< QStringList*>(_v) = _t->streamLabels(); break;
        case 41: *reinterpret_cast< ThermalViewMode*>(_v) = _t->thermalMode(); break;
        case 42: *reinterpret_cast< double*>(_v) = _t->thermalOpacity(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->trackingEnabled(); break;
        case 44: *reinterpret_cast< TrackingStatus*>(_v) = _t->trackingStatus(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->trackingImageStatus(); break;
        case 46: *reinterpret_cast< QRectF*>(_v) = _t->trackingImageRect(); break;
        case 47: *reinterpret_cast< Fact**>(_v) = _t->exposureMode(); break;
        case 48: *reinterpret_cast< Fact**>(_v) = _t->ev(); break;
        case 49: *reinterpret_cast< Fact**>(_v) = _t->iso(); break;
        case 50: *reinterpret_cast< Fact**>(_v) = _t->shutterSpeed(); break;
        case 51: *reinterpret_cast< Fact**>(_v) = _t->aperture(); break;
        case 52: *reinterpret_cast< Fact**>(_v) = _t->wb(); break;
        case 53: *reinterpret_cast< Fact**>(_v) = _t->mode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MavlinkCameraControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 23: _t->setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 24: _t->setFocusLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 28: _t->setCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 30: _t->setPhotoLapse(*reinterpret_cast< qreal*>(_v)); break;
        case 31: _t->setPhotoLapseCount(*reinterpret_cast< int*>(_v)); break;
        case 32: _t->setPhotoCaptureMode(*reinterpret_cast< PhotoCaptureMode*>(_v)); break;
        case 33: _t->setCurrentStream(*reinterpret_cast< int*>(_v)); break;
        case 41: _t->setThermalMode(*reinterpret_cast< ThermalViewMode*>(_v)); break;
        case 42: _t->setThermalOpacity(*reinterpret_cast< double*>(_v)); break;
        case 43: _t->setTrackingEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MavlinkCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MavlinkCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMavlinkCameraControlENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int MavlinkCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 46;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void MavlinkCameraControl::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MavlinkCameraControl::videoCaptureStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MavlinkCameraControl::photoCaptureStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MavlinkCameraControl::photoCaptureModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MavlinkCameraControl::photoLapseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MavlinkCameraControl::photoLapseCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MavlinkCameraControl::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MavlinkCameraControl::activeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MavlinkCameraControl::storageFreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MavlinkCameraControl::storageTotalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MavlinkCameraControl::batteryRemainingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MavlinkCameraControl::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MavlinkCameraControl::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MavlinkCameraControl::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MavlinkCameraControl::focusLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MavlinkCameraControl::streamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MavlinkCameraControl::currentStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MavlinkCameraControl::thermalStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MavlinkCameraControl::autoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MavlinkCameraControl::recordTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MavlinkCameraControl::streamLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MavlinkCameraControl::trackingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MavlinkCameraControl::trackingImageStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MavlinkCameraControl::thermalModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MavlinkCameraControl::thermalOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MavlinkCameraControl::storageStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
