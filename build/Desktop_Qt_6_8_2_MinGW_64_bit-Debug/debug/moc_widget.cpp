/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN6WidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6WidgetE = QtMocHelpers::stringData(
    "Widget",
    "on_btnSerialSwitch_clicked",
    "",
    "on_btnSend_clicked",
    "on_serialDataReady2Read",
    "on_checkBoxTimelySend_clicked",
    "checked",
    "on_btnClearRec_clicked",
    "on_btnSaveRec_clicked",
    "flushTime",
    "on_checkBoxHexShow_clicked",
    "on_btnHideTable_clicked",
    "on_btnHideHistory_clicked",
    "on_comboBoxCom_activated",
    "index",
    "refreshSerialNum",
    "on_cmd_btn_clicked",
    "on_checkBoxCircularSend_clicked",
    "buttons_handler",
    "on_btnReset_clicked",
    "on_btnSave_clicked",
    "on_btnLoad_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6WidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    0,  123,    2, 0x08,    2 /* Private */,
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    1,  125,    2, 0x08,    4 /* Private */,
       7,    0,  128,    2, 0x08,    6 /* Private */,
       8,    0,  129,    2, 0x08,    7 /* Private */,
       9,    0,  130,    2, 0x08,    8 /* Private */,
      10,    1,  131,    2, 0x08,    9 /* Private */,
      11,    1,  134,    2, 0x08,   11 /* Private */,
      12,    1,  137,    2, 0x08,   13 /* Private */,
      13,    1,  140,    2, 0x08,   15 /* Private */,
      15,    0,  143,    2, 0x08,   17 /* Private */,
      16,    0,  144,    2, 0x08,   18 /* Private */,
      17,    1,  145,    2, 0x08,   19 /* Private */,
      18,    0,  148,    2, 0x08,   21 /* Private */,
      19,    0,  149,    2, 0x08,   22 /* Private */,
      20,    0,  150,    2, 0x08,   23 /* Private */,
      21,    0,  151,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN6WidgetE.offsetsAndSizes,
    qt_meta_data_ZN6WidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6WidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'on_btnSerialSwitch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_serialDataReady2Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxTimelySend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnClearRec_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSaveRec_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flushTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxHexShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnHideTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnHideHistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_comboBoxCom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'refreshSerialNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cmd_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxCircularSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'buttons_handler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnReset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLoad_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_btnSerialSwitch_clicked(); break;
        case 1: _t->on_btnSend_clicked(); break;
        case 2: _t->on_serialDataReady2Read(); break;
        case 3: _t->on_checkBoxTimelySend_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_btnClearRec_clicked(); break;
        case 5: _t->on_btnSaveRec_clicked(); break;
        case 6: _t->flushTime(); break;
        case 7: _t->on_checkBoxHexShow_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_btnHideTable_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_btnHideHistory_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_comboBoxCom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->refreshSerialNum(); break;
        case 12: _t->on_cmd_btn_clicked(); break;
        case 13: _t->on_checkBoxCircularSend_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->buttons_handler(); break;
        case 15: _t->on_btnReset_clicked(); break;
        case 16: _t->on_btnSave_clicked(); break;
        case 17: _t->on_btnLoad_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6WidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
