/****************************************************************************
** Meta object code from reading C++ file 'fileIndex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileIndex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileIndex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fileIndex_t {
    QByteArrayData data[17];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileIndex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileIndex_t qt_meta_stringdata_fileIndex = {
    {
QT_MOC_LITERAL(0, 0, 9), // "fileIndex"
QT_MOC_LITERAL(1, 10, 12), // "give_message"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "message"
QT_MOC_LITERAL(4, 32, 12), // "give_vedname"
QT_MOC_LITERAL(5, 45, 8), // "ved_name"
QT_MOC_LITERAL(6, 54, 16), // "slot_itemClicked"
QT_MOC_LITERAL(7, 71, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 88, 4), // "item"
QT_MOC_LITERAL(9, 93, 39), // "on_picWidget_customContextMen..."
QT_MOC_LITERAL(10, 133, 3), // "pos"
QT_MOC_LITERAL(11, 137, 39), // "on_vidWidget_customContextMen..."
QT_MOC_LITERAL(12, 177, 18), // "on_exit_bt_clicked"
QT_MOC_LITERAL(13, 196, 18), // "pic_deleteSeedSlot"
QT_MOC_LITERAL(14, 215, 10), // "pic_xiugai"
QT_MOC_LITERAL(15, 226, 18), // "vid_deleteSeedSlot"
QT_MOC_LITERAL(16, 245, 10) // "vid_xiugai"

    },
    "fileIndex\0give_message\0\0message\0"
    "give_vedname\0ved_name\0slot_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_picWidget_customContextMenuRequested\0"
    "pos\0on_vidWidget_customContextMenuRequested\0"
    "on_exit_bt_clicked\0pic_deleteSeedSlot\0"
    "pic_xiugai\0vid_deleteSeedSlot\0vid_xiugai"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileIndex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fileIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fileIndex *_t = static_cast<fileIndex *>(_o);
        switch (_id) {
        case 0: _t->give_message((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->give_vedname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_picWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->on_vidWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_exit_bt_clicked(); break;
        case 6: _t->pic_deleteSeedSlot(); break;
        case 7: _t->pic_xiugai(); break;
        case 8: _t->vid_deleteSeedSlot(); break;
        case 9: _t->vid_xiugai(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (fileIndex::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&fileIndex::give_message)) {
                *result = 0;
            }
        }
        {
            typedef void (fileIndex::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&fileIndex::give_vedname)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject fileIndex::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fileIndex.data,
      qt_meta_data_fileIndex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fileIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fileIndex.stringdata))
        return static_cast<void*>(const_cast< fileIndex*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fileIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fileIndex::give_message(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fileIndex::give_vedname(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
