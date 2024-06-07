/****************************************************************************
** Meta object code from reading C++ file 'QGCMapTileSet.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCMapTileSet.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapTileSet.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS = QtMocHelpers::stringData(
    "QGCCachedTileSet",
    "deletingChanged",
    "",
    "downloadingChanged",
    "totalTileCountChanged",
    "uniqueTileCountChanged",
    "uniqueTileSizeChanged",
    "totalTilesSizeChanged",
    "savedTileCountChanged",
    "savedTileSizeChanged",
    "completeChanged",
    "errorCountChanged",
    "selectedChanged",
    "nameChanged",
    "_tileListFetched",
    "QList<QGCTile*>",
    "tiles",
    "_networkReplyFinished",
    "_networkReplyError",
    "QNetworkReply::NetworkError",
    "error",
    "createDownloadTask",
    "resumeDownloadTask",
    "cancelDownloadTask",
    "name",
    "mapTypeStr",
    "topleftLon",
    "topleftLat",
    "bottomRightLon",
    "bottomRightLat",
    "minZoom",
    "maxZoom",
    "totalTileCount",
    "totalTileCountStr",
    "totalTilesSize",
    "totalTilesSizeStr",
    "uniqueTileCount",
    "uniqueTileCountStr",
    "uniqueTileSize",
    "uniqueTileSizeStr",
    "savedTileCount",
    "savedTileCountStr",
    "savedTileSize",
    "savedTileSizeStr",
    "downloadStatus",
    "creationDate",
    "complete",
    "defaultSet",
    "setID",
    "deleting",
    "downloading",
    "errorCount",
    "errorCountStr",
    "selected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS_t {
    uint offsetsAndSizes[108];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[22];
    char stringdata5[23];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[21];
    char stringdata10[16];
    char stringdata11[18];
    char stringdata12[16];
    char stringdata13[12];
    char stringdata14[17];
    char stringdata15[16];
    char stringdata16[6];
    char stringdata17[22];
    char stringdata18[19];
    char stringdata19[28];
    char stringdata20[6];
    char stringdata21[19];
    char stringdata22[19];
    char stringdata23[19];
    char stringdata24[5];
    char stringdata25[11];
    char stringdata26[11];
    char stringdata27[11];
    char stringdata28[15];
    char stringdata29[15];
    char stringdata30[8];
    char stringdata31[8];
    char stringdata32[15];
    char stringdata33[18];
    char stringdata34[15];
    char stringdata35[18];
    char stringdata36[16];
    char stringdata37[19];
    char stringdata38[15];
    char stringdata39[18];
    char stringdata40[15];
    char stringdata41[18];
    char stringdata42[14];
    char stringdata43[17];
    char stringdata44[15];
    char stringdata45[13];
    char stringdata46[9];
    char stringdata47[11];
    char stringdata48[6];
    char stringdata49[9];
    char stringdata50[12];
    char stringdata51[11];
    char stringdata52[14];
    char stringdata53[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS_t qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QGCCachedTileSet"
        QT_MOC_LITERAL(17, 15),  // "deletingChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 18),  // "downloadingChanged"
        QT_MOC_LITERAL(53, 21),  // "totalTileCountChanged"
        QT_MOC_LITERAL(75, 22),  // "uniqueTileCountChanged"
        QT_MOC_LITERAL(98, 21),  // "uniqueTileSizeChanged"
        QT_MOC_LITERAL(120, 21),  // "totalTilesSizeChanged"
        QT_MOC_LITERAL(142, 21),  // "savedTileCountChanged"
        QT_MOC_LITERAL(164, 20),  // "savedTileSizeChanged"
        QT_MOC_LITERAL(185, 15),  // "completeChanged"
        QT_MOC_LITERAL(201, 17),  // "errorCountChanged"
        QT_MOC_LITERAL(219, 15),  // "selectedChanged"
        QT_MOC_LITERAL(235, 11),  // "nameChanged"
        QT_MOC_LITERAL(247, 16),  // "_tileListFetched"
        QT_MOC_LITERAL(264, 15),  // "QList<QGCTile*>"
        QT_MOC_LITERAL(280, 5),  // "tiles"
        QT_MOC_LITERAL(286, 21),  // "_networkReplyFinished"
        QT_MOC_LITERAL(308, 18),  // "_networkReplyError"
        QT_MOC_LITERAL(327, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(355, 5),  // "error"
        QT_MOC_LITERAL(361, 18),  // "createDownloadTask"
        QT_MOC_LITERAL(380, 18),  // "resumeDownloadTask"
        QT_MOC_LITERAL(399, 18),  // "cancelDownloadTask"
        QT_MOC_LITERAL(418, 4),  // "name"
        QT_MOC_LITERAL(423, 10),  // "mapTypeStr"
        QT_MOC_LITERAL(434, 10),  // "topleftLon"
        QT_MOC_LITERAL(445, 10),  // "topleftLat"
        QT_MOC_LITERAL(456, 14),  // "bottomRightLon"
        QT_MOC_LITERAL(471, 14),  // "bottomRightLat"
        QT_MOC_LITERAL(486, 7),  // "minZoom"
        QT_MOC_LITERAL(494, 7),  // "maxZoom"
        QT_MOC_LITERAL(502, 14),  // "totalTileCount"
        QT_MOC_LITERAL(517, 17),  // "totalTileCountStr"
        QT_MOC_LITERAL(535, 14),  // "totalTilesSize"
        QT_MOC_LITERAL(550, 17),  // "totalTilesSizeStr"
        QT_MOC_LITERAL(568, 15),  // "uniqueTileCount"
        QT_MOC_LITERAL(584, 18),  // "uniqueTileCountStr"
        QT_MOC_LITERAL(603, 14),  // "uniqueTileSize"
        QT_MOC_LITERAL(618, 17),  // "uniqueTileSizeStr"
        QT_MOC_LITERAL(636, 14),  // "savedTileCount"
        QT_MOC_LITERAL(651, 17),  // "savedTileCountStr"
        QT_MOC_LITERAL(669, 13),  // "savedTileSize"
        QT_MOC_LITERAL(683, 16),  // "savedTileSizeStr"
        QT_MOC_LITERAL(700, 14),  // "downloadStatus"
        QT_MOC_LITERAL(715, 12),  // "creationDate"
        QT_MOC_LITERAL(728, 8),  // "complete"
        QT_MOC_LITERAL(737, 10),  // "defaultSet"
        QT_MOC_LITERAL(748, 5),  // "setID"
        QT_MOC_LITERAL(754, 8),  // "deleting"
        QT_MOC_LITERAL(763, 11),  // "downloading"
        QT_MOC_LITERAL(775, 10),  // "errorCount"
        QT_MOC_LITERAL(786, 13),  // "errorCountStr"
        QT_MOC_LITERAL(800, 8)   // "selected"
    },
    "QGCCachedTileSet",
    "deletingChanged",
    "",
    "downloadingChanged",
    "totalTileCountChanged",
    "uniqueTileCountChanged",
    "uniqueTileSizeChanged",
    "totalTilesSizeChanged",
    "savedTileCountChanged",
    "savedTileSizeChanged",
    "completeChanged",
    "errorCountChanged",
    "selectedChanged",
    "nameChanged",
    "_tileListFetched",
    "QList<QGCTile*>",
    "tiles",
    "_networkReplyFinished",
    "_networkReplyError",
    "QNetworkReply::NetworkError",
    "error",
    "createDownloadTask",
    "resumeDownloadTask",
    "cancelDownloadTask",
    "name",
    "mapTypeStr",
    "topleftLon",
    "topleftLat",
    "bottomRightLon",
    "bottomRightLat",
    "minZoom",
    "maxZoom",
    "totalTileCount",
    "totalTileCountStr",
    "totalTilesSize",
    "totalTilesSizeStr",
    "uniqueTileCount",
    "uniqueTileCountStr",
    "uniqueTileSize",
    "uniqueTileSizeStr",
    "savedTileCount",
    "savedTileCountStr",
    "savedTileSize",
    "savedTileSizeStr",
    "downloadStatus",
    "creationDate",
    "complete",
    "defaultSet",
    "setID",
    "deleting",
    "downloading",
    "errorCount",
    "errorCountStr",
    "selected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCCachedTileSetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      30,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,   31 /* Public */,
       3,    0,  123,    2, 0x06,   32 /* Public */,
       4,    0,  124,    2, 0x06,   33 /* Public */,
       5,    0,  125,    2, 0x06,   34 /* Public */,
       6,    0,  126,    2, 0x06,   35 /* Public */,
       7,    0,  127,    2, 0x06,   36 /* Public */,
       8,    0,  128,    2, 0x06,   37 /* Public */,
       9,    0,  129,    2, 0x06,   38 /* Public */,
      10,    0,  130,    2, 0x06,   39 /* Public */,
      11,    0,  131,    2, 0x06,   40 /* Public */,
      12,    0,  132,    2, 0x06,   41 /* Public */,
      13,    0,  133,    2, 0x06,   42 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,  134,    2, 0x08,   43 /* Private */,
      17,    0,  137,    2, 0x08,   45 /* Private */,
      18,    1,  138,    2, 0x08,   46 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  141,    2, 0x02,   48 /* Public */,
      22,    0,  142,    2, 0x02,   49 /* Public */,
      23,    0,  143,    2, 0x02,   50 /* Public */,

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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::QString, 0x00015001, uint(11), 0,
      25, QMetaType::QString, 0x00015401, uint(-1), 0,
      26, QMetaType::Double, 0x00015401, uint(-1), 0,
      27, QMetaType::Double, 0x00015401, uint(-1), 0,
      28, QMetaType::Double, 0x00015401, uint(-1), 0,
      29, QMetaType::Double, 0x00015401, uint(-1), 0,
      30, QMetaType::Int, 0x00015401, uint(-1), 0,
      31, QMetaType::Int, 0x00015401, uint(-1), 0,
      32, QMetaType::UInt, 0x00015001, uint(2), 0,
      33, QMetaType::QString, 0x00015001, uint(2), 0,
      34, QMetaType::ULongLong, 0x00015001, uint(5), 0,
      35, QMetaType::QString, 0x00015001, uint(5), 0,
      36, QMetaType::UInt, 0x00015001, uint(3), 0,
      37, QMetaType::QString, 0x00015001, uint(3), 0,
      38, QMetaType::ULongLong, 0x00015001, uint(4), 0,
      39, QMetaType::QString, 0x00015001, uint(4), 0,
      40, QMetaType::UInt, 0x00015001, uint(6), 0,
      41, QMetaType::QString, 0x00015001, uint(6), 0,
      42, QMetaType::ULongLong, 0x00015001, uint(7), 0,
      43, QMetaType::QString, 0x00015001, uint(7), 0,
      44, QMetaType::QString, 0x00015001, uint(7), 0,
      45, QMetaType::QDateTime, 0x00015401, uint(-1), 0,
      46, QMetaType::Bool, 0x00015001, uint(8), 0,
      47, QMetaType::Bool, 0x00015401, uint(-1), 0,
      48, QMetaType::ULongLong, 0x00015401, uint(-1), 0,
      49, QMetaType::Bool, 0x00015001, uint(0), 0,
      50, QMetaType::Bool, 0x00015001, uint(1), 0,
      51, QMetaType::UInt, 0x00015001, uint(9), 0,
      52, QMetaType::QString, 0x00015001, uint(9), 0,
      53, QMetaType::Bool, 0x00015103, uint(10), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCCachedTileSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCCachedTileSetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mapTypeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'topleftLon'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'topleftLat'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'bottomRightLon'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'bottomRightLat'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'minZoom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxZoom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'totalTileCount'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'totalTileCountStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'totalTilesSize'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'totalTilesSizeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uniqueTileCount'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'uniqueTileCountStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uniqueTileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'uniqueTileSizeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'savedTileCount'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'savedTileCountStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'savedTileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'savedTileSizeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'downloadStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'creationDate'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'complete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'defaultSet'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'setID'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'deleting'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'downloading'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errorCount'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'errorCountStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet, std::true_type>,
        // method 'deletingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalTileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uniqueTileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uniqueTileSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalTilesSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'savedTileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'savedTileSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'completeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_tileListFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QGCTile*>, std::false_type>,
        // method '_networkReplyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_networkReplyError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'createDownloadTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeDownloadTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelDownloadTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCCachedTileSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCachedTileSet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deletingChanged(); break;
        case 1: _t->downloadingChanged(); break;
        case 2: _t->totalTileCountChanged(); break;
        case 3: _t->uniqueTileCountChanged(); break;
        case 4: _t->uniqueTileSizeChanged(); break;
        case 5: _t->totalTilesSizeChanged(); break;
        case 6: _t->savedTileCountChanged(); break;
        case 7: _t->savedTileSizeChanged(); break;
        case 8: _t->completeChanged(); break;
        case 9: _t->errorCountChanged(); break;
        case 10: _t->selectedChanged(); break;
        case 11: _t->nameChanged(); break;
        case 12: _t->_tileListFetched((*reinterpret_cast< std::add_pointer_t<QList<QGCTile*>>>(_a[1]))); break;
        case 13: _t->_networkReplyFinished(); break;
        case 14: _t->_networkReplyError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 15: _t->createDownloadTask(); break;
        case 16: _t->resumeDownloadTask(); break;
        case 17: _t->cancelDownloadTask(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::deletingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::downloadingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::totalTileCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::uniqueTileCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::uniqueTileSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::totalTilesSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::savedTileCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::savedTileSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::completeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::errorCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCCachedTileSet::*)();
            if (_t _q_method = &QGCCachedTileSet::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCachedTileSet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->mapTypeStr(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->topleftLon(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->topleftLat(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->bottomRightLon(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->bottomRightLat(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->minZoom(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->maxZoom(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->totalTileCount(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->totalTileCountStr(); break;
        case 10: *reinterpret_cast< quint64*>(_v) = _t->totalTilesSize(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->totalTilesSizeStr(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->uniqueTileCount(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->uniqueTileCountStr(); break;
        case 14: *reinterpret_cast< quint64*>(_v) = _t->uniqueTileSize(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->uniqueTileSizeStr(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->savedTileCount(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->savedTileCountStr(); break;
        case 18: *reinterpret_cast< quint64*>(_v) = _t->savedTileSize(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->savedTileSizeStr(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->downloadStatus(); break;
        case 21: *reinterpret_cast< QDateTime*>(_v) = _t->creationDate(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->complete(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->defaultSet(); break;
        case 24: *reinterpret_cast< quint64*>(_v) = _t->setID(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->deleting(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->downloading(); break;
        case 27: *reinterpret_cast< quint32*>(_v) = _t->errorCount(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->errorCountStr(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCachedTileSet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 29: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCCachedTileSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCachedTileSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCCachedTileSetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCachedTileSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void QGCCachedTileSet::deletingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCachedTileSet::downloadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCachedTileSet::totalTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCachedTileSet::uniqueTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCachedTileSet::uniqueTileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCachedTileSet::totalTilesSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCachedTileSet::savedTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCachedTileSet::savedTileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCachedTileSet::completeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCachedTileSet::errorCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCachedTileSet::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCCachedTileSet::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
