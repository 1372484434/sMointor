/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_menu_t {
    QByteArrayData data[11];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menu_t qt_meta_stringdata_menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "menu"
QT_MOC_LITERAL(1, 5, 25), // "on_swt_Control_bt_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "on_file_Manage_bt_clicked"
QT_MOC_LITERAL(4, 58, 21), // "on_turn_up_bt_pressed"
QT_MOC_LITERAL(5, 80, 24), // "on_turn_right_bt_pressed"
QT_MOC_LITERAL(6, 105, 23), // "on_turn_left_bt_pressed"
QT_MOC_LITERAL(7, 129, 24), // "on_turn_down_bt__pressed"
QT_MOC_LITERAL(8, 154, 24), // "on_turn_reset_bt_clicked"
QT_MOC_LITERAL(9, 179, 23), // "on_get_photo_bt_clicked"
QT_MOC_LITERAL(10, 203, 23) // "on_get_video_bt_clicked"

    },
    "menu\0on_swt_Control_bt_clicked\0\0"
    "on_file_Manage_bt_clicked\0"
    "on_turn_up_bt_pressed\0on_turn_right_bt_pressed\0"
    "on_turn_left_bt_pressed\0"
    "on_turn_down_bt__pressed\0"
    "on_turn_reset_bt_clicked\0"
    "on_get_photo_bt_clicked\0on_get_video_bt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        menu *_t = static_cast<menu *>(_o);
        switch (_id) {
        case 0: _t->on_swt_Control_bt_clicked(); break;
        case 1: _t->on_file_Manage_bt_clicked(); break;
        case 2: _t->on_turn_up_bt_pressed(); break;
        case 3: _t->on_turn_right_bt_pressed(); break;
        case 4: _t->on_turn_left_bt_pressed(); break;
        case 5: _t->on_turn_down_bt__pressed(); break;
        case 6: _t->on_turn_reset_bt_clicked(); break;
        case 7: _t->on_get_photo_bt_clicked(); break;
        case 8: _t->on_get_video_bt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject menu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_menu.data,
      qt_meta_data_menu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_menu.stringdata))
        return static_cast<void*>(const_cast< menu*>(this));
    return QWidget::qt_metacast(_clname);
}

int menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
