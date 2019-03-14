/****************************************************************************
** Meta object code from reading C++ file 'dtmainwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dtmainwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtmainwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dtMainWin_t {
    QByteArrayData data[19];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dtMainWin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dtMainWin_t qt_meta_stringdata_dtMainWin = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 11),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 12),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 12),
QT_MOC_LITERAL(6, 62, 12),
QT_MOC_LITERAL(7, 75, 11),
QT_MOC_LITERAL(8, 87, 11),
QT_MOC_LITERAL(9, 99, 14),
QT_MOC_LITERAL(10, 114, 13),
QT_MOC_LITERAL(11, 128, 11),
QT_MOC_LITERAL(12, 140, 11),
QT_MOC_LITERAL(13, 152, 16),
QT_MOC_LITERAL(14, 169, 13),
QT_MOC_LITERAL(15, 183, 8),
QT_MOC_LITERAL(16, 192, 9),
QT_MOC_LITERAL(17, 202, 9),
QT_MOC_LITERAL(18, 212, 1)
    },
    "dtMainWin\0slotInputBT\0\0slotOutputBT\0"
    "slotOpenFile\0slotJobStart\0slotJobPause\0"
    "slotJobStop\0slotFileEnd\0slotTapeConfig\0"
    "slotLicConfig\0slotOptions\0slotLogView\0"
    "QTreeWidgetItem*\0slotJobConfig\0slotHelp\0"
    "slotAbout\0slotParam\0i\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dtMainWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a,
       3,    0,   90,    2, 0x0a,
       4,    0,   91,    2, 0x08,
       5,    0,   92,    2, 0x08,
       6,    0,   93,    2, 0x08,
       7,    0,   94,    2, 0x08,
       8,    1,   95,    2, 0x08,
       9,    0,   98,    2, 0x08,
      10,    0,   99,    2, 0x08,
      11,    0,  100,    2, 0x08,
      12,    2,  101,    2, 0x08,
      14,    0,  106,    2, 0x08,
      15,    0,  107,    2, 0x08,
      16,    0,  108,    2, 0x08,
      17,    1,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void dtMainWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dtMainWin *_t = static_cast<dtMainWin *>(_o);
        switch (_id) {
        case 0: _t->slotInputBT(); break;
        case 1: _t->slotOutputBT(); break;
        case 2: _t->slotOpenFile(); break;
        case 3: _t->slotJobStart(); break;
        case 4: _t->slotJobPause(); break;
        case 5: _t->slotJobStop(); break;
        case 6: _t->slotFileEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotTapeConfig(); break;
        case 8: _t->slotLicConfig(); break;
        case 9: _t->slotOptions(); break;
        case 10: _t->slotLogView((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->slotJobConfig(); break;
        case 12: _t->slotHelp(); break;
        case 13: _t->slotAbout(); break;
        case 14: _t->slotParam((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dtMainWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dtMainWin.data,
      qt_meta_data_dtMainWin,  qt_static_metacall, 0, 0}
};


const QMetaObject *dtMainWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dtMainWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dtMainWin.stringdata))
        return static_cast<void*>(const_cast< dtMainWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dtMainWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
