/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngineManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QMLControl/QGCMapEngineManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngineManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS = QtMocHelpers::stringData(
    "QGCMapEngineManager",
    "tileCountChanged",
    "",
    "tileSizeChanged",
    "tileSetsChanged",
    "maxMemCacheChanged",
    "maxDiskCacheChanged",
    "errorMessageChanged",
    "fetchElevationChanged",
    "freeDiskSpaceChanged",
    "selectedCountChanged",
    "actionProgressChanged",
    "importActionChanged",
    "importReplaceChanged",
    "taskError",
    "QGCMapTask::TaskType",
    "type",
    "error",
    "_tileSetSaved",
    "QGCCachedTileSet*",
    "set",
    "_tileSetFetched",
    "tileSets",
    "_tileSetDeleted",
    "setID",
    "_updateTotals",
    "totaltiles",
    "totalsize",
    "defaulttiles",
    "defaultsize",
    "_resetCompleted",
    "_actionCompleted",
    "_actionProgressHandler",
    "percentage",
    "loadTileSets",
    "updateForCurrentView",
    "lon0",
    "lat0",
    "lon1",
    "lat1",
    "minZoom",
    "maxZoom",
    "mapName",
    "startDownload",
    "name",
    "mapType",
    "saveSetting",
    "key",
    "value",
    "loadSetting",
    "defaultValue",
    "deleteTileSet",
    "tileSet",
    "renameTileSet",
    "newName",
    "getUniqueName",
    "findName",
    "selectAll",
    "selectNone",
    "exportSets",
    "path",
    "importSets",
    "resetAction",
    "mapTypeList",
    "provider",
    "tileCount",
    "tileCountStr",
    "tileSize",
    "tileSizeStr",
    "QmlObjectListModel*",
    "mapList",
    "mapProviderList",
    "errorMessage",
    "fetchElevation",
    "freeDiskSpace",
    "diskSpace",
    "selectedCount",
    "actionProgress",
    "importAction",
    "ImportAction",
    "importReplace",
    "ActionNone",
    "ActionImporting",
    "ActionExporting",
    "ActionDone"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS_t {
    uint offsetsAndSizes[170];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[19];
    char stringdata6[20];
    char stringdata7[20];
    char stringdata8[22];
    char stringdata9[21];
    char stringdata10[21];
    char stringdata11[22];
    char stringdata12[20];
    char stringdata13[21];
    char stringdata14[10];
    char stringdata15[21];
    char stringdata16[5];
    char stringdata17[6];
    char stringdata18[14];
    char stringdata19[18];
    char stringdata20[4];
    char stringdata21[16];
    char stringdata22[9];
    char stringdata23[16];
    char stringdata24[6];
    char stringdata25[14];
    char stringdata26[11];
    char stringdata27[10];
    char stringdata28[13];
    char stringdata29[12];
    char stringdata30[16];
    char stringdata31[17];
    char stringdata32[23];
    char stringdata33[11];
    char stringdata34[13];
    char stringdata35[21];
    char stringdata36[5];
    char stringdata37[5];
    char stringdata38[5];
    char stringdata39[5];
    char stringdata40[8];
    char stringdata41[8];
    char stringdata42[8];
    char stringdata43[14];
    char stringdata44[5];
    char stringdata45[8];
    char stringdata46[12];
    char stringdata47[4];
    char stringdata48[6];
    char stringdata49[12];
    char stringdata50[13];
    char stringdata51[14];
    char stringdata52[8];
    char stringdata53[14];
    char stringdata54[8];
    char stringdata55[14];
    char stringdata56[9];
    char stringdata57[10];
    char stringdata58[11];
    char stringdata59[11];
    char stringdata60[5];
    char stringdata61[11];
    char stringdata62[12];
    char stringdata63[12];
    char stringdata64[9];
    char stringdata65[10];
    char stringdata66[13];
    char stringdata67[9];
    char stringdata68[12];
    char stringdata69[20];
    char stringdata70[8];
    char stringdata71[16];
    char stringdata72[13];
    char stringdata73[15];
    char stringdata74[14];
    char stringdata75[10];
    char stringdata76[14];
    char stringdata77[15];
    char stringdata78[13];
    char stringdata79[13];
    char stringdata80[14];
    char stringdata81[11];
    char stringdata82[16];
    char stringdata83[16];
    char stringdata84[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS_t qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QGCMapEngineManager"
        QT_MOC_LITERAL(20, 16),  // "tileCountChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 15),  // "tileSizeChanged"
        QT_MOC_LITERAL(54, 15),  // "tileSetsChanged"
        QT_MOC_LITERAL(70, 18),  // "maxMemCacheChanged"
        QT_MOC_LITERAL(89, 19),  // "maxDiskCacheChanged"
        QT_MOC_LITERAL(109, 19),  // "errorMessageChanged"
        QT_MOC_LITERAL(129, 21),  // "fetchElevationChanged"
        QT_MOC_LITERAL(151, 20),  // "freeDiskSpaceChanged"
        QT_MOC_LITERAL(172, 20),  // "selectedCountChanged"
        QT_MOC_LITERAL(193, 21),  // "actionProgressChanged"
        QT_MOC_LITERAL(215, 19),  // "importActionChanged"
        QT_MOC_LITERAL(235, 20),  // "importReplaceChanged"
        QT_MOC_LITERAL(256, 9),  // "taskError"
        QT_MOC_LITERAL(266, 20),  // "QGCMapTask::TaskType"
        QT_MOC_LITERAL(287, 4),  // "type"
        QT_MOC_LITERAL(292, 5),  // "error"
        QT_MOC_LITERAL(298, 13),  // "_tileSetSaved"
        QT_MOC_LITERAL(312, 17),  // "QGCCachedTileSet*"
        QT_MOC_LITERAL(330, 3),  // "set"
        QT_MOC_LITERAL(334, 15),  // "_tileSetFetched"
        QT_MOC_LITERAL(350, 8),  // "tileSets"
        QT_MOC_LITERAL(359, 15),  // "_tileSetDeleted"
        QT_MOC_LITERAL(375, 5),  // "setID"
        QT_MOC_LITERAL(381, 13),  // "_updateTotals"
        QT_MOC_LITERAL(395, 10),  // "totaltiles"
        QT_MOC_LITERAL(406, 9),  // "totalsize"
        QT_MOC_LITERAL(416, 12),  // "defaulttiles"
        QT_MOC_LITERAL(429, 11),  // "defaultsize"
        QT_MOC_LITERAL(441, 15),  // "_resetCompleted"
        QT_MOC_LITERAL(457, 16),  // "_actionCompleted"
        QT_MOC_LITERAL(474, 22),  // "_actionProgressHandler"
        QT_MOC_LITERAL(497, 10),  // "percentage"
        QT_MOC_LITERAL(508, 12),  // "loadTileSets"
        QT_MOC_LITERAL(521, 20),  // "updateForCurrentView"
        QT_MOC_LITERAL(542, 4),  // "lon0"
        QT_MOC_LITERAL(547, 4),  // "lat0"
        QT_MOC_LITERAL(552, 4),  // "lon1"
        QT_MOC_LITERAL(557, 4),  // "lat1"
        QT_MOC_LITERAL(562, 7),  // "minZoom"
        QT_MOC_LITERAL(570, 7),  // "maxZoom"
        QT_MOC_LITERAL(578, 7),  // "mapName"
        QT_MOC_LITERAL(586, 13),  // "startDownload"
        QT_MOC_LITERAL(600, 4),  // "name"
        QT_MOC_LITERAL(605, 7),  // "mapType"
        QT_MOC_LITERAL(613, 11),  // "saveSetting"
        QT_MOC_LITERAL(625, 3),  // "key"
        QT_MOC_LITERAL(629, 5),  // "value"
        QT_MOC_LITERAL(635, 11),  // "loadSetting"
        QT_MOC_LITERAL(647, 12),  // "defaultValue"
        QT_MOC_LITERAL(660, 13),  // "deleteTileSet"
        QT_MOC_LITERAL(674, 7),  // "tileSet"
        QT_MOC_LITERAL(682, 13),  // "renameTileSet"
        QT_MOC_LITERAL(696, 7),  // "newName"
        QT_MOC_LITERAL(704, 13),  // "getUniqueName"
        QT_MOC_LITERAL(718, 8),  // "findName"
        QT_MOC_LITERAL(727, 9),  // "selectAll"
        QT_MOC_LITERAL(737, 10),  // "selectNone"
        QT_MOC_LITERAL(748, 10),  // "exportSets"
        QT_MOC_LITERAL(759, 4),  // "path"
        QT_MOC_LITERAL(764, 10),  // "importSets"
        QT_MOC_LITERAL(775, 11),  // "resetAction"
        QT_MOC_LITERAL(787, 11),  // "mapTypeList"
        QT_MOC_LITERAL(799, 8),  // "provider"
        QT_MOC_LITERAL(808, 9),  // "tileCount"
        QT_MOC_LITERAL(818, 12),  // "tileCountStr"
        QT_MOC_LITERAL(831, 8),  // "tileSize"
        QT_MOC_LITERAL(840, 11),  // "tileSizeStr"
        QT_MOC_LITERAL(852, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(872, 7),  // "mapList"
        QT_MOC_LITERAL(880, 15),  // "mapProviderList"
        QT_MOC_LITERAL(896, 12),  // "errorMessage"
        QT_MOC_LITERAL(909, 14),  // "fetchElevation"
        QT_MOC_LITERAL(924, 13),  // "freeDiskSpace"
        QT_MOC_LITERAL(938, 9),  // "diskSpace"
        QT_MOC_LITERAL(948, 13),  // "selectedCount"
        QT_MOC_LITERAL(962, 14),  // "actionProgress"
        QT_MOC_LITERAL(977, 12),  // "importAction"
        QT_MOC_LITERAL(990, 12),  // "ImportAction"
        QT_MOC_LITERAL(1003, 13),  // "importReplace"
        QT_MOC_LITERAL(1017, 10),  // "ActionNone"
        QT_MOC_LITERAL(1028, 15),  // "ActionImporting"
        QT_MOC_LITERAL(1044, 15),  // "ActionExporting"
        QT_MOC_LITERAL(1060, 10)   // "ActionDone"
    },
    "QGCMapEngineManager",
    "tileCountChanged",
    "",
    "tileSizeChanged",
    "tileSetsChanged",
    "maxMemCacheChanged",
    "maxDiskCacheChanged",
    "errorMessageChanged",
    "fetchElevationChanged",
    "freeDiskSpaceChanged",
    "selectedCountChanged",
    "actionProgressChanged",
    "importActionChanged",
    "importReplaceChanged",
    "taskError",
    "QGCMapTask::TaskType",
    "type",
    "error",
    "_tileSetSaved",
    "QGCCachedTileSet*",
    "set",
    "_tileSetFetched",
    "tileSets",
    "_tileSetDeleted",
    "setID",
    "_updateTotals",
    "totaltiles",
    "totalsize",
    "defaulttiles",
    "defaultsize",
    "_resetCompleted",
    "_actionCompleted",
    "_actionProgressHandler",
    "percentage",
    "loadTileSets",
    "updateForCurrentView",
    "lon0",
    "lat0",
    "lon1",
    "lat1",
    "minZoom",
    "maxZoom",
    "mapName",
    "startDownload",
    "name",
    "mapType",
    "saveSetting",
    "key",
    "value",
    "loadSetting",
    "defaultValue",
    "deleteTileSet",
    "tileSet",
    "renameTileSet",
    "newName",
    "getUniqueName",
    "findName",
    "selectAll",
    "selectNone",
    "exportSets",
    "path",
    "importSets",
    "resetAction",
    "mapTypeList",
    "provider",
    "tileCount",
    "tileCountStr",
    "tileSize",
    "tileSizeStr",
    "QmlObjectListModel*",
    "mapList",
    "mapProviderList",
    "errorMessage",
    "fetchElevation",
    "freeDiskSpace",
    "diskSpace",
    "selectedCount",
    "actionProgress",
    "importAction",
    "ImportAction",
    "importReplace",
    "ActionNone",
    "ActionImporting",
    "ActionExporting",
    "ActionDone"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMapEngineManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      15,  333, // properties
       1,  408, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  236,    2, 0x06,   17 /* Public */,
       3,    0,  237,    2, 0x06,   18 /* Public */,
       4,    0,  238,    2, 0x06,   19 /* Public */,
       5,    0,  239,    2, 0x06,   20 /* Public */,
       6,    0,  240,    2, 0x06,   21 /* Public */,
       7,    0,  241,    2, 0x06,   22 /* Public */,
       8,    0,  242,    2, 0x06,   23 /* Public */,
       9,    0,  243,    2, 0x06,   24 /* Public */,
      10,    0,  244,    2, 0x06,   25 /* Public */,
      11,    0,  245,    2, 0x06,   26 /* Public */,
      12,    0,  246,    2, 0x06,   27 /* Public */,
      13,    0,  247,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    2,  248,    2, 0x0a,   29 /* Public */,
      18,    1,  253,    2, 0x08,   32 /* Private */,
      21,    1,  256,    2, 0x08,   34 /* Private */,
      23,    1,  259,    2, 0x08,   36 /* Private */,
      25,    4,  262,    2, 0x08,   38 /* Private */,
      30,    0,  271,    2, 0x08,   43 /* Private */,
      31,    0,  272,    2, 0x08,   44 /* Private */,
      32,    1,  273,    2, 0x08,   45 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      34,    0,  276,    2, 0x02,   47 /* Public */,
      35,    7,  277,    2, 0x02,   48 /* Public */,
      43,    2,  292,    2, 0x02,   56 /* Public */,
      46,    2,  297,    2, 0x02,   59 /* Public */,
      49,    2,  302,    2, 0x02,   62 /* Public */,
      51,    1,  307,    2, 0x02,   65 /* Public */,
      53,    2,  310,    2, 0x02,   67 /* Public */,
      55,    0,  315,    2, 0x02,   70 /* Public */,
      56,    1,  316,    2, 0x02,   71 /* Public */,
      57,    0,  319,    2, 0x02,   73 /* Public */,
      58,    0,  320,    2, 0x02,   74 /* Public */,
      59,    1,  321,    2, 0x02,   75 /* Public */,
      59,    0,  324,    2, 0x22,   77 /* Public | MethodCloned */,
      61,    1,  325,    2, 0x02,   78 /* Public */,
      61,    0,  328,    2, 0x22,   80 /* Public | MethodCloned */,
      62,    0,  329,    2, 0x02,   81 /* Public */,
      63,    1,  330,    2, 0x02,   82 /* Public */,

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
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   22,
    QMetaType::Void, QMetaType::ULongLong,   24,
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,   26,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QString,   36,   37,   38,   39,   40,   41,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   44,   45,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   48,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   47,   50,
    QMetaType::Void, 0x80000000 | 19,   52,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   52,   54,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   60,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   60,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::QString,   64,

 // properties: name, type, flags
      65, QMetaType::ULongLong, 0x00015001, uint(0), 0,
      66, QMetaType::QString, 0x00015001, uint(0), 0,
      67, QMetaType::ULongLong, 0x00015001, uint(1), 0,
      68, QMetaType::QString, 0x00015001, uint(1), 0,
      22, 0x80000000 | 69, 0x00015009, uint(2), 0,
      70, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      71, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      72, QMetaType::QString, 0x00015001, uint(5), 0,
      73, QMetaType::Bool, 0x00015103, uint(6), 0,
      74, QMetaType::UInt, 0x00015001, uint(7), 0,
      75, QMetaType::UInt, 0x00015401, uint(-1), 0,
      76, QMetaType::Int, 0x00015001, uint(8), 0,
      77, QMetaType::Int, 0x00015001, uint(9), 0,
      78, 0x80000000 | 79, 0x0001510b, uint(10), 0,
      80, QMetaType::Bool, 0x00015103, uint(11), 0,

 // enums: name, alias, flags, count, data
      79,   79, 0x0,    4,  413,

 // enum data: key, value
      81, uint(QGCMapEngineManager::ActionNone),
      82, uint(QGCMapEngineManager::ActionImporting),
      83, uint(QGCMapEngineManager::ActionExporting),
      84, uint(QGCMapEngineManager::ActionDone),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMapEngineManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMapEngineManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS_t,
        // property 'tileCount'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'tileCountStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'tileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'tileSizeStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'tileSets'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'mapList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'mapProviderList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'errorMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fetchElevation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'freeDiskSpace'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'diskSpace'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'selectedCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'actionProgress'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'importAction'
        QtPrivate::TypeAndForceComplete<ImportAction, std::true_type>,
        // property 'importReplace'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'ImportAction'
        QtPrivate::TypeAndForceComplete<QGCMapEngineManager::ImportAction, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCMapEngineManager, std::true_type>,
        // method 'tileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tileSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tileSetsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxMemCacheChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxDiskCacheChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchElevationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'freeDiskSpaceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importActionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importReplaceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'taskError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCMapTask::TaskType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_tileSetSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>,
        // method '_tileSetFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>,
        // method '_tileSetDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method '_updateTotals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method '_resetCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_actionCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_actionProgressHandler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadTileSets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateForCurrentView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadSetting'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteTileSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>,
        // method 'renameTileSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUniqueName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'findName'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectNone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportSets'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'exportSets'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'importSets'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'importSets'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resetAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mapTypeList'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void QGCMapEngineManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileCountChanged(); break;
        case 1: _t->tileSizeChanged(); break;
        case 2: _t->tileSetsChanged(); break;
        case 3: _t->maxMemCacheChanged(); break;
        case 4: _t->maxDiskCacheChanged(); break;
        case 5: _t->errorMessageChanged(); break;
        case 6: _t->fetchElevationChanged(); break;
        case 7: _t->freeDiskSpaceChanged(); break;
        case 8: _t->selectedCountChanged(); break;
        case 9: _t->actionProgressChanged(); break;
        case 10: _t->importActionChanged(); break;
        case 11: _t->importReplaceChanged(); break;
        case 12: _t->taskError((*reinterpret_cast< std::add_pointer_t<QGCMapTask::TaskType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->_tileSetSaved((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1]))); break;
        case 14: _t->_tileSetFetched((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1]))); break;
        case 15: _t->_tileSetDeleted((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 16: _t->_updateTotals((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4]))); break;
        case 17: _t->_resetCompleted(); break;
        case 18: _t->_actionCompleted(); break;
        case 19: _t->_actionProgressHandler((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->loadTileSets(); break;
        case 21: _t->updateForCurrentView((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 22: _t->startDownload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 23: _t->saveSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: { QString _r = _t->loadSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->deleteTileSet((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1]))); break;
        case 26: _t->renameTileSet((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 27: { QString _r = _t->getUniqueName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->findName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->selectAll(); break;
        case 30: _t->selectNone(); break;
        case 31: { bool _r = _t->exportSets((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->exportSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->importSets((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->importSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->resetAction(); break;
        case 36: { QStringList _r = _t->mapTypeList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::tileCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::tileSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::tileSetsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::maxMemCacheChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::maxDiskCacheChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::errorMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::fetchElevationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::freeDiskSpaceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::selectedCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::actionProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::importActionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (_t _q_method = &QGCMapEngineManager::importReplaceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint64*>(_v) = _t->tileCount(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tileCountStr(); break;
        case 2: *reinterpret_cast< quint64*>(_v) = _t->tileSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->tileSizeStr(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->tileSets(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->mapList(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->mapProviderList(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->fetchElevation(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->freeDiskSpace(); break;
        case 10: *reinterpret_cast< quint32*>(_v) = _t->diskSpace(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->selectedCount(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->actionProgress(); break;
        case 13: *reinterpret_cast< ImportAction*>(_v) = _t->importAction(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->importReplace(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setFetchElevation(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setImportAction(*reinterpret_cast< ImportAction*>(_v)); break;
        case 14: _t->setImportReplace(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMapEngineManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapEngineManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMapEngineManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCMapEngineManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QGCMapEngineManager::tileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMapEngineManager::tileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapEngineManager::tileSetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCMapEngineManager::maxMemCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapEngineManager::maxDiskCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCMapEngineManager::errorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCMapEngineManager::fetchElevationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCMapEngineManager::freeDiskSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCMapEngineManager::selectedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCMapEngineManager::actionProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCMapEngineManager::importActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCMapEngineManager::importReplaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
