/****************************************************************************
** Meta object code from reading C++ file 'fullShow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fullShow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fullShow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fullShow_t {
    QByteArrayData data[7];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fullShow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fullShow_t qt_meta_stringdata_fullShow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "fullShow"
QT_MOC_LITERAL(1, 9, 12), // "show_picture"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "pic_name"
QT_MOC_LITERAL(4, 32, 10), // "show_video"
QT_MOC_LITERAL(5, 43, 8), // "vid_name"
QT_MOC_LITERAL(6, 52, 22) // "on_label_doubleclicked"

    },
    "fullShow\0show_picture\0\0pic_name\0"
    "show_video\0vid_name\0on_label_doubleclicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fullShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void fullShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fullShow *_t = static_cast<fullShow *>(_o);
        switch (_id) {
        case 0: _t->show_picture((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->show_video((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_label_doubleclicked(); break;
        default: ;
        }
    }
}

const QMetaObject fullShow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fullShow.data,
      qt_meta_data_fullShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fullShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fullShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fullShow.stringdata))
        return static_cast<void*>(const_cast< fullShow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fullShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
