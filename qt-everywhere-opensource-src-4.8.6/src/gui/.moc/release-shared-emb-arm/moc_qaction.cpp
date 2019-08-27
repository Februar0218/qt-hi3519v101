/****************************************************************************
** Meta object code from reading C++ file 'qaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      18,   74, // properties
       3,  146, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      27,   19,    8,    8, 0x05,
      43,    8,    8,    8, 0x25,
      55,    8,    8,    8, 0x05,
      65,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,    8,    8,    8, 0x0a,
      89,    8,    8,    8, 0x0a,
      97,    8,    8,    8, 0x0a,
     114,    8,    8,    8, 0x0a,
     123,    8,    8,    8, 0x0a,
     142,  140,    8,    8, 0x0a,
     160,    8,    8,    8, 0x0a,

 // properties: name, type, flags
     182,  177, 0x01495103,
      19,  177, 0x01495103,
     192,  177, 0x01495103,
     206,  200, 0x45495103,
     219,  211, 0x0a495103,
     224,  211, 0x0a495103,
     233,  211, 0x0a495103,
     241,  211, 0x0a495103,
     251,  211, 0x0a495103,
     267,  261, 0x40495103,
     285,  272, 0x4c495103,
     314,  294, 0x0049510b,
     330,  177, 0x01495103,
     341,  177, 0x01495103,
     358,  349, 0x0049510b,
     379,  367, 0x0049510b,
     391,  177, 0x01495103,
     418,  409, 0x0009510b,

 // properties: notify_signal_id
       0,
       4,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     349, 0x0,    7,  158,
     367, 0x0,    4,  172,
     409, 0x0,    3,  180,

 // enum data: key, value
     427, uint(QAction::NoRole),
     434, uint(QAction::TextHeuristicRole),
     452, uint(QAction::ApplicationSpecificRole),
     476, uint(QAction::AboutQtRole),
     488, uint(QAction::AboutRole),
     498, uint(QAction::PreferencesRole),
     514, uint(QAction::QuitRole),
     523, uint(QAction::NoSoftKey),
     533, uint(QAction::PositiveSoftKey),
     549, uint(QAction::NegativeSoftKey),
     565, uint(QAction::SelectSoftKey),
     579, uint(QAction::LowPriority),
     591, uint(QAction::NormalPriority),
     606, uint(QAction::HighPriority),

       0        // eod
};

static const char qt_meta_stringdata_QAction[] = {
    "QAction\0\0changed()\0checked\0triggered(bool)\0"
    "triggered()\0hovered()\0toggled(bool)\0"
    "trigger()\0hover()\0setChecked(bool)\0"
    "toggle()\0setEnabled(bool)\0b\0"
    "setDisabled(bool)\0setVisible(bool)\0"
    "bool\0checkable\0enabled\0QIcon\0icon\0"
    "QString\0text\0iconText\0toolTip\0statusTip\0"
    "whatsThis\0QFont\0font\0QKeySequence\0"
    "shortcut\0Qt::ShortcutContext\0"
    "shortcutContext\0autoRepeat\0visible\0"
    "MenuRole\0menuRole\0SoftKeyRole\0softKeyRole\0"
    "iconVisibleInMenu\0Priority\0priority\0"
    "NoRole\0TextHeuristicRole\0"
    "ApplicationSpecificRole\0AboutQtRole\0"
    "AboutRole\0PreferencesRole\0QuitRole\0"
    "NoSoftKey\0PositiveSoftKey\0NegativeSoftKey\0"
    "SelectSoftKey\0LowPriority\0NormalPriority\0"
    "HighPriority\0"
};

void QAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAction *_t = static_cast<QAction *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->triggered(); break;
        case 3: _t->hovered(); break;
        case 4: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->trigger(); break;
        case 6: _t->hover(); break;
        case 7: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggle(); break;
        case 9: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAction,
      qt_meta_data_QAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAction))
        return static_cast<void*>(const_cast< QAction*>(this));
    return QObject::qt_metacast(_clname);
}

int QAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isCheckable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isChecked(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = text(); break;
        case 5: *reinterpret_cast< QString*>(_v) = iconText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = toolTip(); break;
        case 7: *reinterpret_cast< QString*>(_v) = statusTip(); break;
        case 8: *reinterpret_cast< QString*>(_v) = whatsThis(); break;
        case 9: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 10: *reinterpret_cast< QKeySequence*>(_v) = shortcut(); break;
        case 11: *reinterpret_cast< Qt::ShortcutContext*>(_v) = shortcutContext(); break;
        case 12: *reinterpret_cast< bool*>(_v) = autoRepeat(); break;
        case 13: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        case 14: *reinterpret_cast< MenuRole*>(_v) = menuRole(); break;
        case 15: *reinterpret_cast< SoftKeyRole*>(_v) = softKeyRole(); break;
        case 16: *reinterpret_cast< bool*>(_v) = isIconVisibleInMenu(); break;
        case 17: *reinterpret_cast< Priority*>(_v) = priority(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 1: setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 2: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: setText(*reinterpret_cast< QString*>(_v)); break;
        case 5: setIconText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 7: setStatusTip(*reinterpret_cast< QString*>(_v)); break;
        case 8: setWhatsThis(*reinterpret_cast< QString*>(_v)); break;
        case 9: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 10: setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 11: setShortcutContext(*reinterpret_cast< Qt::ShortcutContext*>(_v)); break;
        case 12: setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 13: setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 14: setMenuRole(*reinterpret_cast< MenuRole*>(_v)); break;
        case 15: setSoftKeyRole(*reinterpret_cast< SoftKeyRole*>(_v)); break;
        case 16: setIconVisibleInMenu(*reinterpret_cast< bool*>(_v)); break;
        case 17: setPriority(*reinterpret_cast< Priority*>(_v)); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 1: *_b = isCheckable(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAction::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAction::triggered(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QAction::hovered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QAction::toggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
